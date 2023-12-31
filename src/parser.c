#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_semicolon = 2,
  anon_sym_POUND = 3,
  aux_sym_comment_token1 = 4,
  sym_text = 5,
  anon_sym_TILDE = 6,
  anon_sym_LT = 7,
  anon_sym_GT = 8,
  anon_sym_SLASH = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_DOLLAR = 12,
  sym_class_equals = 13,
  aux_sym_class_name_token1 = 14,
  anon_sym_STAR = 15,
  anon_sym_PLUS = 16,
  sym_negative_ident = 17,
  anon_sym_QMARK = 18,
  anon_sym_PIPE = 19,
  anon_sym_DOT = 20,
  anon_sym_CARET = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  aux_sym_regex_special_token1 = 24,
  aux_sym_regex_special_token2 = 25,
  aux_sym_regex_special_token3 = 26,
  aux_sym_regex_special_token4 = 27,
  aux_sym_regex_special_token5 = 28,
  sym__regex_named_group = 29,
  sym_source_file = 30,
  sym__line = 31,
  sym_statement = 32,
  sym_comment = 33,
  sym_mode = 34,
  sym_class = 35,
  sym_class_ident = 36,
  sym_class_name = 37,
  sym_note = 38,
  sym_note_ident = 39,
  sym_positive_ident = 40,
  sym_rule = 41,
  sym_test = 42,
  sym_test_ident = 43,
  sym_test_word = 44,
  sym_regex = 45,
  sym__regex_recurse = 46,
  sym_regex_class = 47,
  sym_regex_literal = 48,
  sym_regex_special = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_test_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_semicolon] = "semicolon",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_text] = "text",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOLLAR] = "$",
  [sym_class_equals] = "class_equals",
  [aux_sym_class_name_token1] = "class_name_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [sym_negative_ident] = "negative_ident",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PIPE] = "|",
  [anon_sym_DOT] = ".",
  [anon_sym_CARET] = "^",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_regex_special_token1] = "regex_special_token1",
  [aux_sym_regex_special_token2] = "regex_special_token2",
  [aux_sym_regex_special_token3] = "regex_special_token3",
  [aux_sym_regex_special_token4] = "regex_special_token4",
  [aux_sym_regex_special_token5] = "regex_special_token5",
  [sym__regex_named_group] = "_regex_named_group",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_statement] = "statement",
  [sym_comment] = "comment",
  [sym_mode] = "mode",
  [sym_class] = "class",
  [sym_class_ident] = "class_ident",
  [sym_class_name] = "class_name",
  [sym_note] = "note",
  [sym_note_ident] = "note_ident",
  [sym_positive_ident] = "positive_ident",
  [sym_rule] = "rule",
  [sym_test] = "test",
  [sym_test_ident] = "test_ident",
  [sym_test_word] = "test_word",
  [sym_regex] = "regex",
  [sym__regex_recurse] = "_regex_recurse",
  [sym_regex_class] = "regex_class",
  [sym_regex_literal] = "regex_literal",
  [sym_regex_special] = "regex_special",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_test_repeat1] = "test_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_semicolon] = sym_semicolon,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_text] = sym_text,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_class_equals] = sym_class_equals,
  [aux_sym_class_name_token1] = aux_sym_class_name_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_negative_ident] = sym_negative_ident,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_regex_special_token1] = aux_sym_regex_special_token1,
  [aux_sym_regex_special_token2] = aux_sym_regex_special_token2,
  [aux_sym_regex_special_token3] = aux_sym_regex_special_token3,
  [aux_sym_regex_special_token4] = aux_sym_regex_special_token4,
  [aux_sym_regex_special_token5] = aux_sym_regex_special_token5,
  [sym__regex_named_group] = sym__regex_named_group,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_statement] = sym_statement,
  [sym_comment] = sym_comment,
  [sym_mode] = sym_mode,
  [sym_class] = sym_class,
  [sym_class_ident] = sym_class_ident,
  [sym_class_name] = sym_class_name,
  [sym_note] = sym_note,
  [sym_note_ident] = sym_note_ident,
  [sym_positive_ident] = sym_positive_ident,
  [sym_rule] = sym_rule,
  [sym_test] = sym_test,
  [sym_test_ident] = sym_test_ident,
  [sym_test_word] = sym_test_word,
  [sym_regex] = sym_regex,
  [sym__regex_recurse] = sym__regex_recurse,
  [sym_regex_class] = sym_regex_class,
  [sym_regex_literal] = sym_regex_literal,
  [sym_regex_special] = sym_regex_special,
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
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_class_equals] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_negative_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [aux_sym_regex_special_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_special_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_special_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_special_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_special_token5] = {
    .visible = false,
    .named = false,
  },
  [sym__regex_named_group] = {
    .visible = false,
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
  [sym_class_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_note_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_positive_ident] = {
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
  [sym_test_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_test_word] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__regex_recurse] = {
    .visible = false,
    .named = true,
  },
  [sym_regex_class] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_special] = {
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
  [17] = 11,
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '^') ADVANCE(35);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '~') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == '}') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'k') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '!' ||
          lookahead == '=') ADVANCE(40);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '^') ADVANCE(35);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '~') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_class_equals);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_class_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_negative_ident);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '?') ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_regex_special_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_regex_special_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_regex_special_token3);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_regex_special_token4);
      if (lookahead == '!' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(40);
      if (lookahead == '<') ADVANCE(8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__regex_named_group);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_class_equals] = ACTIONS(1),
    [aux_sym_class_name_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_negative_ident] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_regex_special_token1] = ACTIONS(1),
    [aux_sym_regex_special_token2] = ACTIONS(1),
    [aux_sym_regex_special_token3] = ACTIONS(1),
    [aux_sym_regex_special_token4] = ACTIONS(1),
    [aux_sym_regex_special_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym__line] = STATE(6),
    [sym_statement] = STATE(29),
    [sym_comment] = STATE(20),
    [sym_mode] = STATE(20),
    [sym_class] = STATE(20),
    [sym_class_ident] = STATE(31),
    [sym_note] = STATE(20),
    [sym_note_ident] = STATE(37),
    [sym_positive_ident] = STATE(3),
    [sym_rule] = STATE(20),
    [sym_test] = STATE(20),
    [sym_test_ident] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_semicolon] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [sym_negative_ident] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(25), 1,
      sym_semicolon,
    ACTIONS(27), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      aux_sym_class_name_token1,
    STATE(21), 1,
      sym__regex_recurse,
    ACTIONS(33), 2,
      aux_sym_regex_special_token4,
      aux_sym_regex_special_token5,
    STATE(2), 3,
      sym_regex_class,
      sym_regex_literal,
      sym_regex_special,
    ACTIONS(29), 14,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_regex_special_token1,
      aux_sym_regex_special_token2,
      aux_sym_regex_special_token3,
  [41] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      aux_sym_class_name_token1,
    STATE(24), 1,
      sym_regex,
    STATE(25), 1,
      sym__regex_recurse,
    ACTIONS(33), 2,
      aux_sym_regex_special_token4,
      aux_sym_regex_special_token5,
    STATE(2), 3,
      sym_regex_class,
      sym_regex_literal,
      sym_regex_special,
    ACTIONS(37), 13,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_RPAREN,
      aux_sym_regex_special_token1,
      aux_sym_regex_special_token2,
      aux_sym_regex_special_token3,
  [81] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      aux_sym_class_name_token1,
    STATE(23), 1,
      sym_regex,
    STATE(25), 1,
      sym__regex_recurse,
    ACTIONS(33), 2,
      aux_sym_regex_special_token4,
      aux_sym_regex_special_token5,
    STATE(2), 3,
      sym_regex_class,
      sym_regex_literal,
      sym_regex_special,
    ACTIONS(37), 13,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_RPAREN,
      aux_sym_regex_special_token1,
      aux_sym_regex_special_token2,
      aux_sym_regex_special_token3,
  [121] = 17,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(46), 1,
      sym_semicolon,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      anon_sym_TILDE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_PLUS,
    ACTIONS(64), 1,
      sym_negative_ident,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    STATE(3), 1,
      sym_positive_ident,
    STATE(19), 1,
      sym_test_ident,
    STATE(29), 1,
      sym_statement,
    STATE(31), 1,
      sym_class_ident,
    STATE(37), 1,
      sym_note_ident,
    STATE(5), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(20), 6,
      sym_comment,
      sym_mode,
      sym_class,
      sym_note,
      sym_rule,
      sym_test,
  [179] = 17,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_PLUS,
    ACTIONS(19), 1,
      sym_negative_ident,
    ACTIONS(21), 1,
      anon_sym_QMARK,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(74), 1,
      sym_semicolon,
    STATE(3), 1,
      sym_positive_ident,
    STATE(19), 1,
      sym_test_ident,
    STATE(29), 1,
      sym_statement,
    STATE(31), 1,
      sym_class_ident,
    STATE(37), 1,
      sym_note_ident,
    STATE(5), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(20), 6,
      sym_comment,
      sym_mode,
      sym_class,
      sym_note,
      sym_rule,
      sym_test,
  [237] = 2,
    ACTIONS(76), 1,
      anon_sym_LF,
    ACTIONS(78), 19,
      sym_semicolon,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      aux_sym_class_name_token1,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_regex_special_token1,
      aux_sym_regex_special_token2,
      aux_sym_regex_special_token3,
      aux_sym_regex_special_token4,
      aux_sym_regex_special_token5,
  [262] = 2,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(82), 19,
      sym_semicolon,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      aux_sym_class_name_token1,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_regex_special_token1,
      aux_sym_regex_special_token2,
      aux_sym_regex_special_token3,
      aux_sym_regex_special_token4,
      aux_sym_regex_special_token5,
  [287] = 2,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(86), 19,
      sym_semicolon,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      aux_sym_class_name_token1,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_regex_special_token1,
      aux_sym_regex_special_token2,
      aux_sym_regex_special_token3,
      aux_sym_regex_special_token4,
      aux_sym_regex_special_token5,
  [312] = 2,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(90), 19,
      sym_semicolon,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      aux_sym_class_name_token1,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_regex_special_token1,
      aux_sym_regex_special_token2,
      aux_sym_regex_special_token3,
      aux_sym_regex_special_token4,
      aux_sym_regex_special_token5,
  [337] = 2,
    ACTIONS(94), 3,
      anon_sym_LPAREN,
      aux_sym_regex_special_token4,
      aux_sym_regex_special_token5,
    ACTIONS(92), 15,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      aux_sym_class_name_token1,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_RPAREN,
      aux_sym_regex_special_token1,
      aux_sym_regex_special_token2,
      aux_sym_regex_special_token3,
  [360] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(98), 8,
      sym_semicolon,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym_negative_ident,
      anon_sym_QMARK,
  [375] = 5,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      sym_semicolon,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      anon_sym_SLASH,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
  [391] = 4,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(112), 1,
      sym_semicolon,
    ACTIONS(114), 1,
      aux_sym_class_name_token1,
    STATE(14), 2,
      sym_test_word,
      aux_sym_test_repeat1,
  [405] = 4,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      sym_semicolon,
    ACTIONS(121), 1,
      aux_sym_class_name_token1,
    STATE(14), 2,
      sym_test_word,
      aux_sym_test_repeat1,
  [419] = 4,
    ACTIONS(121), 1,
      aux_sym_class_name_token1,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      sym_semicolon,
    STATE(15), 2,
      sym_test_word,
      aux_sym_test_repeat1,
  [433] = 2,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(94), 2,
      sym_semicolon,
      aux_sym_class_name_token1,
  [441] = 2,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(129), 2,
      sym_semicolon,
      aux_sym_class_name_token1,
  [449] = 3,
    ACTIONS(131), 1,
      anon_sym_PLUS,
    ACTIONS(133), 1,
      sym_negative_ident,
    STATE(16), 1,
      sym_positive_ident,
  [459] = 2,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      sym_semicolon,
  [466] = 2,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      sym_semicolon,
  [473] = 2,
    ACTIONS(143), 1,
      aux_sym_class_name_token1,
    STATE(36), 1,
      sym_class_name,
  [480] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      sym_semicolon,
  [487] = 2,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(151), 1,
      sym_semicolon,
  [494] = 2,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      sym_semicolon,
  [501] = 1,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      sym_negative_ident,
  [506] = 2,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(161), 1,
      sym_semicolon,
  [513] = 1,
    ACTIONS(163), 2,
      anon_sym_GT,
      sym_class_equals,
  [518] = 2,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(167), 1,
      sym_semicolon,
  [525] = 2,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      sym_semicolon,
  [532] = 2,
    ACTIONS(143), 1,
      aux_sym_class_name_token1,
    STATE(42), 1,
      sym_class_name,
  [539] = 2,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(175), 1,
      sym_semicolon,
  [546] = 1,
    ACTIONS(177), 1,
      sym_text,
  [550] = 1,
    ACTIONS(179), 1,
      anon_sym_SLASH,
  [554] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
  [558] = 1,
    ACTIONS(181), 1,
      anon_sym_GT,
  [562] = 1,
    ACTIONS(183), 1,
      sym_text,
  [566] = 1,
    ACTIONS(185), 1,
      sym__regex_named_group,
  [570] = 1,
    ACTIONS(179), 1,
      anon_sym_GT,
  [574] = 1,
    ACTIONS(187), 1,
      sym_text,
  [578] = 1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [582] = 1,
    ACTIONS(191), 1,
      sym_class_equals,
  [586] = 1,
    ACTIONS(193), 1,
      sym_text,
  [590] = 1,
    ACTIONS(195), 1,
      aux_sym_comment_token1,
  [594] = 1,
    ACTIONS(197), 1,
      sym_text,
  [598] = 1,
    ACTIONS(199), 1,
      aux_sym_class_name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 262,
  [SMALL_STATE(9)] = 287,
  [SMALL_STATE(10)] = 312,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 360,
  [SMALL_STATE(13)] = 375,
  [SMALL_STATE(14)] = 391,
  [SMALL_STATE(15)] = 405,
  [SMALL_STATE(16)] = 419,
  [SMALL_STATE(17)] = 433,
  [SMALL_STATE(18)] = 441,
  [SMALL_STATE(19)] = 449,
  [SMALL_STATE(20)] = 459,
  [SMALL_STATE(21)] = 466,
  [SMALL_STATE(22)] = 473,
  [SMALL_STATE(23)] = 480,
  [SMALL_STATE(24)] = 487,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 501,
  [SMALL_STATE(27)] = 506,
  [SMALL_STATE(28)] = 513,
  [SMALL_STATE(29)] = 518,
  [SMALL_STATE(30)] = 525,
  [SMALL_STATE(31)] = 532,
  [SMALL_STATE(32)] = 539,
  [SMALL_STATE(33)] = 546,
  [SMALL_STATE(34)] = 550,
  [SMALL_STATE(35)] = 554,
  [SMALL_STATE(36)] = 558,
  [SMALL_STATE(37)] = 562,
  [SMALL_STATE(38)] = 566,
  [SMALL_STATE(39)] = 570,
  [SMALL_STATE(40)] = 574,
  [SMALL_STATE(41)] = 578,
  [SMALL_STATE(42)] = 582,
  [SMALL_STATE(43)] = 586,
  [SMALL_STATE(44)] = 590,
  [SMALL_STATE(45)] = 594,
  [SMALL_STATE(46)] = 598,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex_recurse, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex_recurse, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_literal, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_literal, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_class, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_class, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_special, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_special, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_special, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_special, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_ident, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positive_ident, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_word, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_word, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex_recurse, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex_recurse, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_ident, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_ident, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_ident, 1),
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
