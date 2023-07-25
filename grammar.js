module.exports = grammar({
    name: "phonet",

    rules: {
        source_file: $ => repeat($._line),

        _line: $ => seq(
            optional($.statement),
            choice("\n", ";"),
        ),

        statement: $ => choice(
            $.comment,
            $.mode,
            $.class,
            $.note,
            $.rule,
            $.test,
        ),

        comment: $ => seq("#", /[^;\n]+/),

        mode: $ => seq(
            "~",
            choice(
                seq("<", $.mode_text, ">"),
                seq("/", $.mode_text, "/"),
                seq("[", $.mode_text, "]"),
            ),
        ),
        mode_text: $ => /[^>;\n]+/,

        class: $ => seq(
            $.class_symbol,
            $.name,
            "=",
            $.regex,
        ),
        class_symbol: $ => '$',

        note: $ => seq(
            '*',
            $.note_text,
        ),
        note_text: $ => /[\w ]+/,

        rule: $ => seq(
            choice($.positive, $.negative),
            $.regex,
        ),

        test: $ => seq(
            "?",
            choice($.positive, $.negative),
            repeat($.word),
        ),

        positive: $ => "+",
        negative: $ => "!",

        name: $ => /\w+/,
        word: $ => /\w+/,

        regex: $ => seq(
            choice(
                $.regex_symbol,
                $.regex_name,
                $.regex_other,
            ),
            optional($.regex),
        ),
        regex_symbol: $ => choice('|', '[', ']'),
        regex_name: $ => seq('<', $.name, '>'),
        regex_other: $ => /\w/,
    }
});

