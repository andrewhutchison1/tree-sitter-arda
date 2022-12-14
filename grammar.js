const PREC = {
    CALL: 8,
    PREFIX: 7,
    EXPONENTIATION: 6,
    MULTIPLICATIVE: 5,
    ADDITIVE: 4,
    LITERAL: 4,
    RELATIONAL: 3,
    CONJUNCTION: 2,
    DISJUNCTION: 1,
    ASSIGNMENT: 0,

    PREDICATE_PATTERN: 5,
    GATHER_PATTERN: 4,
    ALT_PATTERN: 3,
    CAPTURE_PATTERN: 2,
    GUARD_PATTERN: 1,
};

module.exports = grammar({
    name: 'arda',

    word:   $ => $.identifier,
    extras: $ => [/\s/, $.comment],

    conflicts: $ => [
        [$._pattern, $._expression],
        [$.record_pattern, $.record_literal],
        [$.case_else, $._ground_pattern]
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
            ';',
            optional(separated1($._expression, ';'))
        )),

        _expression: $ => prec.left(
            choice(
                $.fun_expression,
                $.match_expression,
                $.receive_expression,
                $.do_expression,
                $.if_expression,
                $.while_expression,
                $._binary_op,
                $._unary_op,
                $.call_expression,
                seq('(', $._expression, ')'),
                $.identifier,
                $._literal
            )
        ),

        case_match: $ => seq(
            field('patn', $._pattern),
            field('body', $._case_body),
            ';'
        ),

        case_test: $ => seq(
            $._init_condition,
            field('body', $._case_body),
            ';'
        ),

        case_fun: $ => seq(
            $._parameter_list, field('body', $._case_body), ';'
        ),

        case_else: $ => seq(
            alias($.ignore_pattern, 'ignore_pattern'),
            field('body', $._case_body),
            ';'
        ),

        case_after: $ => seq(
            'after',
            field('E', $._expression),
            field('body', $._case_body),
            ';'
        ),

        _case_body: $ => choice($.do_expression, seq('=>', $._expression)),

        //---
        // Function expressions
        //---

        fun_expression: $ => seq(
            'fun',
            optional(field('name', $.identifier)),
            choice(
                seq($._parameter_list, field('body', $._body)),
                seq('cases', repeat1($.case_fun), optional($.case_else))
            ),
            'end'
        ),

        _parameter_list: $ => seq(
            '(',
            optional($.positional_params),
            optional(seq(';', $.keyword_params)),
            ')'
        ),

        positional_params: $ => choice(
            $._tuple_pattern_elements,
            $._pattern // necessary because (P) is not a valid tuple pattern
        ),

        keyword_params: $ => $._record_pattern_elements,

        //---
        // match expression
        //---

        match_expression: $ => seq(
            'match',
            seq(
                choice(
                    seq($._init_condition, 'cases', repeat1($.case_match)),
                    seq('cases', repeat1($.case_test))
                ),
                optional($.case_else)
            ),
            'end'
        ),

        //---
        // Receive expression
        //---

        receive_expression: $ => seq($._receive_head, 'end'),
        _receive_head: $ => seq('receive', repeat1($.case_match), optional($.case_after)),

        //---
        // Do expression
        //---

        do_expression: $ => seq($._do_head, 'end'),
        _do_head: $ => seq('do', $._body),

        //---
        // If expression
        //---

        if_expression: $ => seq(
            'if',
            $._init_condition,
            'then', field('then', $._body),
            optional(seq('else', field('else', $._body))),
            'end'
        ),

        _init_condition: $ => seq(
            optional(seq(field('init', $.define_expression), ';')),
            field('cond', $._conditional_expression)
        ),

        _conditional_expression: $ => choice(
            $.test_expression,
            $._expression,
        ),

        //---
        // While expression
        //---

        while_expression: $ => seq(
            'while',
            $._init_condition,
            field('body', choice(
                $._loop_do_body,
                $._loop_receive_body,
            ))
        ),

        _loop_do_body: $ => seq(
            $._do_head,
            optional(seq('else', field('else', $._body))),
            'end'
        ),

        _loop_receive_body: $ => seq(
            alias($._receive_head, $.receive_expression),
            optional(seq('else', field('else', $._body))),
            'end'
        ),

        //---
        // Binary operators
        //---

        _binary_op: $ => choice(
            $.define_expression,
            $.assign_expression,
            $.send_expression,
            $.dot_expression,
            $.lt_expression,
            $.gt_expression,
            $.eq_expression,
            $.ne_expression,
            $.le_expression,
            $.ge_expression,
            $.add_expression,
            $.sub_expression,
            $.mul_expression,
            $.div_expression,
            $.mod_expression,
            $.pow_expression,
            $.add_assign_expression,
            $.sub_assign_expression,
            $.mul_assign_expression,
            $.div_assign_expression,
            $.mod_assign_expression,
            $.pow_assign_expression,
            $.and_expression,
            $.or_expression,
            $.orelse_expression,
            $.index_expression,
        ),

        define_expression: $ => infix_binary_op($, ':=', PREC.ASSIGNMENT, {lhs: $._pattern}),
        assign_expression: $ => infix_binary_op($, '=',  PREC.ASSIGNMENT, {assoc: 'R'}),
        send_expression: $ => infix_binary_op($, '<-', PREC.CALL),
        dot_expression: $ => infix_binary_op($, '.', PREC.CALL),

        lt_expression: $ => infix_binary_op($, '<',    PREC.RELATIONAL),
        gt_expression: $ => infix_binary_op($, '>',    PREC.RELATIONAL),
        eq_expression: $ => infix_binary_op($, '==',   PREC.RELATIONAL),
        ne_expression: $ => infix_binary_op($, '!=',   PREC.RELATIONAL),
        le_expression: $ => infix_binary_op($, '<=',   PREC.RELATIONAL),
        ge_expression: $ => infix_binary_op($, '>=',   PREC.RELATIONAL),

        add_expression: $ => infix_binary_op($, '+',    PREC.ADDITIVE),
        sub_expression: $ => infix_binary_op($, '-',    PREC.ADDITIVE),
        mul_expression: $ => infix_binary_op($, '*',    PREC.MULTIPLICATIVE),
        div_expression: $ => infix_binary_op($, '/',    PREC.MULTIPLICATIVE),
        mod_expression: $ => infix_binary_op($, '%',    PREC.MULTIPLICATIVE),
        pow_expression: $ => infix_binary_op($, '**',   PREC.EXPONENTIATION, {assoc: 'R'}),

        add_assign_expression: $ => infix_binary_op($, '+=', PREC.ASSIGNMENT),
        sub_assign_expression: $ => infix_binary_op($, '-=', PREC.ASSIGNMENT),
        mul_assign_expression: $ => infix_binary_op($, '*=', PREC.ASSIGNMENT),
        div_assign_expression: $ => infix_binary_op($, '/=', PREC.ASSIGNMENT),
        mod_assign_expression: $ => infix_binary_op($, '%=', PREC.ASSIGNMENT),
        pow_assign_expression: $ => infix_binary_op($, '**=', PREC.ASSIGNMENT),

        and_expression:     $ => infix_binary_op($, 'and',    PREC.CONJUNCTION),
        or_expression:      $ => infix_binary_op($, 'or',     PREC.DISJUNCTION),
        orelse_expression:  $ => infix_binary_op($, 'orelse', PREC.DISJUNCTION),

        index_expression: $ => prec.left(PREC.CALL, seq(
            field('L', $._expression),
            '[',
            field('R', $._expression),
            ']'
        )),

        test_expression: $ => infix_binary_op($, '?=', PREC.RELATIONAL, {lhs: $._pattern}),

        //---
        // Unary operators
        //---

        _unary_op: $ => choice(
            $.negate_expression,
            $.not_expression
        ),

        negate_expression: $ => prefix_unary_op($, '-'),
        not_expression: $ => prefix_unary_op($, 'not'),

        //---
        // Call expression
        //---

        call_expression: $ => prec.left(PREC.CALL, seq(
            field('E', $._expression),
            '(',
            optional($._argument_list),
            ')'
        )),

        _argument_list: $ => choice(
            seq($.positional_args, optional(seq(';', $.keyword_args))),
            seq(';', $.keyword_args)
        ),

        positional_args: $ => choice(
            $._tuple_elements,
            $._expression // because _tuple_elements does not match _expression
        ),

        keyword_args: $ => $._record_elements,

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
            $._ground_pattern,
            $._unary_pattern,
            $._binary_pattern,
            $.tuple_pattern,
            $.record_pattern,
            seq('(', $._pattern, ')')
        ),

        _ground_pattern: $ => choice(
            $.pin_pattern,
            $.ignore_pattern,
            $._atomic_literal
        ),

        pin_pattern: $ => seq('^', alias($.identifier, 'identifier')),

        ignore_pattern: $ => '_',

        _unary_pattern: $ => choice(
            $.capture_pattern,
            $.guard_pattern,
            $.predicate_pattern
        ),

        capture_pattern: $ => infix_binary_op($, '@', PREC.CAPTURE_PATTERN, {
            lhs: $.identifier,
            rhs: $._pattern
        }),

        guard_pattern: $ => infix_binary_op($, 'when', PREC.GUARD_PATTERN, {
            lhs: $._pattern
        }),

        predicate_pattern: $ => infix_binary_op($, '::', PREC.PREDICATE_PATTERN, {
            lhs: choice($._pattern, $.gather_pattern)
        }),

        _binary_pattern: $ => choice(
            $.alt_pattern
        ),

        alt_pattern: $ => infix_binary_op($, '|', PREC.ALT_PATTERN, {
            assoc: 'R',
            lhs: $._pattern,
            rhs: $._pattern
        }),

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

            return token(seq(
                digits,
                choice(
                    choice(exp, seq('.', optional(exp))),
                    seq('.', digits, optional(exp))
                )
            ));
        },

        _hex_float_literal: $ => {
            const digits = /[0-9a-fA-F]+/;
            const exp = /(p|P)(-|\+)?[0-9]+/;

            return token(seq(
                /0[xX]/,
                seq(digits, choice(
                    seq(optional('.'), exp),
                    seq('.', digits, exp)
                ))
            ));
        },

        str_literal: $ => {
            const quoted_string = (quote, char) => seq(
                quote,
                repeat(choice($.escape_sequence, char)),
                token.immediate(quote)
            );

            return prec.left(repeat1(choice(
                quoted_string('\'', /[^'\\\n]+/),
                quoted_string('"', /[^"\\\n]+/)
            )));
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

        tuple_literal: $ => prec.left(seq('(', $._tuple_elements, ')')),

        _tuple_elements: $ => seq($._expression, ',', separated($._expression, ',')),

        tuple_pattern: $ => prec.left(seq('(', $._tuple_pattern_elements, ')')),

        _tuple_pattern_elements: $ => choice(
            $.gather_pattern,
            seq($._pattern, ',', separated($._pattern, ','), optional($.gather_pattern)),
        ),

        gather_pattern: $ => prec.left(PREC.GATHER_PATTERN, seq(
            '...',
            optional($._pattern)
        )),

        //---
        // Record literals and patterns
        //---

        record_literal: $ => seq('{', optional($._record_elements), '}'),

        _record_elements: $ => separated1($.pair, ','),

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

        key_pattern: $ => choice($.identifier, $.opt_pattern),

        opt_pattern: $ => seq($._pattern, '?'),
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
