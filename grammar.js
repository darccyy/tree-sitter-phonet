module.exports = grammar({
    name: "phonet",

    rules: {
        source_file: $ => repeat($._line),

        // Statement including semicolon or linebreak
        _line: $ => seq(
            optional($.statement),
            choice("\n", $.semicolon),
        ),
        semicolon: $ => ";",

        // Command statement
        statement: $ => choice(
            $.comment,
            $.mode,
            $.class,
            $.note,
            $.rule,
            $.test,
        ),

        // Comment statement
        comment: $ => seq("#", /[^;\n]+/),

        // Any text, for mode and notes (CAN MATCH NOTHING)
        text: $ => /[\w,. ]*/,

        // Mode statement
        mode: $ => seq(
            "~",
            optional(choice(
                seq("<", $.text, ">"),
                seq("/", $.text, "/"),
                seq("[", $.text, "]"),
            )),
        ),

        // Class definition statement
        class: $ => seq(
            $.class_ident,
            $.class_name,
            $.class_equals,
            $.regex,
        ),
        class_ident: $ => "$",
        class_equals: $ => "=",
        // Class name
        class_name: $ => /\w+/,

        // Note statement
        note: $ => seq(
            $.note_ident,
            $.text,
        ),
        note_ident: $ => "*",

        // For rules and tests
        positive_ident: $ => "+",
        negative_ident: $ => "!",

        // Rule definition statement
        rule: $ => seq(
            choice($.positive_ident, $.negative_ident),
            $.regex,
        ),

        // Test statement
        test: $ => seq(
            $.test_ident,
            choice($.positive_ident, $.negative_ident),
            repeat($.test_word),
        ),
        test_ident: $ => "?",
        test_word: $ => /\w+/,

        // Wrapper for recursive name
        regex: $ => $._regex_recurse,
        // Recursively parse regex string
        _regex_recurse: $ => seq(
            choice(
                $.regex_class,
                $.regex_special,
                $.regex_literal,
            ),
            optional($._regex_recurse), // Recurse
        ),
        // Class name
        regex_class: $ => seq("<", $.class_name, ">"),
        // Literal characters
        regex_literal: $ => /\w+/,
        // Special regex character
        regex_special: $ => choice(
            // Misc. symbols
            "|", ".", "^", "$",
            "*", "+", "?",
            "[", "]", "(", ")",
            // Escaped character
            /\\./,
            // Repeated patterns with {curly braces}
            /\{\d*,?\d*\}/,
            // Look-arounds
            /\(\?(<?[!=]|:)/,
            // Named group definition
            seq(/\(\?/, $._regex_named_group),
            // Named group reference
            seq(/\\k/, $._regex_named_group),
        ),
        _regex_named_group: $ => /<\w+>|"\w+"/,
    }
});

