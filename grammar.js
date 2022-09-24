const PREC = {
    PREFIX: 4,
    MULTIPLICATIVE: 3,
    ADDITIVE: 2,
    LITERAL: 2,
    RELATIONAL: 1,
    ASSIGN: 0,
};

module.exports = grammar({
    name: 'arda',

    word:   $ => $.identifier,
    extras: $ => [/\s/, $.comment],

    conflicts: $ => [
        [$._pattern, $._expression]
    ],

    rules: {
        chunk: $ => optional($._expression_sequence),

        _expression_sequence: $ => separated1($._expression, ';'),

        _expression: $ => prec.left(
            choice(
                $.if_expression,
                $._binary_op,
                $._unary_op,
                seq('(', $._expression, ')'),
                $.identifier,
                $._literal
            )
        ),

        if_expression: $ => seq(
            'if',
            field('condition', $._expression),
            'then',
            field('branch_then', $._expression_sequence),
            optional(seq(
                'else', field('branch_else', $._expression_sequence)
            )),
            'end'
        ),

        //---
        // Binary operators
        //---

        _binary_op: $ => choice(
            $.add_expression,
            $.sub_expression,
            $.mul_expression,
            $.div_expression,
            $.mod_expression,
            $.pow_expression,
            $.match_expression
        ),

        add_expression: $ => infix_binary_op($, '+',    PREC.ADDITIVE),
        sub_expression: $ => infix_binary_op($, '-',    PREC.ADDITIVE),
        mul_expression: $ => infix_binary_op($, '*',    PREC.MULTIPLICATIVE),
        div_expression: $ => infix_binary_op($, '/',    PREC.MULTIPLICATIVE),
        mod_expression: $ => infix_binary_op($, '%',    PREC.MULTIPLICATIVE),
        pow_expression: $ => infix_binary_op($, '**',   PREC.MULTIPLICATIVE, {assoc: 'R'}),

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
            $._atomic_literal,
            $.tuple_pattern,
        ),

        gather_pattern: $ => seq('...', optional($._pattern)),

        pin_pattern: $ => seq(
            '^', alias($.identifier, 'identifier')
        ),

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

        tuple_literal: $ => prec.left(seq(
            '(', $._expression, ',', separated($._expression, ','), ')'
        )),

        tuple_pattern: $ => prec.left(seq('(', $._tuple_pattern_elements, ')')),

        _tuple_pattern_elements: $ => choice(
            $.gather_pattern,
            seq($._pattern, ',', separated($._pattern, ','), optional($.gather_pattern)),
        ),

        record_literal: $ => seq('{', separated($.record_pair, ','), '}'),

        record_pair: $ => seq(
            choice($.identifier, $.sym_literal, $.str_literal),
            '=',
            $._expression
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
        field('left', lhs || $._expression),
        field('op', lx),
        field('right', rhs || $._expression)
    ));
}

function prefix_unary_op($, lx, {operand}={}) {
    return prec.left(PREC.PREFIX, seq(
        field('operator', lx),
        field('operand', operand || $._expression)
    ));
}
