#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_POUND = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_TILDE = 5,
  anon_sym_LT = 6,
  aux_sym_mode_token1 = 7,
  anon_sym_GT = 8,
  anon_sym_SLASH = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_DOLLAR = 12,
  anon_sym_EQ = 13,
  anon_sym_QMARK = 14,
  sym_positive = 15,
  sym_negative = 16,
  sym_name = 17,
  sym_source_file = 18,
  sym__line = 19,
  sym_statement = 20,
  sym_comment = 21,
  sym_mode = 22,
  sym_class = 23,
  sym_rule = 24,
  sym_test = 25,
  sym_word = 26,
  sym_regex = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_test_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT] = "<",
  [aux_sym_mode_token1] = "mode_token1",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_QMARK] = "\?",
  [sym_positive] = "positive",
  [sym_negative] = "negative",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_statement] = "statement",
  [sym_comment] = "comment",
  [sym_mode] = "mode",
  [sym_class] = "class",
  [sym_rule] = "rule",
  [sym_test] = "test",
  [sym_word] = "word",
  [sym_regex] = "regex",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_test_repeat1] = "test_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_mode_token1] = aux_sym_mode_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_positive] = sym_positive,
  [sym_negative] = sym_negative,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_statement] = sym_statement,
  [sym_comment] = sym_comment,
  [sym_mode] = sym_mode,
  [sym_class] = sym_class,
  [sym_rule] = sym_rule,
  [sym_test] = sym_test,
  [sym_word] = sym_word,
  [sym_regex] = sym_regex,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_test_repeat1] = aux_sym_test_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mode_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_positive] = {
    .visible = true,
    .named = true,
  },
  [sym_negative] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(16);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_positive);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_negative);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_positive] = ACTIONS(1),
    [sym_negative] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym__line] = STATE(3),
    [sym_statement] = STATE(14),
    [sym_comment] = STATE(15),
    [sym_mode] = STATE(15),
    [sym_class] = STATE(15),
    [sym_rule] = STATE(15),
    [sym_test] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [sym_positive] = ACTIONS(17),
    [sym_negative] = ACTIONS(17),
  },
  [2] = {
    [sym__line] = STATE(2),
    [sym_statement] = STATE(14),
    [sym_comment] = STATE(15),
    [sym_mode] = STATE(15),
    [sym_class] = STATE(15),
    [sym_rule] = STATE(15),
    [sym_test] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(24),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(36),
    [sym_positive] = ACTIONS(39),
    [sym_negative] = ACTIONS(39),
  },
  [3] = {
    [sym__line] = STATE(2),
    [sym_statement] = STATE(14),
    [sym_comment] = STATE(15),
    [sym_mode] = STATE(15),
    [sym_class] = STATE(15),
    [sym_rule] = STATE(15),
    [sym_test] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_LF] = ACTIONS(44),
    [anon_sym_SEMI] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(15),
    [sym_positive] = ACTIONS(17),
    [sym_negative] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(50), 7,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_QMARK,
      sym_positive,
      sym_negative,
  [14] = 3,
    ACTIONS(54), 1,
      aux_sym_comment_token1,
    ACTIONS(52), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(5), 2,
      sym_word,
      aux_sym_test_repeat1,
  [26] = 3,
    ACTIONS(59), 1,
      aux_sym_comment_token1,
    ACTIONS(57), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(5), 2,
      sym_word,
      aux_sym_test_repeat1,
  [38] = 3,
    ACTIONS(59), 1,
      aux_sym_comment_token1,
    ACTIONS(61), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(6), 2,
      sym_word,
      aux_sym_test_repeat1,
  [50] = 3,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
  [60] = 1,
    ACTIONS(69), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      aux_sym_comment_token1,
  [66] = 2,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(73), 1,
      anon_sym_SEMI,
  [73] = 1,
    ACTIONS(75), 2,
      sym_positive,
      sym_negative,
  [78] = 2,
    ACTIONS(77), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_regex,
  [85] = 2,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      anon_sym_SEMI,
  [92] = 2,
    ACTIONS(83), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      anon_sym_SEMI,
  [99] = 2,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(89), 1,
      anon_sym_SEMI,
  [106] = 2,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 1,
      anon_sym_SEMI,
  [113] = 2,
    ACTIONS(77), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_regex,
  [120] = 2,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(97), 1,
      anon_sym_SEMI,
  [127] = 2,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [134] = 1,
    ACTIONS(103), 1,
      aux_sym_mode_token1,
  [138] = 1,
    ACTIONS(105), 1,
      anon_sym_GT,
  [142] = 1,
    ACTIONS(105), 1,
      anon_sym_SLASH,
  [146] = 1,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
  [150] = 1,
    ACTIONS(107), 1,
      aux_sym_comment_token1,
  [154] = 1,
    ACTIONS(109), 1,
      anon_sym_EQ,
  [158] = 1,
    ACTIONS(111), 1,
      aux_sym_mode_token1,
  [162] = 1,
    ACTIONS(113), 1,
      aux_sym_mode_token1,
  [166] = 1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [170] = 1,
    ACTIONS(117), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 73,
  [SMALL_STATE(12)] = 78,
  [SMALL_STATE(13)] = 85,
  [SMALL_STATE(14)] = 92,
  [SMALL_STATE(15)] = 99,
  [SMALL_STATE(16)] = 106,
  [SMALL_STATE(17)] = 113,
  [SMALL_STATE(18)] = 120,
  [SMALL_STATE(19)] = 127,
  [SMALL_STATE(20)] = 134,
  [SMALL_STATE(21)] = 138,
  [SMALL_STATE(22)] = 142,
  [SMALL_STATE(23)] = 146,
  [SMALL_STATE(24)] = 150,
  [SMALL_STATE(25)] = 154,
  [SMALL_STATE(26)] = 158,
  [SMALL_STATE(27)] = 162,
  [SMALL_STATE(28)] = 166,
  [SMALL_STATE(29)] = 170,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(9),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_phonet(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
