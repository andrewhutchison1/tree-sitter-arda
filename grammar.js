
module.exports = grammar({
    name: 'arda',

    rules: {
        chunk: $ =>
            optional($._expression_sequence),

        _expression_sequence: $ =>
            separated1($._expression, ';'),

        _expression: $ =>
            prec.left(
                choice(
                    $._literal
                )
            ),

        //===
        // Literals
        //===

        _literal: $ =>
            choice(
                $._atomic_literal,
            ),

        _atomic_literal: $ =>
            choice(
                $.nil_literal,
                $.boolean_literal
            ),

        nil_literal:        $ => seq('(', ')'),
        boolean_literal:    $ => choice('true', 'false')
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