
module.exports = grammar({
    name: 'arda',

    word:   $ => $.identifier,
    extras: $ => [/\s/, $.comment],

    rules: {
        chunk: $ =>
            optional($._expression_sequence),

        _expression_sequence: $ =>
            separated1($._expression, ';'),

        _expression: $ =>
            prec.left(
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
            $.bool_literal
        ),

        nil_literal:    $ => seq('(', ')'),
        bool_literal:   $ => choice('true', 'false')
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