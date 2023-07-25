#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  anon_sym_EQ = 11,
  anon_sym_DOLLAR = 12,
  anon_sym_STAR = 13,
  anon_sym_QMARK = 14,
  aux_sym_test_word_token1 = 15,
  anon_sym_PLUS = 16,
  sym_negative = 17,
  sym_text = 18,
  anon_sym_PIPE = 19,
  anon_sym_CARET = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  aux_sym_regex_symbol_token1 = 23,
  aux_sym_regex_symbol_token2 = 24,
  sym_regex_other = 25,
  sym_source_file = 26,
  sym__line = 27,
  sym_statement = 28,
  sym_comment = 29,
  sym_mode = 30,
  sym_class = 31,
  sym_class_symbol = 32,
  sym_note = 33,
  sym_rule = 34,
  sym_test = 35,
  sym_test_word = 36,
  sym_positive = 37,
  sym_name = 38,
  sym_regex = 39,
  sym_regex_symbol = 40,
  sym_regex_name = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_test_repeat1 = 43,
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
  [anon_sym_EQ] = "=",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [aux_sym_test_word_token1] = "test_word_token1",
  [anon_sym_PLUS] = "+",
  [sym_negative] = "negative",
  [sym_text] = "text",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_regex_symbol_token1] = "regex_symbol_token1",
  [aux_sym_regex_symbol_token2] = "regex_symbol_token2",
  [sym_regex_other] = "regex_other",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_statement] = "statement",
  [sym_comment] = "comment",
  [sym_mode] = "mode",
  [sym_class] = "class",
  [sym_class_symbol] = "class_symbol",
  [sym_note] = "note",
  [sym_rule] = "rule",
  [sym_test] = "test",
  [sym_test_word] = "test_word",
  [sym_positive] = "positive",
  [sym_name] = "name",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_test_word_token1] = aux_sym_test_word_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_negative] = sym_negative,
  [sym_text] = sym_text,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_regex_symbol_token1] = aux_sym_regex_symbol_token1,
  [aux_sym_regex_symbol_token2] = aux_sym_regex_symbol_token2,
  [sym_regex_other] = sym_regex_other,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_statement] = sym_statement,
  [sym_comment] = sym_comment,
  [sym_mode] = sym_mode,
  [sym_class] = sym_class,
  [sym_class_symbol] = sym_class_symbol,
  [sym_note] = sym_note,
  [sym_rule] = sym_rule,
  [sym_test] = sym_test,
  [sym_test_word] = sym_test_word,
  [sym_positive] = sym_positive,
  [sym_name] = sym_name,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_test_word_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_negative] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_symbol_token2] = {
    .visible = false,
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
  [sym_class_symbol] = {
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
  [sym_test_word] = {
    .visible = true,
    .named = true,
  },
  [sym_positive] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [14] = 9,
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '~') ADVANCE(16);
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
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '}') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '!' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '=') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '~') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_test_word_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_negative);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '?') ADVANCE(7);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_regex_symbol_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_regex_symbol_token1);
      if (lookahead == '!' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '=') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_regex_symbol_token2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_regex_other);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 8},
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
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_test_word_token1] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_negative] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_regex_symbol_token1] = ACTIONS(1),
    [aux_sym_regex_symbol_token2] = ACTIONS(1),
    [sym_regex_other] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym__line] = STATE(3),
    [sym_statement] = STATE(24),
    [sym_comment] = STATE(28),
    [sym_mode] = STATE(28),
    [sym_class] = STATE(28),
    [sym_class_symbol] = STATE(19),
    [sym_note] = STATE(28),
    [sym_rule] = STATE(28),
    [sym_test] = STATE(28),
    [sym_positive] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [sym_negative] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(28), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(34), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(43), 1,
      anon_sym_QMARK,
    ACTIONS(46), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      sym_negative,
    STATE(5), 1,
      sym_positive,
    STATE(19), 1,
      sym_class_symbol,
    STATE(24), 1,
      sym_statement,
    STATE(2), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(28), 6,
      sym_comment,
      sym_mode,
      sym_class,
      sym_note,
      sym_rule,
      sym_test,
  [52] = 15,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      sym_negative,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_positive,
    STATE(19), 1,
      sym_class_symbol,
    STATE(24), 1,
      sym_statement,
    STATE(2), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(28), 6,
      sym_comment,
      sym_mode,
      sym_class,
      sym_note,
      sym_rule,
      sym_test,
  [104] = 7,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      sym_regex_other,
    STATE(26), 1,
      sym_regex,
    STATE(4), 2,
      sym_regex_symbol,
      sym_regex_name,
    ACTIONS(64), 12,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_regex_symbol_token1,
      aux_sym_regex_symbol_token2,
  [138] = 6,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      sym_regex_other,
    STATE(23), 1,
      sym_regex,
    STATE(4), 2,
      sym_regex_symbol,
      sym_regex_name,
    ACTIONS(70), 11,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      aux_sym_regex_symbol_token1,
      aux_sym_regex_symbol_token2,
  [168] = 6,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      sym_regex_other,
    STATE(21), 1,
      sym_regex,
    STATE(4), 2,
      sym_regex_symbol,
      sym_regex_name,
    ACTIONS(70), 11,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      aux_sym_regex_symbol_token1,
      aux_sym_regex_symbol_token2,
  [198] = 2,
    ACTIONS(74), 1,
      anon_sym_LF,
    ACTIONS(76), 15,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_regex_symbol_token1,
      aux_sym_regex_symbol_token2,
      sym_regex_other,
  [219] = 2,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(80), 15,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_regex_symbol_token1,
      aux_sym_regex_symbol_token2,
      sym_regex_other,
  [240] = 2,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 13,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      aux_sym_regex_symbol_token1,
      aux_sym_regex_symbol_token2,
      sym_regex_other,
  [259] = 2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(88), 8,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym_negative,
  [274] = 4,
    ACTIONS(90), 1,
      anon_sym_LF,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym_test_word_token1,
    STATE(11), 2,
      sym_test_word,
      aux_sym_test_repeat1,
  [288] = 4,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      aux_sym_test_word_token1,
    STATE(11), 2,
      sym_test_word,
      aux_sym_test_repeat1,
  [302] = 4,
    ACTIONS(101), 1,
      aux_sym_test_word_token1,
    ACTIONS(103), 1,
      anon_sym_LF,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(12), 2,
      sym_test_word,
      aux_sym_test_repeat1,
  [316] = 2,
    ACTIONS(82), 1,
      anon_sym_LF,
    ACTIONS(84), 2,
      anon_sym_SEMI,
      aux_sym_test_word_token1,
  [324] = 3,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
  [334] = 3,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      sym_negative,
    STATE(13), 1,
      sym_positive,
  [344] = 2,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 2,
      anon_sym_SEMI,
      aux_sym_test_word_token1,
  [352] = 2,
    ACTIONS(121), 1,
      aux_sym_test_word_token1,
    STATE(33), 1,
      sym_name,
  [359] = 2,
    ACTIONS(121), 1,
      aux_sym_test_word_token1,
    STATE(35), 1,
      sym_name,
  [366] = 2,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      anon_sym_SEMI,
  [373] = 2,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(129), 1,
      anon_sym_SEMI,
  [380] = 2,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(133), 1,
      anon_sym_SEMI,
  [387] = 2,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      anon_sym_SEMI,
  [394] = 2,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      anon_sym_SEMI,
  [401] = 1,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_EQ,
  [406] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      anon_sym_SEMI,
  [413] = 2,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(151), 1,
      anon_sym_SEMI,
  [420] = 2,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      anon_sym_SEMI,
  [427] = 1,
    ACTIONS(157), 1,
      sym_text,
  [431] = 1,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
  [435] = 1,
    ACTIONS(161), 1,
      aux_sym_comment_token1,
  [439] = 1,
    ACTIONS(159), 1,
      anon_sym_SLASH,
  [443] = 1,
    ACTIONS(163), 1,
      anon_sym_GT,
  [447] = 1,
    ACTIONS(159), 1,
      anon_sym_GT,
  [451] = 1,
    ACTIONS(165), 1,
      anon_sym_EQ,
  [455] = 1,
    ACTIONS(167), 1,
      sym_text,
  [459] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [463] = 1,
    ACTIONS(171), 1,
      sym_text,
  [467] = 1,
    ACTIONS(173), 1,
      sym_text,
  [471] = 1,
    ACTIONS(175), 1,
      aux_sym_test_word_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 198,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 259,
  [SMALL_STATE(11)] = 274,
  [SMALL_STATE(12)] = 288,
  [SMALL_STATE(13)] = 302,
  [SMALL_STATE(14)] = 316,
  [SMALL_STATE(15)] = 324,
  [SMALL_STATE(16)] = 334,
  [SMALL_STATE(17)] = 344,
  [SMALL_STATE(18)] = 352,
  [SMALL_STATE(19)] = 359,
  [SMALL_STATE(20)] = 366,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 380,
  [SMALL_STATE(23)] = 387,
  [SMALL_STATE(24)] = 394,
  [SMALL_STATE(25)] = 401,
  [SMALL_STATE(26)] = 406,
  [SMALL_STATE(27)] = 413,
  [SMALL_STATE(28)] = 420,
  [SMALL_STATE(29)] = 427,
  [SMALL_STATE(30)] = 431,
  [SMALL_STATE(31)] = 435,
  [SMALL_STATE(32)] = 439,
  [SMALL_STATE(33)] = 443,
  [SMALL_STATE(34)] = 447,
  [SMALL_STATE(35)] = 451,
  [SMALL_STATE(36)] = 455,
  [SMALL_STATE(37)] = 459,
  [SMALL_STATE(38)] = 463,
  [SMALL_STATE(39)] = 467,
  [SMALL_STATE(40)] = 471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_name, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_name, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_symbol, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_symbol, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positive, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_word, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_word, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_symbol, 1),
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
