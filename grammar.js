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
                seq("<", $.text, ">"),
                seq("/", $.text, "/"),
                seq("[", $.text, "]"),
            ),
        ),

        class: $ => seq(
            $.class_symbol,
            $.name,
            "=",
            $.regex,
        ),
        class_symbol: $ => '$',

        note: $ => seq(
            '*',
            $.text,
        ),

        rule: $ => seq(
            choice($.positive, $.negative),
            $.regex,
        ),

        test: $ => seq(
            "?",
            choice($.positive, $.negative),
            repeat($.test_word),
        ),
        test_word: $ => /\w+/,

        positive: $ => "+",
        negative: $ => "!",

        name: $ => /\w+/,
        text: $ => /[\w,. ]+/,

        regex: $ => seq(
            choice(
                $.regex_symbol,
                $.regex_name,
                $.regex_other,
            ),
            optional($.regex),
        ),
        regex_symbol: $ => choice(
            '|', '^', '$',
            '*', '+', '?',
            '[', ']', '(', ')',
            /\(\?[:=<!]{1,2}/, // this is wrong
            /\{\d*,?\d*\}/,
        ),
        regex_name: $ => seq('<', $.name, '>'),
        regex_other: $ => /\w/,
    }
});

