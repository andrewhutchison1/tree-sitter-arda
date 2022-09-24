#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_PLUS = 3,
  anon_sym_DASH = 4,
  anon_sym_STAR = 5,
  anon_sym_SLASH = 6,
  anon_sym_PERCENT = 7,
  anon_sym_STAR_STAR = 8,
  sym_comment = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_sym_literal = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  sym_int_literal = 15,
  sym__dec_float_literal = 16,
  sym__hex_float_literal = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_str_literal_token1 = 19,
  anon_sym_SQUOTE2 = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_str_literal_token2 = 22,
  anon_sym_DQUOTE2 = 23,
  sym_escape_sequence = 24,
  anon_sym_COMMA = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_EQ = 28,
  sym_chunk = 29,
  sym__expression_sequence = 30,
  sym__expression = 31,
  sym__binary_op = 32,
  sym_add_expression = 33,
  sym_sub_expression = 34,
  sym_mul_expression = 35,
  sym_div_expression = 36,
  sym_mod_expression = 37,
  sym_pow_expression = 38,
  sym__unary_op = 39,
  sym_negate_expression = 40,
  sym__literal = 41,
  sym__atomic_literal = 42,
  sym__compound_literal = 43,
  sym_nil_literal = 44,
  sym_bool_literal = 45,
  sym_float_literal = 46,
  sym_str_literal = 47,
  sym_tuple_literal = 48,
  sym_record_literal = 49,
  sym_record_pair = 50,
  aux_sym__expression_sequence_repeat1 = 51,
  aux_sym_str_literal_repeat1 = 52,
  aux_sym_str_literal_repeat2 = 53,
  aux_sym_str_literal_repeat3 = 54,
  aux_sym_tuple_literal_repeat1 = 55,
  aux_sym_record_literal_repeat1 = 56,
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
  [anon_sym_STAR_STAR] = "**",
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
  [sym_pow_expression] = "pow_expression",
  [sym__unary_op] = "_unary_op",
  [sym_negate_expression] = "negate_expression",
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
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
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
  [sym_pow_expression] = sym_pow_expression,
  [sym__unary_op] = sym__unary_op,
  [sym_negate_expression] = sym_negate_expression,
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
  [anon_sym_STAR_STAR] = {
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
  [sym_pow_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_op] = {
    .visible = false,
    .named = true,
  },
  [sym_negate_expression] = {
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
  field_operand = 3,
  field_operator = 4,
  field_right = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_op] = "op",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 1},
    {field_operator, 0},
  [2] =
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
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
          lookahead == '1') ADVANCE(46);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
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
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_sym_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(7);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(12);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__dec_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__dec_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__hex_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_str_literal_token2);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_str_literal_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
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
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
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
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
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
    [anon_sym_STAR_STAR] = ACTIONS(1),
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
    [sym_chunk] = STATE(67),
    [sym__expression_sequence] = STATE(66),
    [sym__expression] = STATE(41),
    [sym__binary_op] = STATE(41),
    [sym_add_expression] = STATE(41),
    [sym_sub_expression] = STATE(41),
    [sym_mul_expression] = STATE(41),
    [sym_div_expression] = STATE(41),
    [sym_mod_expression] = STATE(41),
    [sym_pow_expression] = STATE(41),
    [sym__unary_op] = STATE(41),
    [sym_negate_expression] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__atomic_literal] = STATE(41),
    [sym__compound_literal] = STATE(41),
    [sym_nil_literal] = STATE(41),
    [sym_bool_literal] = STATE(41),
    [sym_float_literal] = STATE(41),
    [sym_str_literal] = STATE(41),
    [sym_tuple_literal] = STATE(41),
    [sym_record_literal] = STATE(41),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(7),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [2] = {
    [sym__expression] = STATE(43),
    [sym__binary_op] = STATE(43),
    [sym_add_expression] = STATE(43),
    [sym_sub_expression] = STATE(43),
    [sym_mul_expression] = STATE(43),
    [sym_div_expression] = STATE(43),
    [sym_mod_expression] = STATE(43),
    [sym_pow_expression] = STATE(43),
    [sym__unary_op] = STATE(43),
    [sym_negate_expression] = STATE(43),
    [sym__literal] = STATE(43),
    [sym__atomic_literal] = STATE(43),
    [sym__compound_literal] = STATE(43),
    [sym_nil_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_float_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_tuple_literal] = STATE(43),
    [sym_record_literal] = STATE(43),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(27),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [3] = {
    [sym__expression] = STATE(49),
    [sym__binary_op] = STATE(49),
    [sym_add_expression] = STATE(49),
    [sym_sub_expression] = STATE(49),
    [sym_mul_expression] = STATE(49),
    [sym_div_expression] = STATE(49),
    [sym_mod_expression] = STATE(49),
    [sym_pow_expression] = STATE(49),
    [sym__unary_op] = STATE(49),
    [sym_negate_expression] = STATE(49),
    [sym__literal] = STATE(49),
    [sym__atomic_literal] = STATE(49),
    [sym__compound_literal] = STATE(49),
    [sym_nil_literal] = STATE(49),
    [sym_bool_literal] = STATE(49),
    [sym_float_literal] = STATE(49),
    [sym_str_literal] = STATE(49),
    [sym_tuple_literal] = STATE(49),
    [sym_record_literal] = STATE(49),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(33),
    [sym_sym_literal] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(31),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [4] = {
    [sym__expression] = STATE(42),
    [sym__binary_op] = STATE(42),
    [sym_add_expression] = STATE(42),
    [sym_sub_expression] = STATE(42),
    [sym_mul_expression] = STATE(42),
    [sym_div_expression] = STATE(42),
    [sym_mod_expression] = STATE(42),
    [sym_pow_expression] = STATE(42),
    [sym__unary_op] = STATE(42),
    [sym_negate_expression] = STATE(42),
    [sym__literal] = STATE(42),
    [sym__atomic_literal] = STATE(42),
    [sym__compound_literal] = STATE(42),
    [sym_nil_literal] = STATE(42),
    [sym_bool_literal] = STATE(42),
    [sym_float_literal] = STATE(42),
    [sym_str_literal] = STATE(42),
    [sym_tuple_literal] = STATE(42),
    [sym_record_literal] = STATE(42),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(39),
    [sym_sym_literal] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(37),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [5] = {
    [sym__expression] = STATE(47),
    [sym__binary_op] = STATE(47),
    [sym_add_expression] = STATE(47),
    [sym_sub_expression] = STATE(47),
    [sym_mul_expression] = STATE(47),
    [sym_div_expression] = STATE(47),
    [sym_mod_expression] = STATE(47),
    [sym_pow_expression] = STATE(47),
    [sym__unary_op] = STATE(47),
    [sym_negate_expression] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__atomic_literal] = STATE(47),
    [sym__compound_literal] = STATE(47),
    [sym_nil_literal] = STATE(47),
    [sym_bool_literal] = STATE(47),
    [sym_float_literal] = STATE(47),
    [sym_str_literal] = STATE(47),
    [sym_tuple_literal] = STATE(47),
    [sym_record_literal] = STATE(47),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(45),
    [sym_sym_literal] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(43),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [6] = {
    [sym__expression] = STATE(47),
    [sym__binary_op] = STATE(47),
    [sym_add_expression] = STATE(47),
    [sym_sub_expression] = STATE(47),
    [sym_mul_expression] = STATE(47),
    [sym_div_expression] = STATE(47),
    [sym_mod_expression] = STATE(47),
    [sym_pow_expression] = STATE(47),
    [sym__unary_op] = STATE(47),
    [sym_negate_expression] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__atomic_literal] = STATE(47),
    [sym__compound_literal] = STATE(47),
    [sym_nil_literal] = STATE(47),
    [sym_bool_literal] = STATE(47),
    [sym_float_literal] = STATE(47),
    [sym_str_literal] = STATE(47),
    [sym_tuple_literal] = STATE(47),
    [sym_record_literal] = STATE(47),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(49),
    [sym_sym_literal] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(43),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [7] = {
    [sym__expression] = STATE(43),
    [sym__binary_op] = STATE(43),
    [sym_add_expression] = STATE(43),
    [sym_sub_expression] = STATE(43),
    [sym_mul_expression] = STATE(43),
    [sym_div_expression] = STATE(43),
    [sym_mod_expression] = STATE(43),
    [sym_pow_expression] = STATE(43),
    [sym__unary_op] = STATE(43),
    [sym_negate_expression] = STATE(43),
    [sym__literal] = STATE(43),
    [sym__atomic_literal] = STATE(43),
    [sym__compound_literal] = STATE(43),
    [sym_nil_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_float_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_tuple_literal] = STATE(43),
    [sym_record_literal] = STATE(43),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(27),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [8] = {
    [sym__expression] = STATE(48),
    [sym__binary_op] = STATE(48),
    [sym_add_expression] = STATE(48),
    [sym_sub_expression] = STATE(48),
    [sym_mul_expression] = STATE(48),
    [sym_div_expression] = STATE(48),
    [sym_mod_expression] = STATE(48),
    [sym_pow_expression] = STATE(48),
    [sym__unary_op] = STATE(48),
    [sym_negate_expression] = STATE(48),
    [sym__literal] = STATE(48),
    [sym__atomic_literal] = STATE(48),
    [sym__compound_literal] = STATE(48),
    [sym_nil_literal] = STATE(48),
    [sym_bool_literal] = STATE(48),
    [sym_float_literal] = STATE(48),
    [sym_str_literal] = STATE(48),
    [sym_tuple_literal] = STATE(48),
    [sym_record_literal] = STATE(48),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(53),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [9] = {
    [sym__expression] = STATE(39),
    [sym__binary_op] = STATE(39),
    [sym_add_expression] = STATE(39),
    [sym_sub_expression] = STATE(39),
    [sym_mul_expression] = STATE(39),
    [sym_div_expression] = STATE(39),
    [sym_mod_expression] = STATE(39),
    [sym_pow_expression] = STATE(39),
    [sym__unary_op] = STATE(39),
    [sym_negate_expression] = STATE(39),
    [sym__literal] = STATE(39),
    [sym__atomic_literal] = STATE(39),
    [sym__compound_literal] = STATE(39),
    [sym_nil_literal] = STATE(39),
    [sym_bool_literal] = STATE(39),
    [sym_float_literal] = STATE(39),
    [sym_str_literal] = STATE(39),
    [sym_tuple_literal] = STATE(39),
    [sym_record_literal] = STATE(39),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(57),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [10] = {
    [sym__expression] = STATE(43),
    [sym__binary_op] = STATE(43),
    [sym_add_expression] = STATE(43),
    [sym_sub_expression] = STATE(43),
    [sym_mul_expression] = STATE(43),
    [sym_div_expression] = STATE(43),
    [sym_mod_expression] = STATE(43),
    [sym_pow_expression] = STATE(43),
    [sym__unary_op] = STATE(43),
    [sym_negate_expression] = STATE(43),
    [sym__literal] = STATE(43),
    [sym__atomic_literal] = STATE(43),
    [sym__compound_literal] = STATE(43),
    [sym_nil_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_float_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_tuple_literal] = STATE(43),
    [sym_record_literal] = STATE(43),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(27),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [11] = {
    [sym__expression] = STATE(29),
    [sym__binary_op] = STATE(29),
    [sym_add_expression] = STATE(29),
    [sym_sub_expression] = STATE(29),
    [sym_mul_expression] = STATE(29),
    [sym_div_expression] = STATE(29),
    [sym_mod_expression] = STATE(29),
    [sym_pow_expression] = STATE(29),
    [sym__unary_op] = STATE(29),
    [sym_negate_expression] = STATE(29),
    [sym__literal] = STATE(29),
    [sym__atomic_literal] = STATE(29),
    [sym__compound_literal] = STATE(29),
    [sym_nil_literal] = STATE(29),
    [sym_bool_literal] = STATE(29),
    [sym_float_literal] = STATE(29),
    [sym_str_literal] = STATE(29),
    [sym_tuple_literal] = STATE(29),
    [sym_record_literal] = STATE(29),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(61),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [12] = {
    [sym__expression] = STATE(35),
    [sym__binary_op] = STATE(35),
    [sym_add_expression] = STATE(35),
    [sym_sub_expression] = STATE(35),
    [sym_mul_expression] = STATE(35),
    [sym_div_expression] = STATE(35),
    [sym_mod_expression] = STATE(35),
    [sym_pow_expression] = STATE(35),
    [sym__unary_op] = STATE(35),
    [sym_negate_expression] = STATE(35),
    [sym__literal] = STATE(35),
    [sym__atomic_literal] = STATE(35),
    [sym__compound_literal] = STATE(35),
    [sym_nil_literal] = STATE(35),
    [sym_bool_literal] = STATE(35),
    [sym_float_literal] = STATE(35),
    [sym_str_literal] = STATE(35),
    [sym_tuple_literal] = STATE(35),
    [sym_record_literal] = STATE(35),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(65),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [13] = {
    [sym__expression] = STATE(36),
    [sym__binary_op] = STATE(36),
    [sym_add_expression] = STATE(36),
    [sym_sub_expression] = STATE(36),
    [sym_mul_expression] = STATE(36),
    [sym_div_expression] = STATE(36),
    [sym_mod_expression] = STATE(36),
    [sym_pow_expression] = STATE(36),
    [sym__unary_op] = STATE(36),
    [sym_negate_expression] = STATE(36),
    [sym__literal] = STATE(36),
    [sym__atomic_literal] = STATE(36),
    [sym__compound_literal] = STATE(36),
    [sym_nil_literal] = STATE(36),
    [sym_bool_literal] = STATE(36),
    [sym_float_literal] = STATE(36),
    [sym_str_literal] = STATE(36),
    [sym_tuple_literal] = STATE(36),
    [sym_record_literal] = STATE(36),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(69),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [14] = {
    [sym__expression] = STATE(37),
    [sym__binary_op] = STATE(37),
    [sym_add_expression] = STATE(37),
    [sym_sub_expression] = STATE(37),
    [sym_mul_expression] = STATE(37),
    [sym_div_expression] = STATE(37),
    [sym_mod_expression] = STATE(37),
    [sym_pow_expression] = STATE(37),
    [sym__unary_op] = STATE(37),
    [sym_negate_expression] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__atomic_literal] = STATE(37),
    [sym__compound_literal] = STATE(37),
    [sym_nil_literal] = STATE(37),
    [sym_bool_literal] = STATE(37),
    [sym_float_literal] = STATE(37),
    [sym_str_literal] = STATE(37),
    [sym_tuple_literal] = STATE(37),
    [sym_record_literal] = STATE(37),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(73),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [15] = {
    [sym__expression] = STATE(47),
    [sym__binary_op] = STATE(47),
    [sym_add_expression] = STATE(47),
    [sym_sub_expression] = STATE(47),
    [sym_mul_expression] = STATE(47),
    [sym_div_expression] = STATE(47),
    [sym_mod_expression] = STATE(47),
    [sym_pow_expression] = STATE(47),
    [sym__unary_op] = STATE(47),
    [sym_negate_expression] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__atomic_literal] = STATE(47),
    [sym__compound_literal] = STATE(47),
    [sym_nil_literal] = STATE(47),
    [sym_bool_literal] = STATE(47),
    [sym_float_literal] = STATE(47),
    [sym_str_literal] = STATE(47),
    [sym_tuple_literal] = STATE(47),
    [sym_record_literal] = STATE(47),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(43),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [16] = {
    [sym__expression] = STATE(23),
    [sym__binary_op] = STATE(23),
    [sym_add_expression] = STATE(23),
    [sym_sub_expression] = STATE(23),
    [sym_mul_expression] = STATE(23),
    [sym_div_expression] = STATE(23),
    [sym_mod_expression] = STATE(23),
    [sym_pow_expression] = STATE(23),
    [sym__unary_op] = STATE(23),
    [sym_negate_expression] = STATE(23),
    [sym__literal] = STATE(23),
    [sym__atomic_literal] = STATE(23),
    [sym__compound_literal] = STATE(23),
    [sym_nil_literal] = STATE(23),
    [sym_bool_literal] = STATE(23),
    [sym_float_literal] = STATE(23),
    [sym_str_literal] = STATE(23),
    [sym_tuple_literal] = STATE(23),
    [sym_record_literal] = STATE(23),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(77),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [17] = {
    [sym__expression] = STATE(40),
    [sym__binary_op] = STATE(40),
    [sym_add_expression] = STATE(40),
    [sym_sub_expression] = STATE(40),
    [sym_mul_expression] = STATE(40),
    [sym_div_expression] = STATE(40),
    [sym_mod_expression] = STATE(40),
    [sym_pow_expression] = STATE(40),
    [sym__unary_op] = STATE(40),
    [sym_negate_expression] = STATE(40),
    [sym__literal] = STATE(40),
    [sym__atomic_literal] = STATE(40),
    [sym__compound_literal] = STATE(40),
    [sym_nil_literal] = STATE(40),
    [sym_bool_literal] = STATE(40),
    [sym_float_literal] = STATE(40),
    [sym_str_literal] = STATE(40),
    [sym_tuple_literal] = STATE(40),
    [sym_record_literal] = STATE(40),
    [aux_sym_str_literal_repeat3] = STATE(19),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_sym_literal] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_int_literal] = ACTIONS(81),
    [sym__dec_float_literal] = ACTIONS(17),
    [sym__hex_float_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_STAR,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_str_literal_repeat3,
    ACTIONS(85), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [29] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_STAR,
    STATE(18), 1,
      aux_sym_str_literal_repeat3,
    ACTIONS(95), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [58] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(99), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [80] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_STAR,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_STAR,
    ACTIONS(111), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_STAR,
    ACTIONS(115), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_STAR,
    ACTIONS(123), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_STAR,
    ACTIONS(127), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_STAR,
    ACTIONS(131), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(135), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_STAR,
    ACTIONS(139), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_STAR,
    ACTIONS(143), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(147), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(151), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [349] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_PERCENT,
    ACTIONS(163), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(165), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(169), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [431] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_PERCENT,
    ACTIONS(163), 1,
      anon_sym_STAR_STAR,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_PERCENT,
    ACTIONS(163), 1,
      anon_sym_STAR_STAR,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [481] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_PERCENT,
    ACTIONS(163), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    STATE(61), 1,
      aux_sym__expression_sequence_repeat1,
  [512] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_PERCENT,
    ACTIONS(163), 1,
      anon_sym_STAR_STAR,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_tuple_literal_repeat1,
  [543] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_PERCENT,
    ACTIONS(163), 1,
      anon_sym_STAR_STAR,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [569] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_str_literal_repeat3,
    STATE(64), 1,
      sym_record_pair,
    STATE(65), 1,
      sym_str_literal,
    ACTIONS(195), 2,
      sym_identifier,
      sym_sym_literal,
  [595] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_str_literal_repeat3,
    STATE(64), 1,
      sym_record_pair,
    STATE(65), 1,
      sym_str_literal,
    ACTIONS(195), 2,
      sym_identifier,
      sym_sym_literal,
  [621] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_str_literal_repeat3,
    STATE(62), 1,
      sym_record_pair,
    STATE(65), 1,
      sym_str_literal,
    ACTIONS(195), 2,
      sym_identifier,
      sym_sym_literal,
  [647] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_PERCENT,
    ACTIONS(163), 1,
      anon_sym_STAR_STAR,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [673] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_PERCENT,
    ACTIONS(163), 1,
      anon_sym_STAR_STAR,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [699] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_PERCENT,
    ACTIONS(163), 1,
      anon_sym_STAR_STAR,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      anon_sym_COMMA,
  [727] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_str_literal_repeat3,
    STATE(64), 1,
      sym_record_pair,
    STATE(65), 1,
      sym_str_literal,
    ACTIONS(195), 2,
      sym_identifier,
      sym_sym_literal,
  [750] = 5,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_str_literal_token1,
    ACTIONS(215), 1,
      anon_sym_SQUOTE2,
    ACTIONS(217), 1,
      sym_escape_sequence,
    STATE(54), 1,
      aux_sym_str_literal_repeat1,
  [766] = 5,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_str_literal_token1,
    ACTIONS(221), 1,
      anon_sym_SQUOTE2,
    ACTIONS(223), 1,
      sym_escape_sequence,
    STATE(51), 1,
      aux_sym_str_literal_repeat1,
  [782] = 5,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_str_literal_token2,
    ACTIONS(228), 1,
      anon_sym_DQUOTE2,
    ACTIONS(230), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym_str_literal_repeat2,
  [798] = 5,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(233), 1,
      aux_sym_str_literal_token1,
    ACTIONS(236), 1,
      anon_sym_SQUOTE2,
    ACTIONS(238), 1,
      sym_escape_sequence,
    STATE(54), 1,
      aux_sym_str_literal_repeat1,
  [814] = 5,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE2,
    ACTIONS(241), 1,
      aux_sym_str_literal_token2,
    ACTIONS(243), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym_str_literal_repeat2,
  [830] = 5,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DQUOTE2,
    ACTIONS(245), 1,
      aux_sym_str_literal_token2,
    ACTIONS(247), 1,
      sym_escape_sequence,
    STATE(55), 1,
      aux_sym_str_literal_repeat2,
  [846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym__expression_sequence_repeat1,
  [859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_record_literal_repeat1,
  [872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_record_literal_repeat1,
  [885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_tuple_literal_repeat1,
  [898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym__expression_sequence_repeat1,
  [911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_record_literal_repeat1,
  [924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_tuple_literal_repeat1,
  [937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_EQ,
  [952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
  [959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 29,
  [SMALL_STATE(20)] = 58,
  [SMALL_STATE(21)] = 80,
  [SMALL_STATE(22)] = 102,
  [SMALL_STATE(23)] = 121,
  [SMALL_STATE(24)] = 140,
  [SMALL_STATE(25)] = 159,
  [SMALL_STATE(26)] = 178,
  [SMALL_STATE(27)] = 197,
  [SMALL_STATE(28)] = 216,
  [SMALL_STATE(29)] = 235,
  [SMALL_STATE(30)] = 254,
  [SMALL_STATE(31)] = 273,
  [SMALL_STATE(32)] = 292,
  [SMALL_STATE(33)] = 311,
  [SMALL_STATE(34)] = 330,
  [SMALL_STATE(35)] = 349,
  [SMALL_STATE(36)] = 374,
  [SMALL_STATE(37)] = 393,
  [SMALL_STATE(38)] = 412,
  [SMALL_STATE(39)] = 431,
  [SMALL_STATE(40)] = 456,
  [SMALL_STATE(41)] = 481,
  [SMALL_STATE(42)] = 512,
  [SMALL_STATE(43)] = 543,
  [SMALL_STATE(44)] = 569,
  [SMALL_STATE(45)] = 595,
  [SMALL_STATE(46)] = 621,
  [SMALL_STATE(47)] = 647,
  [SMALL_STATE(48)] = 673,
  [SMALL_STATE(49)] = 699,
  [SMALL_STATE(50)] = 727,
  [SMALL_STATE(51)] = 750,
  [SMALL_STATE(52)] = 766,
  [SMALL_STATE(53)] = 782,
  [SMALL_STATE(54)] = 798,
  [SMALL_STATE(55)] = 814,
  [SMALL_STATE(56)] = 830,
  [SMALL_STATE(57)] = 846,
  [SMALL_STATE(58)] = 859,
  [SMALL_STATE(59)] = 872,
  [SMALL_STATE(60)] = 885,
  [SMALL_STATE(61)] = 898,
  [SMALL_STATE(62)] = 911,
  [SMALL_STATE(63)] = 924,
  [SMALL_STATE(64)] = 937,
  [SMALL_STATE(65)] = 945,
  [SMALL_STATE(66)] = 952,
  [SMALL_STATE(67)] = 959,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat3, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2), SHIFT_REPEAT(52),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2), SHIFT_REPEAT(56),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat3, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 6),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_expression, 3, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul_expression, 3, .production_id = 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_literal, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_literal, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_literal, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_literal, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nil_literal, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate_expression, 2, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate_expression, 2, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 7),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pow_expression, 3, .production_id = 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_expression, 3, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_expression, 3, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_expression, 3, .production_id = 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_expression, 3, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_literal, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expression, 3, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_literal_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pair, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat2, 2), SHIFT_REPEAT(53),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat2, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat2, 2), SHIFT_REPEAT(53),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(54),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(54),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(10),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_literal_repeat1, 2), SHIFT_REPEAT(50),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_literal_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_literal_repeat1, 2), SHIFT_REPEAT(15),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 1),
  [274] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
