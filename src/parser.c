#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  sym_comment = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_sym_literal = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_int_literal = 9,
  sym__dec_float_literal = 10,
  sym__hex_float_literal = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_str_literal_token1 = 13,
  anon_sym_SQUOTE2 = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_str_literal_token2 = 16,
  anon_sym_DQUOTE2 = 17,
  sym_escape_sequence = 18,
  anon_sym_COMMA = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_EQ = 22,
  sym_chunk = 23,
  sym__expression_sequence = 24,
  sym__expression = 25,
  sym__literal = 26,
  sym__atomic_literal = 27,
  sym__compound_literal = 28,
  sym_nil_literal = 29,
  sym_bool_literal = 30,
  sym_float_literal = 31,
  sym_str_literal = 32,
  sym_tuple_literal = 33,
  sym_record_literal = 34,
  sym_record_pair = 35,
  aux_sym__expression_sequence_repeat1 = 36,
  aux_sym_str_literal_repeat1 = 37,
  aux_sym_str_literal_repeat2 = 38,
  aux_sym_str_literal_repeat3 = 39,
  aux_sym_tuple_literal_repeat1 = 40,
  aux_sym_record_literal_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
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
          lookahead == '1') ADVANCE(40);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_sym_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(7);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(12);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__dec_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__dec_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__hex_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_str_literal_token2);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_str_literal_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 59:
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
  [19] = {.lex_state = 0},
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
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
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
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_chunk] = STATE(52),
    [sym__expression_sequence] = STATE(50),
    [sym__expression] = STATE(43),
    [sym__literal] = STATE(43),
    [sym__atomic_literal] = STATE(43),
    [sym__compound_literal] = STATE(43),
    [sym_nil_literal] = STATE(43),
    [sym_bool_literal] = STATE(43),
    [sym_float_literal] = STATE(43),
    [sym_str_literal] = STATE(43),
    [sym_tuple_literal] = STATE(43),
    [sym_record_literal] = STATE(43),
    [aux_sym_str_literal_repeat3] = STATE(12),
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
    [sym__expression] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__atomic_literal] = STATE(46),
    [sym__compound_literal] = STATE(46),
    [sym_nil_literal] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_float_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_tuple_literal] = STATE(46),
    [sym_record_literal] = STATE(46),
    [aux_sym_str_literal_repeat3] = STATE(12),
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
    [sym__expression] = STATE(49),
    [sym__literal] = STATE(49),
    [sym__atomic_literal] = STATE(49),
    [sym__compound_literal] = STATE(49),
    [sym_nil_literal] = STATE(49),
    [sym_bool_literal] = STATE(49),
    [sym_float_literal] = STATE(49),
    [sym_str_literal] = STATE(49),
    [sym_tuple_literal] = STATE(49),
    [sym_record_literal] = STATE(49),
    [aux_sym_str_literal_repeat3] = STATE(12),
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
    [sym__expression] = STATE(38),
    [sym__literal] = STATE(38),
    [sym__atomic_literal] = STATE(38),
    [sym__compound_literal] = STATE(38),
    [sym_nil_literal] = STATE(38),
    [sym_bool_literal] = STATE(38),
    [sym_float_literal] = STATE(38),
    [sym_str_literal] = STATE(38),
    [sym_tuple_literal] = STATE(38),
    [sym_record_literal] = STATE(38),
    [aux_sym_str_literal_repeat3] = STATE(12),
    [sym_identifier] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym_sym_literal] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(35),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [5] = {
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__atomic_literal] = STATE(47),
    [sym__compound_literal] = STATE(47),
    [sym_nil_literal] = STATE(47),
    [sym_bool_literal] = STATE(47),
    [sym_float_literal] = STATE(47),
    [sym_str_literal] = STATE(47),
    [sym_tuple_literal] = STATE(47),
    [sym_record_literal] = STATE(47),
    [aux_sym_str_literal_repeat3] = STATE(12),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_sym_literal] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(41),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [6] = {
    [sym__expression] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__atomic_literal] = STATE(46),
    [sym__compound_literal] = STATE(46),
    [sym_nil_literal] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_float_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_tuple_literal] = STATE(46),
    [sym_record_literal] = STATE(46),
    [aux_sym_str_literal_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(47),
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
  [7] = {
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__atomic_literal] = STATE(47),
    [sym__compound_literal] = STATE(47),
    [sym_nil_literal] = STATE(47),
    [sym_bool_literal] = STATE(47),
    [sym_float_literal] = STATE(47),
    [sym_str_literal] = STATE(47),
    [sym_tuple_literal] = STATE(47),
    [sym_record_literal] = STATE(47),
    [aux_sym_str_literal_repeat3] = STATE(12),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(49),
    [sym_sym_literal] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(41),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [8] = {
    [sym__expression] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__atomic_literal] = STATE(45),
    [sym__compound_literal] = STATE(45),
    [sym_nil_literal] = STATE(45),
    [sym_bool_literal] = STATE(45),
    [sym_float_literal] = STATE(45),
    [sym_str_literal] = STATE(45),
    [sym_tuple_literal] = STATE(45),
    [sym_record_literal] = STATE(45),
    [aux_sym_str_literal_repeat3] = STATE(12),
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
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__atomic_literal] = STATE(47),
    [sym__compound_literal] = STATE(47),
    [sym_nil_literal] = STATE(47),
    [sym_bool_literal] = STATE(47),
    [sym_float_literal] = STATE(47),
    [sym_str_literal] = STATE(47),
    [sym_tuple_literal] = STATE(47),
    [sym_record_literal] = STATE(47),
    [aux_sym_str_literal_repeat3] = STATE(12),
    [sym_identifier] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_sym_literal] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_int_literal] = ACTIONS(41),
    [sym__dec_float_literal] = ACTIONS(15),
    [sym__hex_float_literal] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [10] = {
    [sym__expression] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__atomic_literal] = STATE(46),
    [sym__compound_literal] = STATE(46),
    [sym_nil_literal] = STATE(46),
    [sym_bool_literal] = STATE(46),
    [sym_float_literal] = STATE(46),
    [sym_str_literal] = STATE(46),
    [sym_tuple_literal] = STATE(46),
    [sym_record_literal] = STATE(46),
    [aux_sym_str_literal_repeat3] = STATE(12),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_str_literal_repeat3,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [21] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_str_literal_repeat3,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [42] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [56] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_str_literal_repeat3,
    STATE(48), 1,
      sym_record_pair,
    STATE(51), 1,
      sym_str_literal,
    ACTIONS(65), 2,
      sym_identifier,
      sym_sym_literal,
  [82] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_str_literal_repeat3,
    STATE(42), 1,
      sym_record_pair,
    STATE(51), 1,
      sym_str_literal,
    ACTIONS(65), 2,
      sym_identifier,
      sym_sym_literal,
  [108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [122] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_str_literal_repeat3,
    STATE(48), 1,
      sym_record_pair,
    STATE(51), 1,
      sym_str_literal,
    ACTIONS(65), 2,
      sym_identifier,
      sym_sym_literal,
  [148] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      aux_sym_str_literal_repeat3,
    STATE(48), 1,
      sym_record_pair,
    STATE(51), 1,
      sym_str_literal,
    ACTIONS(65), 2,
      sym_identifier,
      sym_sym_literal,
  [171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [292] = 5,
    ACTIONS(97), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_str_literal_token1,
    ACTIONS(102), 1,
      anon_sym_SQUOTE2,
    ACTIONS(104), 1,
      sym_escape_sequence,
    STATE(30), 1,
      aux_sym_str_literal_repeat1,
  [308] = 5,
    ACTIONS(97), 1,
      sym_comment,
    ACTIONS(107), 1,
      aux_sym_str_literal_token1,
    ACTIONS(109), 1,
      anon_sym_SQUOTE2,
    ACTIONS(111), 1,
      sym_escape_sequence,
    STATE(30), 1,
      aux_sym_str_literal_repeat1,
  [324] = 5,
    ACTIONS(97), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_str_literal_token1,
    ACTIONS(115), 1,
      anon_sym_SQUOTE2,
    ACTIONS(117), 1,
      sym_escape_sequence,
    STATE(31), 1,
      aux_sym_str_literal_repeat1,
  [340] = 5,
    ACTIONS(97), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DQUOTE2,
    ACTIONS(119), 1,
      aux_sym_str_literal_token2,
    ACTIONS(121), 1,
      sym_escape_sequence,
    STATE(35), 1,
      aux_sym_str_literal_repeat2,
  [356] = 5,
    ACTIONS(97), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_str_literal_token2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE2,
    ACTIONS(128), 1,
      sym_escape_sequence,
    STATE(34), 1,
      aux_sym_str_literal_repeat2,
  [372] = 5,
    ACTIONS(97), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE2,
    ACTIONS(131), 1,
      aux_sym_str_literal_token2,
    ACTIONS(133), 1,
      sym_escape_sequence,
    STATE(34), 1,
      aux_sym_str_literal_repeat2,
  [388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_record_literal_repeat1,
  [401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym__expression_sequence_repeat1,
  [414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_tuple_literal_repeat1,
  [427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_tuple_literal_repeat1,
  [440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym__expression_sequence_repeat1,
  [453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_record_literal_repeat1,
  [466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_record_literal_repeat1,
  [479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      aux_sym__expression_sequence_repeat1,
  [492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_tuple_literal_repeat1,
  [505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_COMMA,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_EQ,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 21,
  [SMALL_STATE(13)] = 42,
  [SMALL_STATE(14)] = 56,
  [SMALL_STATE(15)] = 82,
  [SMALL_STATE(16)] = 108,
  [SMALL_STATE(17)] = 122,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 171,
  [SMALL_STATE(20)] = 182,
  [SMALL_STATE(21)] = 193,
  [SMALL_STATE(22)] = 204,
  [SMALL_STATE(23)] = 215,
  [SMALL_STATE(24)] = 226,
  [SMALL_STATE(25)] = 237,
  [SMALL_STATE(26)] = 248,
  [SMALL_STATE(27)] = 259,
  [SMALL_STATE(28)] = 270,
  [SMALL_STATE(29)] = 281,
  [SMALL_STATE(30)] = 292,
  [SMALL_STATE(31)] = 308,
  [SMALL_STATE(32)] = 324,
  [SMALL_STATE(33)] = 340,
  [SMALL_STATE(34)] = 356,
  [SMALL_STATE(35)] = 372,
  [SMALL_STATE(36)] = 388,
  [SMALL_STATE(37)] = 401,
  [SMALL_STATE(38)] = 414,
  [SMALL_STATE(39)] = 427,
  [SMALL_STATE(40)] = 440,
  [SMALL_STATE(41)] = 453,
  [SMALL_STATE(42)] = 466,
  [SMALL_STATE(43)] = 479,
  [SMALL_STATE(44)] = 492,
  [SMALL_STATE(45)] = 505,
  [SMALL_STATE(46)] = 513,
  [SMALL_STATE(47)] = 521,
  [SMALL_STATE(48)] = 529,
  [SMALL_STATE(49)] = 537,
  [SMALL_STATE(50)] = 544,
  [SMALL_STATE(51)] = 551,
  [SMALL_STATE(52)] = 558,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2), SHIFT_REPEAT(32),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 2), SHIFT_REPEAT(33),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_literal, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat3, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_literal, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_literal, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(30),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat2, 2), SHIFT_REPEAT(34),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat2, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_str_literal_repeat2, 2), SHIFT_REPEAT(34),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_literal_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_literal_repeat1, 2), SHIFT_REPEAT(9),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_literal_repeat1, 2), SHIFT_REPEAT(18),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_literal_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pair, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
