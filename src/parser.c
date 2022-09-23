#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  sym_chunk = 6,
  sym__expression_sequence = 7,
  sym__expression = 8,
  sym__literal = 9,
  sym__atomic_literal = 10,
  sym_nil_literal = 11,
  sym_boolean_literal = 12,
  aux_sym__expression_sequence_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_chunk] = "chunk",
  [sym__expression_sequence] = "_expression_sequence",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym__atomic_literal] = "_atomic_literal",
  [sym_nil_literal] = "nil_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym__expression_sequence_repeat1] = "_expression_sequence_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_chunk] = sym_chunk,
  [sym__expression_sequence] = sym__expression_sequence,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym__atomic_literal] = sym__atomic_literal,
  [sym_nil_literal] = sym_nil_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym__expression_sequence_repeat1] = aux_sym__expression_sequence_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__atomic_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_nil_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__expression_sequence_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(2);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_false);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_chunk] = STATE(12),
    [sym__expression_sequence] = STATE(13),
    [sym__expression] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__atomic_literal] = STATE(5),
    [sym_nil_literal] = STATE(5),
    [sym_boolean_literal] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
  },
  [2] = {
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym__atomic_literal] = STATE(10),
    [sym_nil_literal] = STATE(10),
    [sym_boolean_literal] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
  },
  [3] = {
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym__atomic_literal] = STATE(10),
    [sym_nil_literal] = STATE(10),
    [sym_boolean_literal] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
  },
  [4] = {
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym__atomic_literal] = STATE(10),
    [sym_nil_literal] = STATE(10),
    [sym_boolean_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      aux_sym__expression_sequence_repeat1,
  [10] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym__expression_sequence_repeat1,
  [20] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym__expression_sequence_repeat1,
  [30] = 1,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [35] = 1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [40] = 1,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [45] = 1,
    ACTIONS(28), 1,
      anon_sym_RPAREN,
  [49] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [53] = 1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 10,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 35,
  [SMALL_STATE(10)] = 40,
  [SMALL_STATE(11)] = 45,
  [SMALL_STATE(12)] = 49,
  [SMALL_STATE(13)] = 53,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_literal, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [30] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_arda(void) {
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
