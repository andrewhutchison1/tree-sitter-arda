const PREC = {
    PREFIX: 6,
    MULTIPLICATIVE: 5,
    ADDITIVE: 4,
    LITERAL: 4,
    RELATIONAL: 3,
    CONJUNCTION: 2,
    DISJUNCTION: 1,
    ASSIGNMENT: 0,
};

module.exports = grammar({
    name: 'arda',

    word:   $ => $.identifier,
    extras: $ => [/\s/, $.comment],

    conflicts: $ => [
        [$._pattern, $._expression],
        [$.record_pattern, $.record_literal]
    ],

    rules: {
        chunk: $ => optional($._expression_sequence),

        _expression_sequence: $ => separated1($._expression, ';'),

        _body: $ => choice(
            $.block,
            $._expression
        ),

        block: $ => prec.left(seq(
            $._expression,
            repeat1(seq(';', $._expression)),
            optional(';')
        )),

        _expression: $ => prec.left(
            choice(
                $.fun_expression,
                $.do_expression,
                $.if_expression,
                $._binary_op,
                $._unary_op,
                seq('(', $._expression, ')'),
                $.identifier,
                $._literal
            )
        ),

        _conditional_expression: $ => choice(
            $.match_expression,
            $._expression,
        ),

        fun_expression: $ => seq(
            'fun',
            optional(field('name', $.identifier)),
            choice(
                seq($._parameter_list, field('body', $._body)),
                seq(repeat1($.case_fun), optional($.case_else))
            ),
            'end'
        ),

        case_fun: $ => seq(
            'case', $._parameter_list, field('body', choice($.do_expression, $._arrow_body))
        ),

        case_else: $ => seq(
            'else', field('body', choice($.do_expression, $._arrow_body))
        ),

        _arrow_body: $ => seq('=>', $._expression),

        _parameter_list: $ => seq(
            '(',
            optional($.positional_params),
            optional(seq(';', $.keyword_params)),
            ')'
        ),

        positional_params: $ => choice(
            $._tuple_pattern_elements,
            $._pattern
        ),

        keyword_params: $ => choice(
            $._record_pattern_elements
        ),

        //---
        // Do expression
        //---

        do_expression: $ => seq('do', $._expression_sequence, 'end'),

        //---
        // If expression
        //---

        if_expression: $ => seq(
            'if',
            $._init_condition,
            'then',
            field('then', $._body),
            optional(seq('else', field('else', $._body))),
            'end'
        ),

        _init_condition: $ => seq(
            optional(seq(
                field('init', $.define_expression, ','),
                ';'
            )),
            field('cond', $._conditional_expression)
        ),

        //---
        // Binary operators
        //---

        _binary_op: $ => choice(
            $.define_expression,
            $.add_expression,
            $.sub_expression,
            $.mul_expression,
            $.div_expression,
            $.mod_expression,
            $.pow_expression,
            $.orelse_expression,
        ),

        define_expression: $ => infix_binary_op($, ':=', PREC.ASSIGNMENT, {lhs: $._pattern}),
        add_expression: $ => infix_binary_op($, '+',    PREC.ADDITIVE),
        sub_expression: $ => infix_binary_op($, '-',    PREC.ADDITIVE),
        mul_expression: $ => infix_binary_op($, '*',    PREC.MULTIPLICATIVE),
        div_expression: $ => infix_binary_op($, '/',    PREC.MULTIPLICATIVE),
        mod_expression: $ => infix_binary_op($, '%',    PREC.MULTIPLICATIVE),
        pow_expression: $ => infix_binary_op($, '**',   PREC.MULTIPLICATIVE, {assoc: 'R'}),
        orelse_expression: $ => infix_binary_op($, 'orelse', PREC.DISJUNCTION),

        match_expression: $ => infix_binary_op($, '?=', PREC.RELATIONAL, {lhs: $._pattern}),

        //---
        // Unary operators
        //---

        _unary_op: $ => choice(
            $.negate_expression,
        ),

        negate_expression: $ => prefix_unary_op($, '-'),

        //---
        // Identifiers, literals, patterns and comments
        //---

        identifier: $ => token(/[a-zA-Z_][a-zA-Z0-9_]*/),
        comment:    $ => token(/#.*/),

        _literal: $ => prec(PREC.LITERAL, choice(
            $._atomic_literal,
            $._compound_literal
        )),

        _pattern: $ => choice(
            $.identifier,
            $.pin_pattern,
            $.opt_pattern,
            $._atomic_literal,
            $.tuple_pattern,
            $.record_pattern
        ),

        gather_pattern: $ => seq('...', optional($._pattern)),
        pin_pattern: $ => seq('^', alias($.identifier, 'identifier')),
        opt_pattern: $ => seq($._pattern, '?'),

        _atomic_literal: $ => choice(
            $.nil_literal,
            $.sym_literal,
            $.bool_literal,
            $.int_literal,
            $.float_literal,
            $.str_literal
        ),

        _compound_literal: $ => choice(
            $.tuple_literal,
            $.record_literal,
        ),

        nil_literal:    $ => seq('(', ')'),
        sym_literal:    $ => token(seq(':', /[a-zA-Z_][a-zA-Z0-9]*/)),
        bool_literal:   $ => choice('true', 'false'),

        int_literal: $ => token(choice(
            intercalated(/[0-9]/, '_'),
            seq(/0[xX]/, optional('_'), intercalated(/[0-9a-fA-F]/, '_')),
            seq(/0[bB]/, optional('_'), intercalated(/[01]/, '_')),
            seq(/0[oO]/, optional('_'), intercalated(/[0-7]/, '_')),
        )),

        float_literal: $ => choice(
            $._dec_float_literal,
            $._hex_float_literal,
        ),

        _dec_float_literal: $ => {
            const digits = /[0-9]+/;
            const exp = /(e|E)(-|\+)?[0-9]+/;

            return token(choice(
                seq(digits, choice(exp, seq('.', optional(exp)))),
                seq(optional(digits), '.', digits, optional(exp))
            ));
        },

        _hex_float_literal: $ => {
            const digits = /[0-9a-fA-F]+/;
            const exp = /(p|P)(-|\+)?[0-9]+/;

            return token(seq(
                /0[xX]/,
                choice(
                    seq(digits, optional('.'), exp),
                    seq(optional(digits), '.', digits, exp)
                )
            ));
        },

        str_literal: $ => {
            const quoted_string = (quote, char) => seq(
                quote,
                repeat(choice($.escape_sequence, char)),
                token.immediate(quote)
            );

            return repeat1(choice(
                quoted_string('\'', /[^'\\\n]+/),
                quoted_string('"', /[^"\\\n]+/)
            ));
        },

        escape_sequence: $ => token.immediate(
            seq(
                '\\',
                choice(
                    /[^xu\n]/,
                    /u[0-9a-fA-F]{4}/,
                    /u{[0-9a-fA-F]+}/,
                    /x[0-9a-fA-F]{2}/
                )
            )
        ),

        //---
        // Tuple literals and patterns
        //---

        tuple_literal: $ => prec.left(seq(
            '(', $._expression, ',', separated($._expression, ','), ')'
        )),

        tuple_pattern: $ => prec.left(seq('(', $._tuple_pattern_elements, ')')),

        _tuple_pattern_elements: $ => choice(
            $.gather_pattern,
            seq($._pattern, ',', separated($._pattern, ','), optional($.gather_pattern)),
        ),

        //---
        // Record literals and patterns
        //---

        record_literal: $ => seq('{', separated($.pair, ','), '}'),
        pair: $ => seq($._record_key, '=', $._expression),

        _record_key: $ => choice(
            $.identifier,
            $.sym_literal,
            $.str_literal,
        ),

        record_pattern: $ => prec.left(seq('{', optional($._record_pattern_elements), '}')),

        _record_pattern_elements: $ => choice(
            $.gather_pattern,
            seq(
                separated1(choice($.pair_pattern, $.key_pattern), ','),
                optional($.gather_pattern)
            )
        ),

        pair_pattern: $ => seq($._record_key, '=', $._pattern),

        key_pattern: $ => choice(
            $.identifier,
            $.opt_pattern
        ),
    }
});

function separated1(rule, sep, {trailing=true}={}) {
    return seq(
        rule,
        repeat(seq(sep, rule)),
        ...(trailing ? [optional(sep)] : [])
    );
}

function separated(rule, sep, {trailing=true}={}) {
    return optional(separated1(rule, sep, {trailing}));
}

function intercalated(rule, sep) {
    return seq(
        rule,
        repeat(choice(
            rule,
            seq(sep, rule)
        ))
    );
}

function infix_binary_op($, lx, pr, {assoc='L', lhs, rhs}={}) {
    const prec_fun = (assoc == 'R') ? prec.right : prec.left;

    return prec_fun(pr, seq(
        field('L', lhs || $._expression),
        field('op', lx),
        field('R', rhs || $._expression)
    ));
}

function prefix_unary_op($, lx, {operand}={}) {
    return prec.left(PREC.PREFIX, seq(
        field('op', lx),
        field('E', operand || $._expression)
    ));
}
