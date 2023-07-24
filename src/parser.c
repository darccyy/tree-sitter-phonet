#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_EQ = 4,
  sym_identifier = 5,
  sym_regex = 6,
  sym_source_file = 7,
  sym_statement = 8,
  sym_command = 9,
  sym_class = 10,
  aux_sym_source_file_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_regex] = "regex",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_command] = "command",
  [sym_class] = "class",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_regex] = sym_regex,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_command] = sym_command,
  [sym_class] = sym_class,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(10);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym_statement] = STATE(2),
    [sym_command] = STATE(4),
    [sym_class] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_command,
    STATE(5), 1,
      sym_class,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [17] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    STATE(4), 1,
      sym_command,
    STATE(5), 1,
      sym_class,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [34] = 2,
    ACTIONS(14), 1,
      anon_sym_LF,
    ACTIONS(16), 1,
      anon_sym_SEMI,
  [41] = 2,
    ACTIONS(18), 1,
      anon_sym_LF,
    ACTIONS(20), 1,
      anon_sym_SEMI,
  [48] = 1,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
  [53] = 2,
    ACTIONS(24), 1,
      anon_sym_LF,
    ACTIONS(26), 1,
      anon_sym_SEMI,
  [60] = 1,
    ACTIONS(28), 1,
      sym_identifier,
  [64] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [68] = 1,
    ACTIONS(32), 1,
      anon_sym_EQ,
  [72] = 1,
    ACTIONS(34), 1,
      sym_regex,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 53,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 64,
  [SMALL_STATE(10)] = 68,
  [SMALL_STATE(11)] = 72,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 4),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [30] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
