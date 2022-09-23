#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  sym_comment = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  sym_int_literal = 8,
  sym__dec_float_literal = 9,
  sym__hex_float_literal = 10,
  sym_chunk = 11,
  sym__expression_sequence = 12,
  sym__expression = 13,
  sym__literal = 14,
  sym__atomic_literal = 15,
  sym_nil_literal = 16,
  sym_bool_literal = 17,
  sym_float_literal = 18,
  aux_sym__expression_sequence_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_int_literal] = "int_literal",
  [sym__dec_float_literal] = "_dec_float_literal",
  [sym__hex_float_literal] = "_hex_float_literal",
  [sym_chunk] = "chunk",
  [sym__expression_sequence] = "_expression_sequence",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym__atomic_literal] = "_atomic_literal",
  [sym_nil_literal] = "nil_literal",
  [sym_bool_literal] = "bool_literal",
  [sym_float_literal] = "float_literal",
  [aux_sym__expression_sequence_repeat1] = "_expression_sequence_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_int_literal] = sym_int_literal,
  [sym__dec_float_literal] = sym__dec_float_literal,
  [sym__hex_float_literal] = sym__hex_float_literal,
  [sym_chunk] = sym_chunk,
  [sym__expression_sequence] = sym__expression_sequence,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym__atomic_literal] = sym__atomic_literal,
  [sym_nil_literal] = sym_nil_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym_float_literal] = sym_float_literal,
  [aux_sym__expression_sequence_repeat1] = aux_sym__expression_sequence_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__dec_float_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_float_literal] = {
    .visible = false,
    .named = true,
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
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
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
  [14] = 14,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(24);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(25);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(3);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(5);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__dec_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__dec_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__hex_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 't') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 9:
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
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym__dec_float_literal] = ACTIONS(1),
    [sym__hex_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_chunk] = STATE(13),
    [sym__expression_sequence] = STATE(14),
    [sym__expression] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__atomic_literal] = STATE(5),
    [sym_nil_literal] = STATE(5),
    [sym_bool_literal] = STATE(5),
    [sym_float_literal] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_int_literal] = ACTIONS(7),
    [sym__dec_float_literal] = ACTIONS(13),
    [sym__hex_float_literal] = ACTIONS(13),
  },
  [2] = {
    [sym__expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__atomic_literal] = STATE(11),
    [sym_nil_literal] = STATE(11),
    [sym_bool_literal] = STATE(11),
    [sym_float_literal] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_int_literal] = ACTIONS(17),
    [sym__dec_float_literal] = ACTIONS(13),
    [sym__hex_float_literal] = ACTIONS(13),
  },
  [3] = {
    [sym__expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__atomic_literal] = STATE(11),
    [sym_nil_literal] = STATE(11),
    [sym_bool_literal] = STATE(11),
    [sym_float_literal] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_int_literal] = ACTIONS(17),
    [sym__dec_float_literal] = ACTIONS(13),
    [sym__hex_float_literal] = ACTIONS(13),
  },
  [4] = {
    [sym__expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__atomic_literal] = STATE(11),
    [sym_nil_literal] = STATE(11),
    [sym_bool_literal] = STATE(11),
    [sym_float_literal] = STATE(11),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_int_literal] = ACTIONS(17),
    [sym__dec_float_literal] = ACTIONS(13),
    [sym__hex_float_literal] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      aux_sym__expression_sequence_repeat1,
  [13] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym__expression_sequence_repeat1,
  [26] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym__expression_sequence_repeat1,
  [39] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [47] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [55] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [63] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [71] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
  [78] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
  [85] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 13,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 39,
  [SMALL_STATE(9)] = 47,
  [SMALL_STATE(10)] = 55,
  [SMALL_STATE(11)] = 63,
  [SMALL_STATE(12)] = 71,
  [SMALL_STATE(13)] = 78,
  [SMALL_STATE(14)] = 85,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_literal, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 1),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
