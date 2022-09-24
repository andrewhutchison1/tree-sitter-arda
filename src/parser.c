#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_if = 5,
  anon_sym_then = 6,
  anon_sym_else = 7,
  anon_sym_end = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_PERCENT = 13,
  anon_sym_STAR_STAR = 14,
  sym_comment = 15,
  sym_sym_literal = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  sym_int_literal = 19,
  sym__dec_float_literal = 20,
  sym__hex_float_literal = 21,
  anon_sym_SQUOTE = 22,
  aux_sym_str_literal_token1 = 23,
  anon_sym_SQUOTE2 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_str_literal_token2 = 26,
  anon_sym_DQUOTE2 = 27,
  sym_escape_sequence = 28,
  anon_sym_COMMA = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_EQ = 32,
  sym_chunk = 33,
  sym__expression_sequence = 34,
  sym__expression = 35,
  sym_if_expression = 36,
  sym__binary_op = 37,
  sym_add_expression = 38,
  sym_sub_expression = 39,
  sym_mul_expression = 40,
  sym_div_expression = 41,
  sym_mod_expression = 42,
  sym_pow_expression = 43,
  sym__unary_op = 44,
  sym_negate_expression = 45,
  sym__literal = 46,
  sym__atomic_literal = 47,
  sym__compound_literal = 48,
  sym_nil_literal = 49,
  sym_bool_literal = 50,
  sym_float_literal = 51,
  sym_str_literal = 52,
  sym_tuple_literal = 53,
  sym_record_literal = 54,
  sym_record_pair = 55,
  aux_sym__expression_sequence_repeat1 = 56,
  aux_sym_str_literal_repeat1 = 57,
  aux_sym_str_literal_repeat2 = 58,
  aux_sym_str_literal_repeat3 = 59,
  aux_sym_tuple_literal_repeat1 = 60,
  aux_sym_record_literal_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [sym_comment] = "comment",
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
  [sym_if_expression] = "if_expression",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [sym_comment] = sym_comment,
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
  [sym_if_expression] = sym_if_expression,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
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
  [sym_if_expression] = {
    .visible = true,
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
  field_branch_else = 1,
  field_branch_then = 2,
  field_condition = 3,
  field_left = 4,
  field_op = 5,
  field_operand = 6,
  field_operator = 7,
  field_right = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_branch_else] = "branch_else",
  [field_branch_then] = "branch_then",
  [field_condition] = "condition",
  [field_left] = "left",
  [field_op] = "op",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 1},
    {field_operator, 0},
  [2] =
    {field_left, 0},
    {field_op, 1},
    {field_right, 2},
  [5] =
    {field_branch_then, 3},
    {field_condition, 1},
  [7] =
    {field_branch_else, 5},
    {field_branch_then, 3},
    {field_condition, 1},
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
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(35);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(40);
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
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#') ADVANCE(39);
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
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(35);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
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
      if (lookahead == '#') ADVANCE(40);
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
      if (lookahead == '#') ADVANCE(39);
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
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'h') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 20:
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
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
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
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [sym_chunk] = STATE(75),
    [sym__expression_sequence] = STATE(74),
    [sym__expression] = STATE(46),
    [sym_if_expression] = STATE(46),
    [sym__binary_op] = STATE(46),
    [sym_add_expression] = STATE(46),
    [sym_sub_expression] = STATE(46),
    [sym_mul_expression] = STATE(46),
    [sym_div_expression] = STATE(46),
    [sym_mod_expression] = STATE(46),
    [sym_pow_expression] = STATE(46),
    [sym__unary_op] = STATE(46),
    [sym_negate_expression] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__atomic_literal] = STATE(46),
    [sym__compound_literal] = STATE(46),
    [sym_nil_literal] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_float_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_tuple_literal] = STATE(46),
    [sym_record_literal] = STATE(46),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(7),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [2] = {
    [sym__expression] = STATE(47),
    [sym_if_expression] = STATE(47),
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
    [aux_sym_str_literal_repeat3] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(29),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [3] = {
    [sym__expression] = STATE(47),
    [sym_if_expression] = STATE(47),
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
    [aux_sym_str_literal_repeat3] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(37),
    [anon_sym_end] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(29),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [4] = {
    [sym__expression_sequence] = STATE(70),
    [sym__expression] = STATE(46),
    [sym_if_expression] = STATE(46),
    [sym__binary_op] = STATE(46),
    [sym_add_expression] = STATE(46),
    [sym_sub_expression] = STATE(46),
    [sym_mul_expression] = STATE(46),
    [sym_div_expression] = STATE(46),
    [sym_mod_expression] = STATE(46),
    [sym_pow_expression] = STATE(46),
    [sym__unary_op] = STATE(46),
    [sym_negate_expression] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__atomic_literal] = STATE(46),
    [sym__compound_literal] = STATE(46),
    [sym_nil_literal] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_float_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_tuple_literal] = STATE(46),
    [sym_record_literal] = STATE(46),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(7),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [5] = {
    [sym__expression] = STATE(51),
    [sym_if_expression] = STATE(51),
    [sym__binary_op] = STATE(51),
    [sym_add_expression] = STATE(51),
    [sym_sub_expression] = STATE(51),
    [sym_mul_expression] = STATE(51),
    [sym_div_expression] = STATE(51),
    [sym_mod_expression] = STATE(51),
    [sym_pow_expression] = STATE(51),
    [sym__unary_op] = STATE(51),
    [sym_negate_expression] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__atomic_literal] = STATE(51),
    [sym__compound_literal] = STATE(51),
    [sym_nil_literal] = STATE(51),
    [sym_bool_literal] = STATE(51),
    [sym_float_literal] = STATE(51),
    [sym_str_literal] = STATE(51),
    [sym_tuple_literal] = STATE(51),
    [sym_record_literal] = STATE(51),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(39),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [6] = {
    [sym__expression] = STATE(53),
    [sym_if_expression] = STATE(53),
    [sym__binary_op] = STATE(53),
    [sym_add_expression] = STATE(53),
    [sym_sub_expression] = STATE(53),
    [sym_mul_expression] = STATE(53),
    [sym_div_expression] = STATE(53),
    [sym_mod_expression] = STATE(53),
    [sym_pow_expression] = STATE(53),
    [sym__unary_op] = STATE(53),
    [sym_negate_expression] = STATE(53),
    [sym__literal] = STATE(53),
    [sym__atomic_literal] = STATE(53),
    [sym__compound_literal] = STATE(53),
    [sym_nil_literal] = STATE(53),
    [sym_bool_literal] = STATE(53),
    [sym_float_literal] = STATE(53),
    [sym_str_literal] = STATE(53),
    [sym_tuple_literal] = STATE(53),
    [sym_record_literal] = STATE(53),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(45),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [7] = {
    [sym__expression] = STATE(48),
    [sym_if_expression] = STATE(48),
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
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(51),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [8] = {
    [sym__expression_sequence] = STATE(73),
    [sym__expression] = STATE(46),
    [sym_if_expression] = STATE(46),
    [sym__binary_op] = STATE(46),
    [sym_add_expression] = STATE(46),
    [sym_sub_expression] = STATE(46),
    [sym_mul_expression] = STATE(46),
    [sym_div_expression] = STATE(46),
    [sym_mod_expression] = STATE(46),
    [sym_pow_expression] = STATE(46),
    [sym__unary_op] = STATE(46),
    [sym_negate_expression] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__atomic_literal] = STATE(46),
    [sym__compound_literal] = STATE(46),
    [sym_nil_literal] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_float_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_tuple_literal] = STATE(46),
    [sym_record_literal] = STATE(46),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(7),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [9] = {
    [sym__expression] = STATE(53),
    [sym_if_expression] = STATE(53),
    [sym__binary_op] = STATE(53),
    [sym_add_expression] = STATE(53),
    [sym_sub_expression] = STATE(53),
    [sym_mul_expression] = STATE(53),
    [sym_div_expression] = STATE(53),
    [sym_mod_expression] = STATE(53),
    [sym_pow_expression] = STATE(53),
    [sym__unary_op] = STATE(53),
    [sym_negate_expression] = STATE(53),
    [sym__literal] = STATE(53),
    [sym__atomic_literal] = STATE(53),
    [sym__compound_literal] = STATE(53),
    [sym_nil_literal] = STATE(53),
    [sym_bool_literal] = STATE(53),
    [sym_float_literal] = STATE(53),
    [sym_str_literal] = STATE(53),
    [sym_tuple_literal] = STATE(53),
    [sym_record_literal] = STATE(53),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(45),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [10] = {
    [sym__expression] = STATE(47),
    [sym_if_expression] = STATE(47),
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
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(29),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [11] = {
    [sym__expression] = STATE(52),
    [sym_if_expression] = STATE(52),
    [sym__binary_op] = STATE(52),
    [sym_add_expression] = STATE(52),
    [sym_sub_expression] = STATE(52),
    [sym_mul_expression] = STATE(52),
    [sym_div_expression] = STATE(52),
    [sym_mod_expression] = STATE(52),
    [sym_pow_expression] = STATE(52),
    [sym__unary_op] = STATE(52),
    [sym_negate_expression] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__atomic_literal] = STATE(52),
    [sym__compound_literal] = STATE(52),
    [sym_nil_literal] = STATE(52),
    [sym_bool_literal] = STATE(52),
    [sym_float_literal] = STATE(52),
    [sym_str_literal] = STATE(52),
    [sym_tuple_literal] = STATE(52),
    [sym_record_literal] = STATE(52),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(59),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [12] = {
    [sym__expression] = STATE(55),
    [sym_if_expression] = STATE(55),
    [sym__binary_op] = STATE(55),
    [sym_add_expression] = STATE(55),
    [sym_sub_expression] = STATE(55),
    [sym_mul_expression] = STATE(55),
    [sym_div_expression] = STATE(55),
    [sym_mod_expression] = STATE(55),
    [sym_pow_expression] = STATE(55),
    [sym__unary_op] = STATE(55),
    [sym_negate_expression] = STATE(55),
    [sym__literal] = STATE(55),
    [sym__atomic_literal] = STATE(55),
    [sym__compound_literal] = STATE(55),
    [sym_nil_literal] = STATE(55),
    [sym_bool_literal] = STATE(55),
    [sym_float_literal] = STATE(55),
    [sym_str_literal] = STATE(55),
    [sym_tuple_literal] = STATE(55),
    [sym_record_literal] = STATE(55),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(63),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [13] = {
    [sym__expression] = STATE(53),
    [sym_if_expression] = STATE(53),
    [sym__binary_op] = STATE(53),
    [sym_add_expression] = STATE(53),
    [sym_sub_expression] = STATE(53),
    [sym_mul_expression] = STATE(53),
    [sym_div_expression] = STATE(53),
    [sym_mod_expression] = STATE(53),
    [sym_pow_expression] = STATE(53),
    [sym__unary_op] = STATE(53),
    [sym_negate_expression] = STATE(53),
    [sym__literal] = STATE(53),
    [sym__atomic_literal] = STATE(53),
    [sym__compound_literal] = STATE(53),
    [sym_nil_literal] = STATE(53),
    [sym_bool_literal] = STATE(53),
    [sym_float_literal] = STATE(53),
    [sym_str_literal] = STATE(53),
    [sym_tuple_literal] = STATE(53),
    [sym_record_literal] = STATE(53),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(45),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [14] = {
    [sym__expression] = STATE(44),
    [sym_if_expression] = STATE(44),
    [sym__binary_op] = STATE(44),
    [sym_add_expression] = STATE(44),
    [sym_sub_expression] = STATE(44),
    [sym_mul_expression] = STATE(44),
    [sym_div_expression] = STATE(44),
    [sym_mod_expression] = STATE(44),
    [sym_pow_expression] = STATE(44),
    [sym__unary_op] = STATE(44),
    [sym_negate_expression] = STATE(44),
    [sym__literal] = STATE(44),
    [sym__atomic_literal] = STATE(44),
    [sym__compound_literal] = STATE(44),
    [sym_nil_literal] = STATE(44),
    [sym_bool_literal] = STATE(44),
    [sym_float_literal] = STATE(44),
    [sym_str_literal] = STATE(44),
    [sym_tuple_literal] = STATE(44),
    [sym_record_literal] = STATE(44),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(67),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [15] = {
    [sym__expression] = STATE(43),
    [sym_if_expression] = STATE(43),
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
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(71),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [16] = {
    [sym__expression] = STATE(45),
    [sym_if_expression] = STATE(45),
    [sym__binary_op] = STATE(45),
    [sym_add_expression] = STATE(45),
    [sym_sub_expression] = STATE(45),
    [sym_mul_expression] = STATE(45),
    [sym_div_expression] = STATE(45),
    [sym_mod_expression] = STATE(45),
    [sym_pow_expression] = STATE(45),
    [sym__unary_op] = STATE(45),
    [sym_negate_expression] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__atomic_literal] = STATE(45),
    [sym__compound_literal] = STATE(45),
    [sym_nil_literal] = STATE(45),
    [sym_bool_literal] = STATE(45),
    [sym_float_literal] = STATE(45),
    [sym_str_literal] = STATE(45),
    [sym_tuple_literal] = STATE(45),
    [sym_record_literal] = STATE(45),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(75),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [17] = {
    [sym__expression] = STATE(42),
    [sym_if_expression] = STATE(42),
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
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(79),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [18] = {
    [sym__expression] = STATE(26),
    [sym_if_expression] = STATE(26),
    [sym__binary_op] = STATE(26),
    [sym_add_expression] = STATE(26),
    [sym_sub_expression] = STATE(26),
    [sym_mul_expression] = STATE(26),
    [sym_div_expression] = STATE(26),
    [sym_mod_expression] = STATE(26),
    [sym_pow_expression] = STATE(26),
    [sym__unary_op] = STATE(26),
    [sym_negate_expression] = STATE(26),
    [sym__literal] = STATE(26),
    [sym__atomic_literal] = STATE(26),
    [sym__compound_literal] = STATE(26),
    [sym_nil_literal] = STATE(26),
    [sym_bool_literal] = STATE(26),
    [sym_float_literal] = STATE(26),
    [sym_str_literal] = STATE(26),
    [sym_tuple_literal] = STATE(26),
    [sym_record_literal] = STATE(26),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(83),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [19] = {
    [sym__expression] = STATE(36),
    [sym_if_expression] = STATE(36),
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
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(87),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [20] = {
    [sym__expression] = STATE(34),
    [sym_if_expression] = STATE(34),
    [sym__binary_op] = STATE(34),
    [sym_add_expression] = STATE(34),
    [sym_sub_expression] = STATE(34),
    [sym_mul_expression] = STATE(34),
    [sym_div_expression] = STATE(34),
    [sym_mod_expression] = STATE(34),
    [sym_pow_expression] = STATE(34),
    [sym__unary_op] = STATE(34),
    [sym_negate_expression] = STATE(34),
    [sym__literal] = STATE(34),
    [sym__atomic_literal] = STATE(34),
    [sym__compound_literal] = STATE(34),
    [sym_nil_literal] = STATE(34),
    [sym_bool_literal] = STATE(34),
    [sym_float_literal] = STATE(34),
    [sym_str_literal] = STATE(34),
    [sym_tuple_literal] = STATE(34),
    [sym_record_literal] = STATE(34),
    [aux_sym_str_literal_repeat3] = STATE(21),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_sym_literal] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_int_literal] = ACTIONS(91),
    [sym__dec_float_literal] = ACTIONS(19),
    [sym__hex_float_literal] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_STAR,
    STATE(22), 1,
      aux_sym_str_literal_repeat3,
    ACTIONS(95), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [32] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_str_literal_repeat3,
    ACTIONS(99), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [64] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(109), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [89] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(99), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(113), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_STAR,
    ACTIONS(117), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_STAR,
    ACTIONS(121), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_STAR,
    ACTIONS(125), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_STAR,
    ACTIONS(129), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(133), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_STAR,
    ACTIONS(137), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(141), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(145), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(149), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(153), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [356] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR,
    ACTIONS(157), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(167), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_STAR,
    ACTIONS(171), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_STAR,
    ACTIONS(175), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_STAR,
    ACTIONS(179), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(183), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(187), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [516] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR,
    ACTIONS(191), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [544] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR,
    ACTIONS(193), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(195), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [594] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(205), 1,
      anon_sym_DASH,
    STATE(58), 1,
      aux_sym__expression_sequence_repeat1,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_end,
  [627] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(205), 1,
      anon_sym_DASH,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_end,
  [655] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(205), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_tuple_literal_repeat1,
  [686] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_str_literal_repeat3,
    STATE(71), 1,
      sym_record_pair,
    STATE(72), 1,
      sym_str_literal,
    ACTIONS(213), 2,
      sym_identifier,
      sym_sym_literal,
  [712] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_str_literal_repeat3,
    STATE(68), 1,
      sym_record_pair,
    STATE(72), 1,
      sym_str_literal,
    ACTIONS(213), 2,
      sym_identifier,
      sym_sym_literal,
  [738] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(205), 1,
      anon_sym_DASH,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 1,
      anon_sym_COMMA,
  [766] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(205), 1,
      anon_sym_DASH,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [792] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(205), 1,
      anon_sym_DASH,
    ACTIONS(225), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [818] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_str_literal_repeat3,
    STATE(71), 1,
      sym_record_pair,
    STATE(72), 1,
      sym_str_literal,
    ACTIONS(213), 2,
      sym_identifier,
      sym_sym_literal,
  [844] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(205), 1,
      anon_sym_DASH,
    ACTIONS(229), 1,
      anon_sym_then,
  [869] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_str_literal_repeat3,
    STATE(71), 1,
      sym_record_pair,
    STATE(72), 1,
      sym_str_literal,
    ACTIONS(213), 2,
      sym_identifier,
      sym_sym_literal,
  [892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym__expression_sequence_repeat1,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_end,
  [907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym__expression_sequence_repeat1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_end,
  [922] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym_str_literal_token1,
    ACTIONS(240), 1,
      anon_sym_SQUOTE2,
    ACTIONS(242), 1,
      sym_escape_sequence,
    STATE(62), 1,
      aux_sym_str_literal_repeat1,
  [938] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_str_literal_token1,
    ACTIONS(246), 1,
      anon_sym_SQUOTE2,
    ACTIONS(248), 1,
      sym_escape_sequence,
    STATE(59), 1,
      aux_sym_str_literal_repeat1,
  [954] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(250), 1,
      aux_sym_str_literal_token2,
    ACTIONS(253), 1,
      anon_sym_DQUOTE2,
    ACTIONS(255), 1,
      sym_escape_sequence,
    STATE(61), 1,
      aux_sym_str_literal_repeat2,
  [970] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(258), 1,
      aux_sym_str_literal_token1,
    ACTIONS(261), 1,
      anon_sym_SQUOTE2,
    ACTIONS(263), 1,
      sym_escape_sequence,
    STATE(62), 1,
      aux_sym_str_literal_repeat1,
  [986] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE2,
    ACTIONS(266), 1,
      aux_sym_str_literal_token2,
    ACTIONS(268), 1,
      sym_escape_sequence,
    STATE(61), 1,
      aux_sym_str_literal_repeat2,
  [1002] = 5,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_DQUOTE2,
    ACTIONS(270), 1,
      aux_sym_str_literal_token2,
    ACTIONS(272), 1,
      sym_escape_sequence,
    STATE(63), 1,
      aux_sym_str_literal_repeat2,
  [1018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_record_literal_repeat1,
  [1031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_tuple_literal_repeat1,
  [1044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_record_literal_repeat1,
  [1057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_record_literal_repeat1,
  [1070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_tuple_literal_repeat1,
  [1083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_else,
    ACTIONS(292), 1,
      anon_sym_end,
  [1093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_EQ,
  [1108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_end,
  [1115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
  [1122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 32,
  [SMALL_STATE(23)] = 64,
  [SMALL_STATE(24)] = 89,
  [SMALL_STATE(25)] = 114,
  [SMALL_STATE(26)] = 136,
  [SMALL_STATE(27)] = 158,
  [SMALL_STATE(28)] = 180,
  [SMALL_STATE(29)] = 202,
  [SMALL_STATE(30)] = 224,
  [SMALL_STATE(31)] = 246,
  [SMALL_STATE(32)] = 268,
  [SMALL_STATE(33)] = 290,
  [SMALL_STATE(34)] = 312,
  [SMALL_STATE(35)] = 334,
  [SMALL_STATE(36)] = 356,
  [SMALL_STATE(37)] = 384,
  [SMALL_STATE(38)] = 406,
  [SMALL_STATE(39)] = 428,
  [SMALL_STATE(40)] = 450,
  [SMALL_STATE(41)] = 472,
  [SMALL_STATE(42)] = 494,
  [SMALL_STATE(43)] = 516,
  [SMALL_STATE(44)] = 544,
  [SMALL_STATE(45)] = 572,
  [SMALL_STATE(46)] = 594,
  [SMALL_STATE(47)] = 627,
  [SMALL_STATE(48)] = 655,
  [SMALL_STATE(49)] = 686,
  [SMALL_STATE(50)] = 712,
  [SMALL_STATE(51)] = 738,
  [SMALL_STATE(52)] = 766,
  [SMALL_STATE(53)] = 792,
  [SMALL_STATE(54)] = 818,
  [SMALL_STATE(55)] = 844,
  [SMALL_STATE(56)] = 869,
  [SMALL_STATE(57)] = 892,
  [SMALL_STATE(58)] = 907,
  [SMALL_STATE(59)] = 922,
  [SMALL_STATE(60)] = 938,
  [SMALL_STATE(61)] = 954,
  [SMALL_STATE(62)] = 970,
  [SMALL_STATE(63)] = 986,
  [SMALL_STATE(64)] = 1002,
  [SMALL_STATE(65)] = 1018,
  [SMALL_STATE(66)] = 1031,
  [SMALL_STATE(67)] = 1044,
  [SMALL_STATE(68)] = 1057,
  [SMALL_STATE(69)] = 1070,
  [SMALL_STATE(70)] = 1083,
  [SMALL_STATE(71)] = 1093,
  [SMALL_STATE(72)] = 1101,
  [SMALL_STATE(73)] = 1108,
  [SMALL_STATE(74)] = 1115,
  [SMALL_STATE(75)] = 1122,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_sequence, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_sequence, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat3, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2), SHIFT_REPEAT(60),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2), SHIFT_REPEAT(64),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat3, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_literal, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nil_literal, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_expression, 3, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_expression, 3, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_literal, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 6),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_literal, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate_expression, 2, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate_expression, 2, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pow_expression, 3, .production_id = 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_literal, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 5, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 5, .production_id = 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 7, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 7, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_literal, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_expression, 3, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_expression, 3, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expression, 3, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_expression, 3, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_expression, 3, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul_expression, 3, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pair, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_literal_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(10),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat2, 2), SHIFT_REPEAT(61),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat2, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat2, 2), SHIFT_REPEAT(61),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(62),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(62),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_literal_repeat1, 2), SHIFT_REPEAT(56),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_literal_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_literal_repeat1, 2), SHIFT_REPEAT(13),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 1),
  [300] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
