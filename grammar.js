module.exports = grammar({
    name: "phonet",

    rules: {
        source_file: $ => repeat($.statement),

        statement: $ => seq(
            $.command,
            choice('\n', ';'),
        ),

        command: $ => choice(
            $.class,
        ),

        class: $ => seq(
            '$',
            $.identifier,
            '=',
            $.regex,
        ),

        identifier: $ => /\w+/,

        regex: $ => /[^;\n]+/,
    }
});

