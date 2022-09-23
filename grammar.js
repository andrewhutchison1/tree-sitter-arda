
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
            $.int_literal
        ),

        nil_literal:    $ => seq('(', ')'),
        bool_literal:   $ => choice('true', 'false'),

        int_literal: $ => choice(
            make_int_pattern(/[0-9]/),
            make_int_pattern(/[0-9a-fA-F]/, {radix: /0[xX]/}),
            make_int_pattern(/[01]/,        {radix: /0[bB]/}),
            make_int_pattern(/[0-7]/,       {radix: /0[oO]/})
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

function make_int_pattern(digit, {radix}={}) {
    const start = radix ? [radix, optional('_'), digit] : [digit];

    const rules = [
        ...start,
        repeat(seq(optional('_'), repeat1(digit)))
    ];

    return token(seq(...rules));
}