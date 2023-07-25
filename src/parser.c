#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  anon_sym_GT = 7,
  anon_sym_SLASH = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  sym_mode_text = 11,
  anon_sym_EQ = 12,
  sym_class_symbol = 13,
  anon_sym_STAR = 14,
  sym_note_text = 15,
  anon_sym_QMARK = 16,
  sym_positive = 17,
  sym_negative = 18,
  aux_sym_name_token1 = 19,
  anon_sym_PIPE = 20,
  sym_regex_other = 21,
  sym_source_file = 22,
  sym__line = 23,
  sym_statement = 24,
  sym_comment = 25,
  sym_mode = 26,
  sym_class = 27,
  sym_note = 28,
  sym_rule = 29,
  sym_test = 30,
  sym_name = 31,
  sym_word = 32,
  sym_regex = 33,
  sym_regex_symbol = 34,
  sym_regex_name = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_test_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_mode_text] = "mode_text",
  [anon_sym_EQ] = "=",
  [sym_class_symbol] = "class_symbol",
  [anon_sym_STAR] = "*",
  [sym_note_text] = "note_text",
  [anon_sym_QMARK] = "\?",
  [sym_positive] = "positive",
  [sym_negative] = "negative",
  [aux_sym_name_token1] = "name_token1",
  [anon_sym_PIPE] = "|",
  [sym_regex_other] = "regex_other",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_statement] = "statement",
  [sym_comment] = "comment",
  [sym_mode] = "mode",
  [sym_class] = "class",
  [sym_note] = "note",
  [sym_rule] = "rule",
  [sym_test] = "test",
  [sym_name] = "name",
  [sym_word] = "word",
  [sym_regex] = "regex",
  [sym_regex_symbol] = "regex_symbol",
  [sym_regex_name] = "regex_name",
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
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_mode_text] = sym_mode_text,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_class_symbol] = sym_class_symbol,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_note_text] = sym_note_text,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_positive] = sym_positive,
  [sym_negative] = sym_negative,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_regex_other] = sym_regex_other,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_statement] = sym_statement,
  [sym_comment] = sym_comment,
  [sym_mode] = sym_mode,
  [sym_class] = sym_class,
  [sym_note] = sym_note,
  [sym_rule] = sym_rule,
  [sym_test] = sym_test,
  [sym_name] = sym_name,
  [sym_word] = sym_word,
  [sym_regex] = sym_regex,
  [sym_regex_symbol] = sym_regex_symbol,
  [sym_regex_name] = sym_regex_name,
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
  [sym_mode_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_class_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_note_text] = {
    .visible = true,
    .named = true,
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
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_regex_other] = {
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
  [sym_note] = {
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
  [sym_name] = {
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
  [sym_regex_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_name] = {
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
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_mode_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_mode_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_class_symbol);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_note_text);
      if (lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_note_text);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_positive);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_negative);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_regex_other);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
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
    [anon_sym_EQ] = ACTIONS(1),
    [sym_class_symbol] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_positive] = ACTIONS(1),
    [sym_negative] = ACTIONS(1),
    [aux_sym_name_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_regex_other] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__line] = STATE(3),
    [sym_statement] = STATE(16),
    [sym_comment] = STATE(25),
    [sym_mode] = STATE(25),
    [sym_class] = STATE(25),
    [sym_note] = STATE(25),
    [sym_rule] = STATE(25),
    [sym_test] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [sym_class_symbol] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [sym_positive] = ACTIONS(19),
    [sym_negative] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(26), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(32), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      sym_class_symbol,
    ACTIONS(38), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_QMARK,
    STATE(16), 1,
      sym_statement,
    ACTIONS(44), 2,
      sym_positive,
      sym_negative,
    STATE(2), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(25), 6,
      sym_comment,
      sym_mode,
      sym_class,
      sym_note,
      sym_rule,
      sym_test,
  [44] = 12,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      sym_class_symbol,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_statement,
    ACTIONS(19), 2,
      sym_positive,
      sym_negative,
    STATE(2), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(25), 6,
      sym_comment,
      sym_mode,
      sym_class,
      sym_note,
      sym_rule,
      sym_test,
  [88] = 2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 8,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym_class_symbol,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_positive,
      sym_negative,
  [103] = 7,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(59), 1,
      anon_sym_SEMI,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      sym_regex_other,
    STATE(22), 1,
      sym_regex,
    STATE(5), 2,
      sym_regex_symbol,
      sym_regex_name,
    ACTIONS(63), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [128] = 5,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym_regex_other,
    STATE(23), 1,
      sym_regex,
    STATE(5), 2,
      sym_regex_symbol,
      sym_regex_name,
    ACTIONS(69), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [147] = 5,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym_regex_other,
    STATE(19), 1,
      sym_regex,
    STATE(5), 2,
      sym_regex_symbol,
      sym_regex_name,
    ACTIONS(69), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [166] = 2,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(75), 6,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      sym_regex_other,
  [178] = 2,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(79), 6,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      sym_regex_other,
  [190] = 4,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    ACTIONS(85), 1,
      aux_sym_name_token1,
    STATE(12), 2,
      sym_word,
      aux_sym_test_repeat1,
  [204] = 4,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      aux_sym_name_token1,
    STATE(11), 2,
      sym_word,
      aux_sym_test_repeat1,
  [218] = 4,
    ACTIONS(85), 1,
      aux_sym_name_token1,
    ACTIONS(94), 1,
      anon_sym_LF,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    STATE(11), 2,
      sym_word,
      aux_sym_test_repeat1,
  [232] = 3,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
  [242] = 2,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(106), 2,
      anon_sym_SEMI,
      aux_sym_name_token1,
  [250] = 2,
    ACTIONS(108), 1,
      anon_sym_LF,
    ACTIONS(110), 1,
      anon_sym_SEMI,
  [257] = 2,
    ACTIONS(112), 1,
      anon_sym_LF,
    ACTIONS(114), 1,
      anon_sym_SEMI,
  [264] = 2,
    ACTIONS(116), 1,
      aux_sym_name_token1,
    STATE(37), 1,
      sym_name,
  [271] = 1,
    ACTIONS(118), 2,
      anon_sym_GT,
      anon_sym_EQ,
  [276] = 2,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(122), 1,
      anon_sym_SEMI,
  [283] = 2,
    ACTIONS(116), 1,
      aux_sym_name_token1,
    STATE(32), 1,
      sym_name,
  [290] = 2,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      anon_sym_SEMI,
  [297] = 2,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      anon_sym_SEMI,
  [304] = 2,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(134), 1,
      anon_sym_SEMI,
  [311] = 2,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      anon_sym_SEMI,
  [318] = 2,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(142), 1,
      anon_sym_SEMI,
  [325] = 1,
    ACTIONS(144), 2,
      sym_positive,
      sym_negative,
  [330] = 1,
    ACTIONS(146), 1,
      aux_sym_comment_token1,
  [334] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
  [338] = 1,
    ACTIONS(148), 1,
      anon_sym_SLASH,
  [342] = 1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [346] = 1,
    ACTIONS(152), 1,
      sym_mode_text,
  [350] = 1,
    ACTIONS(154), 1,
      anon_sym_GT,
  [354] = 1,
    ACTIONS(148), 1,
      anon_sym_GT,
  [358] = 1,
    ACTIONS(156), 1,
      sym_mode_text,
  [362] = 1,
    ACTIONS(158), 1,
      sym_mode_text,
  [366] = 1,
    ACTIONS(160), 1,
      sym_note_text,
  [370] = 1,
    ACTIONS(162), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 232,
  [SMALL_STATE(14)] = 242,
  [SMALL_STATE(15)] = 250,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 271,
  [SMALL_STATE(19)] = 276,
  [SMALL_STATE(20)] = 283,
  [SMALL_STATE(21)] = 290,
  [SMALL_STATE(22)] = 297,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 311,
  [SMALL_STATE(25)] = 318,
  [SMALL_STATE(26)] = 325,
  [SMALL_STATE(27)] = 330,
  [SMALL_STATE(28)] = 334,
  [SMALL_STATE(29)] = 338,
  [SMALL_STATE(30)] = 342,
  [SMALL_STATE(31)] = 346,
  [SMALL_STATE(32)] = 350,
  [SMALL_STATE(33)] = 354,
  [SMALL_STATE(34)] = 358,
  [SMALL_STATE(35)] = 362,
  [SMALL_STATE(36)] = 366,
  [SMALL_STATE(37)] = 370,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_name, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_name, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_symbol, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_symbol, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
