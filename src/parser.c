#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_PLUS = 3,
  anon_sym_DASH = 4,
  anon_sym_STAR = 5,
  anon_sym_SLASH = 6,
  anon_sym_PERCENT = 7,
  sym_comment = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_sym_literal = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  sym_int_literal = 14,
  sym__dec_float_literal = 15,
  sym__hex_float_literal = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_str_literal_token1 = 18,
  anon_sym_SQUOTE2 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_str_literal_token2 = 21,
  anon_sym_DQUOTE2 = 22,
  sym_escape_sequence = 23,
  anon_sym_COMMA = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_EQ = 27,
  sym_chunk = 28,
  sym__expression_sequence = 29,
  sym__expression = 30,
  sym__binary_op = 31,
  sym_add_expression = 32,
  sym_sub_expression = 33,
  sym_mul_expression = 34,
  sym_div_expression = 35,
  sym_mod_expression = 36,
  sym__literal = 37,
  sym__atomic_literal = 38,
  sym__compound_literal = 39,
  sym_nil_literal = 40,
  sym_bool_literal = 41,
  sym_float_literal = 42,
  sym_str_literal = 43,
  sym_tuple_literal = 44,
  sym_record_literal = 45,
  sym_record_pair = 46,
  aux_sym__expression_sequence_repeat1 = 47,
  aux_sym_str_literal_repeat1 = 48,
  aux_sym_str_literal_repeat2 = 49,
  aux_sym_str_literal_repeat3 = 50,
  aux_sym_tuple_literal_repeat1 = 51,
  aux_sym_record_literal_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_sym_literal] = "sym_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_int_literal] = "int_literal",
  [sym__dec_float_literal] = "_dec_float_literal",
  [sym__hex_float_literal] = "_hex_float_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_str_literal_token1] = "str_literal_token1",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_str_literal_token2] = "str_literal_token2",
  [anon_sym_DQUOTE2] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [sym_chunk] = "chunk",
  [sym__expression_sequence] = "_expression_sequence",
  [sym__expression] = "_expression",
  [sym__binary_op] = "_binary_op",
  [sym_add_expression] = "add_expression",
  [sym_sub_expression] = "sub_expression",
  [sym_mul_expression] = "mul_expression",
  [sym_div_expression] = "div_expression",
  [sym_mod_expression] = "mod_expression",
  [sym__literal] = "_literal",
  [sym__atomic_literal] = "_atomic_literal",
  [sym__compound_literal] = "_compound_literal",
  [sym_nil_literal] = "nil_literal",
  [sym_bool_literal] = "bool_literal",
  [sym_float_literal] = "float_literal",
  [sym_str_literal] = "str_literal",
  [sym_tuple_literal] = "tuple_literal",
  [sym_record_literal] = "record_literal",
  [sym_record_pair] = "record_pair",
  [aux_sym__expression_sequence_repeat1] = "_expression_sequence_repeat1",
  [aux_sym_str_literal_repeat1] = "str_literal_repeat1",
  [aux_sym_str_literal_repeat2] = "str_literal_repeat2",
  [aux_sym_str_literal_repeat3] = "str_literal_repeat3",
  [aux_sym_tuple_literal_repeat1] = "tuple_literal_repeat1",
  [aux_sym_record_literal_repeat1] = "record_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_comment] = sym_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_sym_literal] = sym_sym_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_int_literal] = sym_int_literal,
  [sym__dec_float_literal] = sym__dec_float_literal,
  [sym__hex_float_literal] = sym__hex_float_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_str_literal_token1] = aux_sym_str_literal_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_str_literal_token2] = aux_sym_str_literal_token2,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_chunk] = sym_chunk,
  [sym__expression_sequence] = sym__expression_sequence,
  [sym__expression] = sym__expression,
  [sym__binary_op] = sym__binary_op,
  [sym_add_expression] = sym_add_expression,
  [sym_sub_expression] = sym_sub_expression,
  [sym_mul_expression] = sym_mul_expression,
  [sym_div_expression] = sym_div_expression,
  [sym_mod_expression] = sym_mod_expression,
  [sym__literal] = sym__literal,
  [sym__atomic_literal] = sym__atomic_literal,
  [sym__compound_literal] = sym__compound_literal,
  [sym_nil_literal] = sym_nil_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_str_literal] = sym_str_literal,
  [sym_tuple_literal] = sym_tuple_literal,
  [sym_record_literal] = sym_record_literal,
  [sym_record_pair] = sym_record_pair,
  [aux_sym__expression_sequence_repeat1] = aux_sym__expression_sequence_repeat1,
  [aux_sym_str_literal_repeat1] = aux_sym_str_literal_repeat1,
  [aux_sym_str_literal_repeat2] = aux_sym_str_literal_repeat2,
  [aux_sym_str_literal_repeat3] = aux_sym_str_literal_repeat3,
  [aux_sym_tuple_literal_repeat1] = aux_sym_tuple_literal_repeat1,
  [aux_sym_record_literal_repeat1] = aux_sym_record_literal_repeat1,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [sym_sym_literal] = {
    .visible = true,
    .named = true,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_str_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_str_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [sym__binary_op] = {
    .visible = false,
    .named = true,
  },
  [sym_add_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_mul_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_div_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_expression] = {
    .visible = true,
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
  [sym__compound_literal] = {
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
  [sym_str_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_record_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_record_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__expression_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_literal_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_op = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_op] = "op",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_op, 1},
    {field_right, 2},
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(45);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 26:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_sym_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(7);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(12);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__dec_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__dec_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__hex_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_str_literal_token2);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_str_literal_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
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
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_sym_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym__dec_float_literal] = ACTIONS(1),
    [sym__hex_float_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_chunk] = STATE(62),
    [sym__expression_sequence] = STATE(61),
    [sym__expression] = STATE(36),
    [sym__binary_op] = STATE(36),
    [sym_add_expression] = STATE(36),
    [sym_sub_expression] = STATE(36),
    [sym_mul_expression] = STATE(36),
    [sym_div_expression] = STATE(36),
    [sym_mod_expression] = STATE(36),
    [sym__literal] = STATE(36),
    [sym__atomic_literal] = STATE(36),
    [sym__compound_literal] = STATE(36),
    [sym_nil_literal] = STATE(36),
    [sym_bool_literal] = STATE(36),
    [sym_float_literal] = STATE(36),
    [sym_str_literal] = STATE(36),
    [sym_tuple_literal] = STATE(36),
    [sym_record_literal] = STATE(36),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(7),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [2] = {
    [sym__expression] = STATE(41),
    [sym__binary_op] = STATE(41),
    [sym_add_expression] = STATE(41),
    [sym_sub_expression] = STATE(41),
    [sym_mul_expression] = STATE(41),
    [sym_div_expression] = STATE(41),
    [sym_mod_expression] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__atomic_literal] = STATE(41),
    [sym__compound_literal] = STATE(41),
    [sym_nil_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym_float_literal] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_tuple_literal] = STATE(41),
    [sym_record_literal] = STATE(41),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(25),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [3] = {
    [sym__expression] = STATE(45),
    [sym__binary_op] = STATE(45),
    [sym_add_expression] = STATE(45),
    [sym_sub_expression] = STATE(45),
    [sym_mul_expression] = STATE(45),
    [sym_div_expression] = STATE(45),
    [sym_mod_expression] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__atomic_literal] = STATE(45),
    [sym__compound_literal] = STATE(45),
    [sym_nil_literal] = STATE(45),
    [sym_bool_literal] = STATE(45),
    [sym_float_literal] = STATE(45),
    [sym_str_literal] = STATE(45),
    [sym_tuple_literal] = STATE(45),
    [sym_record_literal] = STATE(45),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(31),
    [sym_sym_literal] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(29),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [4] = {
    [sym__expression] = STATE(41),
    [sym__binary_op] = STATE(41),
    [sym_add_expression] = STATE(41),
    [sym_sub_expression] = STATE(41),
    [sym_mul_expression] = STATE(41),
    [sym_div_expression] = STATE(41),
    [sym_mod_expression] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__atomic_literal] = STATE(41),
    [sym__compound_literal] = STATE(41),
    [sym_nil_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym_float_literal] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_tuple_literal] = STATE(41),
    [sym_record_literal] = STATE(41),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(25),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [5] = {
    [sym__expression] = STATE(39),
    [sym__binary_op] = STATE(39),
    [sym_add_expression] = STATE(39),
    [sym_sub_expression] = STATE(39),
    [sym_mul_expression] = STATE(39),
    [sym_div_expression] = STATE(39),
    [sym_mod_expression] = STATE(39),
    [sym__literal] = STATE(39),
    [sym__atomic_literal] = STATE(39),
    [sym__compound_literal] = STATE(39),
    [sym_nil_literal] = STATE(39),
    [sym_bool_literal] = STATE(39),
    [sym_float_literal] = STATE(39),
    [sym_str_literal] = STATE(39),
    [sym_tuple_literal] = STATE(39),
    [sym_record_literal] = STATE(39),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(39),
    [sym_sym_literal] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(37),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [6] = {
    [sym__expression] = STATE(43),
    [sym__binary_op] = STATE(43),
    [sym_add_expression] = STATE(43),
    [sym_sub_expression] = STATE(43),
    [sym_mul_expression] = STATE(43),
    [sym_div_expression] = STATE(43),
    [sym_mod_expression] = STATE(43),
    [sym__literal] = STATE(43),
    [sym__atomic_literal] = STATE(43),
    [sym__compound_literal] = STATE(43),
    [sym_nil_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_float_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_tuple_literal] = STATE(43),
    [sym_record_literal] = STATE(43),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(45),
    [sym_sym_literal] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(43),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [7] = {
    [sym__expression] = STATE(43),
    [sym__binary_op] = STATE(43),
    [sym_add_expression] = STATE(43),
    [sym_sub_expression] = STATE(43),
    [sym_mul_expression] = STATE(43),
    [sym_div_expression] = STATE(43),
    [sym_mod_expression] = STATE(43),
    [sym__literal] = STATE(43),
    [sym__atomic_literal] = STATE(43),
    [sym__compound_literal] = STATE(43),
    [sym_nil_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_float_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_tuple_literal] = STATE(43),
    [sym_record_literal] = STATE(43),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(49),
    [sym_sym_literal] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(43),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [8] = {
    [sym__expression] = STATE(44),
    [sym__binary_op] = STATE(44),
    [sym_add_expression] = STATE(44),
    [sym_sub_expression] = STATE(44),
    [sym_mul_expression] = STATE(44),
    [sym_div_expression] = STATE(44),
    [sym_mod_expression] = STATE(44),
    [sym__literal] = STATE(44),
    [sym__atomic_literal] = STATE(44),
    [sym__compound_literal] = STATE(44),
    [sym_nil_literal] = STATE(44),
    [sym_bool_literal] = STATE(44),
    [sym_float_literal] = STATE(44),
    [sym_str_literal] = STATE(44),
    [sym_tuple_literal] = STATE(44),
    [sym_record_literal] = STATE(44),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(51),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [9] = {
    [sym__expression] = STATE(43),
    [sym__binary_op] = STATE(43),
    [sym_add_expression] = STATE(43),
    [sym_sub_expression] = STATE(43),
    [sym_mul_expression] = STATE(43),
    [sym_div_expression] = STATE(43),
    [sym_mod_expression] = STATE(43),
    [sym__literal] = STATE(43),
    [sym__atomic_literal] = STATE(43),
    [sym__compound_literal] = STATE(43),
    [sym_nil_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_float_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_tuple_literal] = STATE(43),
    [sym_record_literal] = STATE(43),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(43),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [10] = {
    [sym__expression] = STATE(41),
    [sym__binary_op] = STATE(41),
    [sym_add_expression] = STATE(41),
    [sym_sub_expression] = STATE(41),
    [sym_mul_expression] = STATE(41),
    [sym_div_expression] = STATE(41),
    [sym_mod_expression] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__atomic_literal] = STATE(41),
    [sym__compound_literal] = STATE(41),
    [sym_nil_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym_float_literal] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_tuple_literal] = STATE(41),
    [sym_record_literal] = STATE(41),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(25),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [11] = {
    [sym__expression] = STATE(31),
    [sym__binary_op] = STATE(31),
    [sym_add_expression] = STATE(31),
    [sym_sub_expression] = STATE(31),
    [sym_mul_expression] = STATE(31),
    [sym_div_expression] = STATE(31),
    [sym_mod_expression] = STATE(31),
    [sym__literal] = STATE(31),
    [sym__atomic_literal] = STATE(31),
    [sym__compound_literal] = STATE(31),
    [sym_nil_literal] = STATE(31),
    [sym_bool_literal] = STATE(31),
    [sym_float_literal] = STATE(31),
    [sym_str_literal] = STATE(31),
    [sym_tuple_literal] = STATE(31),
    [sym_record_literal] = STATE(31),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(55),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [12] = {
    [sym__expression] = STATE(33),
    [sym__binary_op] = STATE(33),
    [sym_add_expression] = STATE(33),
    [sym_sub_expression] = STATE(33),
    [sym_mul_expression] = STATE(33),
    [sym_div_expression] = STATE(33),
    [sym_mod_expression] = STATE(33),
    [sym__literal] = STATE(33),
    [sym__atomic_literal] = STATE(33),
    [sym__compound_literal] = STATE(33),
    [sym_nil_literal] = STATE(33),
    [sym_bool_literal] = STATE(33),
    [sym_float_literal] = STATE(33),
    [sym_str_literal] = STATE(33),
    [sym_tuple_literal] = STATE(33),
    [sym_record_literal] = STATE(33),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(59),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [13] = {
    [sym__expression] = STATE(20),
    [sym__binary_op] = STATE(20),
    [sym_add_expression] = STATE(20),
    [sym_sub_expression] = STATE(20),
    [sym_mul_expression] = STATE(20),
    [sym_div_expression] = STATE(20),
    [sym_mod_expression] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__atomic_literal] = STATE(20),
    [sym__compound_literal] = STATE(20),
    [sym_nil_literal] = STATE(20),
    [sym_bool_literal] = STATE(20),
    [sym_float_literal] = STATE(20),
    [sym_str_literal] = STATE(20),
    [sym_tuple_literal] = STATE(20),
    [sym_record_literal] = STATE(20),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(63),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [14] = {
    [sym__expression] = STATE(21),
    [sym__binary_op] = STATE(21),
    [sym_add_expression] = STATE(21),
    [sym_sub_expression] = STATE(21),
    [sym_mul_expression] = STATE(21),
    [sym_div_expression] = STATE(21),
    [sym_mod_expression] = STATE(21),
    [sym__literal] = STATE(21),
    [sym__atomic_literal] = STATE(21),
    [sym__compound_literal] = STATE(21),
    [sym_nil_literal] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_float_literal] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_tuple_literal] = STATE(21),
    [sym_record_literal] = STATE(21),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(67),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [15] = {
    [sym__expression] = STATE(35),
    [sym__binary_op] = STATE(35),
    [sym_add_expression] = STATE(35),
    [sym_sub_expression] = STATE(35),
    [sym_mul_expression] = STATE(35),
    [sym_div_expression] = STATE(35),
    [sym_mod_expression] = STATE(35),
    [sym__literal] = STATE(35),
    [sym__atomic_literal] = STATE(35),
    [sym__compound_literal] = STATE(35),
    [sym_nil_literal] = STATE(35),
    [sym_bool_literal] = STATE(35),
    [sym_float_literal] = STATE(35),
    [sym_str_literal] = STATE(35),
    [sym_tuple_literal] = STATE(35),
    [sym_record_literal] = STATE(35),
    [aux_sym_str_literal_repeat3] = STATE(16),
    [sym_identifier] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(71),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_str_literal_repeat3,
    ACTIONS(75), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [26] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_str_literal_repeat3,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [52] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [71] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [90] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [336] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_PERCENT,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [358] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_PERCENT,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    STATE(56), 1,
      aux_sym__expression_sequence_repeat1,
  [386] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_str_literal_repeat3,
    STATE(59), 1,
      sym_record_pair,
    STATE(60), 1,
      sym_str_literal,
    ACTIONS(133), 2,
      sym_identifier,
      sym_sym_literal,
  [412] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_str_literal_repeat3,
    STATE(57), 1,
      sym_record_pair,
    STATE(60), 1,
      sym_str_literal,
    ACTIONS(133), 2,
      sym_identifier,
      sym_sym_literal,
  [438] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_PERCENT,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_tuple_literal_repeat1,
  [466] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_str_literal_repeat3,
    STATE(59), 1,
      sym_record_pair,
    STATE(60), 1,
      sym_str_literal,
    ACTIONS(133), 2,
      sym_identifier,
      sym_sym_literal,
  [492] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_PERCENT,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [515] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_str_literal_repeat3,
    STATE(59), 1,
      sym_record_pair,
    STATE(60), 1,
      sym_str_literal,
    ACTIONS(133), 2,
      sym_identifier,
      sym_sym_literal,
  [538] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_PERCENT,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(147), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [561] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_PERCENT,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [584] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_PERCENT,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_COMMA,
  [606] = 5,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_str_literal_token1,
    ACTIONS(157), 1,
      anon_sym_SQUOTE2,
    ACTIONS(159), 1,
      sym_escape_sequence,
    STATE(49), 1,
      aux_sym_str_literal_repeat1,
  [622] = 5,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_str_literal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE2,
    ACTIONS(165), 1,
      sym_escape_sequence,
    STATE(46), 1,
      aux_sym_str_literal_repeat1,
  [638] = 5,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_str_literal_token2,
    ACTIONS(170), 1,
      anon_sym_DQUOTE2,
    ACTIONS(172), 1,
      sym_escape_sequence,
    STATE(48), 1,
      aux_sym_str_literal_repeat2,
  [654] = 5,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_str_literal_token1,
    ACTIONS(178), 1,
      anon_sym_SQUOTE2,
    ACTIONS(180), 1,
      sym_escape_sequence,
    STATE(49), 1,
      aux_sym_str_literal_repeat1,
  [670] = 5,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DQUOTE2,
    ACTIONS(183), 1,
      aux_sym_str_literal_token2,
    ACTIONS(185), 1,
      sym_escape_sequence,
    STATE(48), 1,
      aux_sym_str_literal_repeat2,
  [686] = 5,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_DQUOTE2,
    ACTIONS(187), 1,
      aux_sym_str_literal_token2,
    ACTIONS(189), 1,
      sym_escape_sequence,
    STATE(50), 1,
      aux_sym_str_literal_repeat2,
  [702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      aux_sym__expression_sequence_repeat1,
  [715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_record_literal_repeat1,
  [728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_record_literal_repeat1,
  [741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_tuple_literal_repeat1,
  [754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      aux_sym__expression_sequence_repeat1,
  [767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_record_literal_repeat1,
  [780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_tuple_literal_repeat1,
  [793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
  [808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 26,
  [SMALL_STATE(18)] = 52,
  [SMALL_STATE(19)] = 71,
  [SMALL_STATE(20)] = 90,
  [SMALL_STATE(21)] = 106,
  [SMALL_STATE(22)] = 128,
  [SMALL_STATE(23)] = 144,
  [SMALL_STATE(24)] = 160,
  [SMALL_STATE(25)] = 176,
  [SMALL_STATE(26)] = 192,
  [SMALL_STATE(27)] = 208,
  [SMALL_STATE(28)] = 224,
  [SMALL_STATE(29)] = 240,
  [SMALL_STATE(30)] = 256,
  [SMALL_STATE(31)] = 272,
  [SMALL_STATE(32)] = 288,
  [SMALL_STATE(33)] = 304,
  [SMALL_STATE(34)] = 320,
  [SMALL_STATE(35)] = 336,
  [SMALL_STATE(36)] = 358,
  [SMALL_STATE(37)] = 386,
  [SMALL_STATE(38)] = 412,
  [SMALL_STATE(39)] = 438,
  [SMALL_STATE(40)] = 466,
  [SMALL_STATE(41)] = 492,
  [SMALL_STATE(42)] = 515,
  [SMALL_STATE(43)] = 538,
  [SMALL_STATE(44)] = 561,
  [SMALL_STATE(45)] = 584,
  [SMALL_STATE(46)] = 606,
  [SMALL_STATE(47)] = 622,
  [SMALL_STATE(48)] = 638,
  [SMALL_STATE(49)] = 654,
  [SMALL_STATE(50)] = 670,
  [SMALL_STATE(51)] = 686,
  [SMALL_STATE(52)] = 702,
  [SMALL_STATE(53)] = 715,
  [SMALL_STATE(54)] = 728,
  [SMALL_STATE(55)] = 741,
  [SMALL_STATE(56)] = 754,
  [SMALL_STATE(57)] = 767,
  [SMALL_STATE(58)] = 780,
  [SMALL_STATE(59)] = 793,
  [SMALL_STATE(60)] = 801,
  [SMALL_STATE(61)] = 808,
  [SMALL_STATE(62)] = 815,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2), SHIFT_REPEAT(47),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2), SHIFT_REPEAT(51),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_expression, 3, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_literal, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_expression, 3, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_expression, 3, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expression, 3, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_literal_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pair, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat2, 2), SHIFT_REPEAT(48),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat2, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat2, 2), SHIFT_REPEAT(48),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(49),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(49),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(10),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_literal_repeat1, 2), SHIFT_REPEAT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_literal_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_literal_repeat1, 2), SHIFT_REPEAT(9),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 1),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
