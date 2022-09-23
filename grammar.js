
module.exports = grammar({
    name: 'arda',

    word:   $ => $.identifier,
    extras: $ => [/\s/, $.comment],

    rules: {
        chunk: $ => optional($._expression_sequence),

        _expression_sequence: $ => separated1($._expression, ';'),

        _expression: $ => prec.left(
            choice(
                $.identifier,
                $._literal
            )
        ),

        //---
        // Identifiers, literals and comments
        //---

        identifier: $ => token(/[a-zA-Z_][a-zA-Z0-9_]*/),
        comment:    $ => token(/#.*/),

        _literal: $ => choice(
            $._atomic_literal,
        ),

        _atomic_literal: $ => choice(
            $.nil_literal,
            $.bool_literal,
            $.int_literal,
            $.float_literal,
        ),

        nil_literal:    $ => seq('(', ')'),
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
        }
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