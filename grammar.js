module.exports = grammar({
    name: "phonet",

    rules: {
        source_file: $ => repeat($._line),

        _line: $ => seq(
            optional($.statement),
            choice('\n', ';'),
        ),

        statement: $ => choice(
            $.comment,
            $.mode,
            $.class,
            $.rule,
            $.test,
        ),

        comment: $ => seq('#', /[^;\n]+/),

        mode: $ => seq(
            '~',
            choice(
                seq('<', /[^>;\n]+/, '>'),
                seq('/', /[^>;\n]+/, '/'),
                seq('[', /[^>;\n]+/, ']'),
            ),
        ),

        class: $ => seq(
            '$',
            $.name,
            '=',
            $.regex,
        ),

        rule: $ => seq(
            choice($.positive, $.negative),
            $.regex,
        ),

        test: $ => seq(
            '?',
            choice($.positive, $.negative),
            repeat($.word),
        ),

        positive: $ => '+',
        negative: $ => '!',

        name: $ => /\w+/,
        word: $ => /[^;\n]+/,

        regex: $ => /[^;\n]+/,
    }
});

