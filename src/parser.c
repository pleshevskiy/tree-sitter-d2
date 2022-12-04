#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  anon_sym_COLON = 3,
  sym_dot = 4,
  anon_sym_ = 5,
  sym__dash = 6,
  sym__word = 7,
  anon_sym_DASH_DASH = 8,
  anon_sym_LT_DASH = 9,
  anon_sym_GT = 10,
  anon_sym_DASH_GT = 11,
  sym__unquoted_string = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_string_token1 = 14,
  anon_sym_DQUOTE = 15,
  anon_sym_BQUOTE = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym__end = 19,
  sym_connection = 20,
  sym_shape = 21,
  sym_label = 22,
  sym_identifier = 23,
  sym__identifier = 24,
  sym_arrow = 25,
  sym_string = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_connection_repeat1 = 28,
  aux_sym_shape_repeat1 = 29,
  aux_sym__identifier_repeat1 = 30,
  aux_sym__identifier_repeat2 = 31,
  aux_sym_arrow_repeat1 = 32,
  aux_sym_string_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [sym_dot] = "dot",
  [anon_sym_] = " ",
  [sym__dash] = "_dash",
  [sym__word] = "_word",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BQUOTE] = "`",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__end] = "_end",
  [sym_connection] = "connection",
  [sym_shape] = "shape",
  [sym_label] = "label",
  [sym_identifier] = "identifier",
  [sym__identifier] = "_identifier",
  [sym_arrow] = "arrow",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_shape_repeat1] = "shape_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__identifier_repeat2] = "_identifier_repeat2",
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_dot] = sym_dot,
  [anon_sym_] = anon_sym_,
  [sym__dash] = sym__dash,
  [sym__word] = sym__word,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__end] = sym__end,
  [sym_connection] = sym_connection,
  [sym_shape] = sym_shape,
  [sym_label] = sym_label,
  [sym_identifier] = sym_identifier,
  [sym__identifier] = sym__identifier,
  [sym_arrow] = sym_arrow,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_shape_repeat1] = aux_sym_shape_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__identifier_repeat2] = aux_sym__identifier_repeat2,
  [aux_sym_arrow_repeat1] = aux_sym_arrow_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_connection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shape_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  [30] = 6,
  [31] = 3,
  [32] = 5,
  [33] = 9,
  [34] = 11,
  [35] = 8,
  [36] = 36,
  [37] = 16,
  [38] = 38,
  [39] = 39,
  [40] = 28,
  [41] = 21,
  [42] = 13,
  [43] = 10,
  [44] = 17,
  [45] = 15,
  [46] = 46,
  [47] = 14,
  [48] = 48,
  [49] = 12,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 55,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 18,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 57,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 77,
  [89] = 77,
  [90] = 80,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 94,
  [97] = 97,
  [98] = 92,
  [99] = 99,
  [100] = 99,
  [101] = 101,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(36);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(42);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(36);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(101),
    [sym__definition] = STATE(7),
    [sym_connection] = STATE(7),
    [sym_shape] = STATE(7),
    [sym_identifier] = STATE(2),
    [sym__identifier] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__identifier_repeat1] = STATE(59),
    [aux_sym__identifier_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_] = ACTIONS(5),
    [sym__dash] = ACTIONS(7),
    [sym__word] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      sym_dot,
    ACTIONS(19), 1,
      sym__dash,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_DASH,
    ACTIONS(25), 1,
      anon_sym_DASH_GT,
    STATE(20), 1,
      aux_sym_connection_repeat1,
    STATE(39), 1,
      sym_arrow,
    STATE(51), 1,
      aux_sym_shape_repeat1,
    STATE(65), 1,
      sym__end,
    STATE(87), 1,
      aux_sym_arrow_repeat1,
  [40] = 6,
    ACTIONS(29), 1,
      anon_sym_,
    ACTIONS(31), 1,
      sym__dash,
    ACTIONS(33), 1,
      sym__word,
    STATE(16), 1,
      aux_sym__identifier_repeat2,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(27), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [65] = 9,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_,
    ACTIONS(40), 1,
      sym__dash,
    ACTIONS(43), 1,
      sym__word,
    STATE(2), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(59), 1,
      aux_sym__identifier_repeat1,
    STATE(4), 4,
      sym__definition,
      sym_connection,
      sym_shape,
      aux_sym_source_file_repeat1,
  [96] = 6,
    ACTIONS(33), 1,
      sym__word,
    ACTIONS(48), 1,
      anon_sym_,
    ACTIONS(50), 1,
      sym__dash,
    STATE(16), 1,
      aux_sym__identifier_repeat2,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(46), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [121] = 6,
    ACTIONS(33), 1,
      sym__word,
    ACTIONS(54), 1,
      anon_sym_,
    ACTIONS(56), 1,
      sym__dash,
    STATE(16), 1,
      aux_sym__identifier_repeat2,
    STATE(19), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(52), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [146] = 9,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(7), 1,
      sym__dash,
    ACTIONS(9), 1,
      sym__word,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(59), 1,
      aux_sym__identifier_repeat1,
    STATE(4), 4,
      sym__definition,
      sym_connection,
      sym_shape,
      aux_sym_source_file_repeat1,
  [177] = 5,
    ACTIONS(60), 1,
      anon_sym_,
    ACTIONS(62), 1,
      sym__dash,
    ACTIONS(64), 1,
      sym__word,
    STATE(17), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(46), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [199] = 5,
    ACTIONS(64), 1,
      sym__word,
    ACTIONS(66), 1,
      anon_sym_,
    ACTIONS(68), 1,
      sym__dash,
    STATE(14), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(52), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [221] = 4,
    ACTIONS(72), 1,
      anon_sym_,
    ACTIONS(74), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(70), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [241] = 5,
    ACTIONS(64), 1,
      sym__word,
    ACTIONS(76), 1,
      anon_sym_,
    ACTIONS(78), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(27), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [263] = 4,
    ACTIONS(29), 1,
      anon_sym_,
    ACTIONS(74), 1,
      sym__word,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(27), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [283] = 4,
    ACTIONS(74), 1,
      sym__word,
    ACTIONS(80), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(46), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [303] = 4,
    ACTIONS(74), 1,
      sym__word,
    ACTIONS(80), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(27), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [323] = 4,
    ACTIONS(48), 1,
      anon_sym_,
    ACTIONS(74), 1,
      sym__word,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(46), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [343] = 3,
    ACTIONS(84), 1,
      sym__word,
    STATE(16), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(82), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [361] = 4,
    ACTIONS(74), 1,
      sym__word,
    ACTIONS(80), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(70), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [381] = 3,
    ACTIONS(89), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [399] = 3,
    ACTIONS(80), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(27), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [416] = 10,
    ACTIONS(19), 1,
      sym__dash,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_DASH,
    ACTIONS(25), 1,
      anon_sym_DASH_GT,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      anon_sym_LF,
    STATE(29), 1,
      aux_sym_connection_repeat1,
    STATE(48), 1,
      sym_arrow,
    STATE(62), 1,
      sym__end,
    STATE(87), 1,
      aux_sym_arrow_repeat1,
  [447] = 1,
    ACTIONS(82), 10,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [460] = 3,
    ACTIONS(29), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(27), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [477] = 3,
    ACTIONS(80), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(96), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [494] = 3,
    ACTIONS(72), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(70), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [511] = 3,
    ACTIONS(80), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(70), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [528] = 3,
    ACTIONS(48), 1,
      anon_sym_,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(46), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [545] = 3,
    ACTIONS(80), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(46), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [562] = 1,
    ACTIONS(98), 10,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [575] = 9,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      sym__dash,
    ACTIONS(107), 1,
      anon_sym_DASH_DASH,
    ACTIONS(110), 1,
      anon_sym_LT_DASH,
    ACTIONS(113), 1,
      anon_sym_DASH_GT,
    STATE(29), 1,
      aux_sym_connection_repeat1,
    STATE(48), 1,
      sym_arrow,
    STATE(87), 1,
      aux_sym_arrow_repeat1,
  [603] = 6,
    ACTIONS(54), 1,
      anon_sym_,
    ACTIONS(116), 1,
      sym__dash,
    ACTIONS(118), 1,
      sym__word,
    STATE(19), 1,
      aux_sym__identifier_repeat1,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(52), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [625] = 6,
    ACTIONS(29), 1,
      anon_sym_,
    ACTIONS(118), 1,
      sym__word,
    ACTIONS(120), 1,
      sym__dash,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(27), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [647] = 6,
    ACTIONS(48), 1,
      anon_sym_,
    ACTIONS(118), 1,
      sym__word,
    ACTIONS(122), 1,
      sym__dash,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(46), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [669] = 5,
    ACTIONS(124), 1,
      anon_sym_,
    ACTIONS(126), 1,
      sym__dash,
    ACTIONS(128), 1,
      sym__word,
    STATE(47), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(52), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [688] = 5,
    ACTIONS(128), 1,
      sym__word,
    ACTIONS(130), 1,
      anon_sym_,
    ACTIONS(132), 1,
      sym__dash,
    STATE(42), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(27), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [707] = 5,
    ACTIONS(128), 1,
      sym__word,
    ACTIONS(134), 1,
      anon_sym_,
    ACTIONS(136), 1,
      sym__dash,
    STATE(44), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(46), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [726] = 2,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(138), 7,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [739] = 4,
    ACTIONS(142), 1,
      sym__dash,
    ACTIONS(144), 1,
      sym__word,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(82), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_,
  [756] = 7,
    ACTIONS(147), 1,
      anon_sym_,
    ACTIONS(149), 1,
      sym__dash,
    ACTIONS(151), 1,
      sym__word,
    STATE(30), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(55), 1,
      aux_sym__identifier_repeat1,
    STATE(69), 1,
      sym_identifier,
  [778] = 7,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(7), 1,
      sym__dash,
    ACTIONS(9), 1,
      sym__word,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
    STATE(59), 1,
      aux_sym__identifier_repeat1,
  [800] = 2,
    ACTIONS(153), 1,
      sym__dash,
    ACTIONS(98), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_,
      sym__word,
  [812] = 2,
    ACTIONS(142), 1,
      sym__dash,
    ACTIONS(82), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
      anon_sym_,
      sym__word,
  [824] = 4,
    ACTIONS(80), 1,
      anon_sym_,
    ACTIONS(155), 1,
      sym__word,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(46), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [840] = 4,
    ACTIONS(72), 1,
      anon_sym_,
    ACTIONS(155), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(70), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [856] = 4,
    ACTIONS(80), 1,
      anon_sym_,
    ACTIONS(155), 1,
      sym__word,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(70), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [872] = 4,
    ACTIONS(48), 1,
      anon_sym_,
    ACTIONS(155), 1,
      sym__word,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(46), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [888] = 3,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      anon_sym_COLON,
    ACTIONS(100), 5,
      anon_sym_SEMI,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [902] = 4,
    ACTIONS(80), 1,
      anon_sym_,
    ACTIONS(155), 1,
      sym__word,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(27), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [918] = 7,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(7), 1,
      sym__dash,
    ACTIONS(9), 1,
      sym__word,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(53), 1,
      sym_identifier,
    STATE(59), 1,
      aux_sym__identifier_repeat1,
  [940] = 4,
    ACTIONS(29), 1,
      anon_sym_,
    ACTIONS(155), 1,
      sym__word,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(27), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON,
      sym_dot,
  [956] = 6,
    ACTIONS(159), 1,
      sym__unquoted_string,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    STATE(91), 1,
      sym_label,
    STATE(95), 1,
      sym_string,
  [975] = 6,
    ACTIONS(17), 1,
      sym_dot,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_shape_repeat1,
    STATE(72), 1,
      sym__end,
  [994] = 6,
    ACTIONS(159), 1,
      sym__unquoted_string,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    STATE(78), 1,
      sym_label,
    STATE(95), 1,
      sym_string,
  [1013] = 2,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(100), 5,
      anon_sym_SEMI,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [1024] = 6,
    ACTIONS(159), 1,
      sym__unquoted_string,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_BQUOTE,
    STATE(73), 1,
      sym_label,
    STATE(95), 1,
      sym_string,
  [1043] = 5,
    ACTIONS(173), 1,
      anon_sym_,
    ACTIONS(175), 1,
      sym__dash,
    ACTIONS(177), 1,
      sym__word,
    STATE(31), 1,
      aux_sym__identifier_repeat2,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1059] = 4,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(183), 1,
      sym_dot,
    STATE(56), 1,
      aux_sym_shape_repeat1,
    ACTIONS(179), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [1073] = 4,
    ACTIONS(186), 1,
      anon_sym_,
    ACTIONS(188), 1,
      sym__dash,
    STATE(57), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(191), 2,
      sym__word,
      anon_sym_GT,
  [1087] = 4,
    ACTIONS(195), 1,
      sym__word,
    ACTIONS(197), 1,
      anon_sym_GT,
    STATE(60), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(193), 2,
      anon_sym_,
      sym__dash,
  [1101] = 5,
    ACTIONS(173), 1,
      anon_sym_,
    ACTIONS(199), 1,
      sym__dash,
    ACTIONS(201), 1,
      sym__word,
    STATE(3), 1,
      aux_sym__identifier_repeat2,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1117] = 4,
    ACTIONS(205), 1,
      sym__word,
    ACTIONS(207), 1,
      anon_sym_GT,
    STATE(57), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(203), 2,
      anon_sym_,
      sym__dash,
  [1131] = 2,
    ACTIONS(211), 1,
      sym__word,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1140] = 2,
    ACTIONS(215), 1,
      sym__word,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1149] = 2,
    ACTIONS(219), 1,
      sym__word,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1158] = 3,
    ACTIONS(195), 1,
      sym__word,
    STATE(70), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(193), 2,
      anon_sym_,
      sym__dash,
  [1169] = 2,
    ACTIONS(223), 1,
      sym__word,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1178] = 4,
    ACTIONS(87), 1,
      sym__word,
    ACTIONS(225), 1,
      anon_sym_,
    ACTIONS(228), 1,
      sym__dash,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1191] = 4,
    ACTIONS(64), 1,
      sym__word,
    ACTIONS(230), 1,
      anon_sym_,
    ACTIONS(232), 1,
      sym__dash,
    STATE(80), 1,
      aux_sym__identifier_repeat1,
  [1204] = 4,
    ACTIONS(128), 1,
      sym__word,
    ACTIONS(234), 1,
      anon_sym_,
    ACTIONS(236), 1,
      sym__dash,
    STATE(90), 1,
      aux_sym__identifier_repeat1,
  [1217] = 2,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(179), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_dot,
  [1226] = 3,
    ACTIONS(205), 1,
      sym__word,
    STATE(57), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(203), 2,
      anon_sym_,
      sym__dash,
  [1237] = 2,
    ACTIONS(240), 1,
      sym__word,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1246] = 2,
    ACTIONS(244), 1,
      sym__word,
    ACTIONS(242), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1255] = 3,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym__end,
  [1265] = 3,
    ACTIONS(186), 1,
      anon_sym_DASH_GT,
    ACTIONS(250), 1,
      sym__dash,
    STATE(74), 1,
      aux_sym_arrow_repeat1,
  [1275] = 3,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_string_token1,
    STATE(77), 1,
      aux_sym_string_repeat1,
  [1285] = 2,
    ACTIONS(195), 1,
      sym__word,
    ACTIONS(193), 2,
      anon_sym_,
      sym__dash,
  [1293] = 3,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      aux_sym_string_token1,
    STATE(77), 1,
      aux_sym_string_repeat1,
  [1303] = 3,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym__end,
  [1313] = 3,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym_string_token1,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [1323] = 3,
    ACTIONS(74), 1,
      sym__word,
    ACTIONS(173), 1,
      anon_sym_,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1333] = 2,
    ACTIONS(205), 1,
      sym__word,
    ACTIONS(203), 2,
      anon_sym_,
      sym__dash,
  [1341] = 3,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(268), 1,
      aux_sym_string_token1,
    STATE(88), 1,
      aux_sym_string_repeat1,
  [1351] = 2,
    ACTIONS(272), 1,
      sym__word,
    ACTIONS(270), 2,
      anon_sym_,
      sym__dash,
  [1359] = 3,
    ACTIONS(274), 1,
      aux_sym_string_token1,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    STATE(82), 1,
      aux_sym_string_repeat1,
  [1369] = 3,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      aux_sym_string_token1,
    STATE(79), 1,
      aux_sym_string_repeat1,
  [1379] = 3,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_token1,
    STATE(75), 1,
      aux_sym_string_repeat1,
  [1389] = 3,
    ACTIONS(282), 1,
      sym__dash,
    ACTIONS(284), 1,
      anon_sym_DASH_GT,
    STATE(74), 1,
      aux_sym_arrow_repeat1,
  [1399] = 3,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(286), 1,
      aux_sym_string_token1,
    STATE(88), 1,
      aux_sym_string_repeat1,
  [1409] = 3,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      aux_sym_string_token1,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [1419] = 3,
    ACTIONS(155), 1,
      sym__word,
    ACTIONS(173), 1,
      anon_sym_,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1429] = 3,
    ACTIONS(292), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym__end,
  [1439] = 2,
    ACTIONS(296), 1,
      sym__word,
    STATE(5), 1,
      aux_sym__identifier_repeat2,
  [1446] = 2,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_LF,
  [1453] = 2,
    ACTIONS(302), 1,
      sym__word,
    STATE(31), 1,
      aux_sym__identifier_repeat2,
  [1460] = 2,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(306), 1,
      anon_sym_LF,
  [1467] = 2,
    ACTIONS(308), 1,
      sym__word,
    STATE(3), 1,
      aux_sym__identifier_repeat2,
  [1474] = 2,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_LF,
  [1481] = 2,
    ACTIONS(314), 1,
      sym__word,
    STATE(32), 1,
      aux_sym__identifier_repeat2,
  [1488] = 1,
    ACTIONS(316), 1,
      sym__word,
  [1492] = 1,
    ACTIONS(318), 1,
      sym__word,
  [1496] = 1,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 221,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 283,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 343,
  [SMALL_STATE(17)] = 361,
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 399,
  [SMALL_STATE(20)] = 416,
  [SMALL_STATE(21)] = 447,
  [SMALL_STATE(22)] = 460,
  [SMALL_STATE(23)] = 477,
  [SMALL_STATE(24)] = 494,
  [SMALL_STATE(25)] = 511,
  [SMALL_STATE(26)] = 528,
  [SMALL_STATE(27)] = 545,
  [SMALL_STATE(28)] = 562,
  [SMALL_STATE(29)] = 575,
  [SMALL_STATE(30)] = 603,
  [SMALL_STATE(31)] = 625,
  [SMALL_STATE(32)] = 647,
  [SMALL_STATE(33)] = 669,
  [SMALL_STATE(34)] = 688,
  [SMALL_STATE(35)] = 707,
  [SMALL_STATE(36)] = 726,
  [SMALL_STATE(37)] = 739,
  [SMALL_STATE(38)] = 756,
  [SMALL_STATE(39)] = 778,
  [SMALL_STATE(40)] = 800,
  [SMALL_STATE(41)] = 812,
  [SMALL_STATE(42)] = 824,
  [SMALL_STATE(43)] = 840,
  [SMALL_STATE(44)] = 856,
  [SMALL_STATE(45)] = 872,
  [SMALL_STATE(46)] = 888,
  [SMALL_STATE(47)] = 902,
  [SMALL_STATE(48)] = 918,
  [SMALL_STATE(49)] = 940,
  [SMALL_STATE(50)] = 956,
  [SMALL_STATE(51)] = 975,
  [SMALL_STATE(52)] = 994,
  [SMALL_STATE(53)] = 1013,
  [SMALL_STATE(54)] = 1024,
  [SMALL_STATE(55)] = 1043,
  [SMALL_STATE(56)] = 1059,
  [SMALL_STATE(57)] = 1073,
  [SMALL_STATE(58)] = 1087,
  [SMALL_STATE(59)] = 1101,
  [SMALL_STATE(60)] = 1117,
  [SMALL_STATE(61)] = 1131,
  [SMALL_STATE(62)] = 1140,
  [SMALL_STATE(63)] = 1149,
  [SMALL_STATE(64)] = 1158,
  [SMALL_STATE(65)] = 1169,
  [SMALL_STATE(66)] = 1178,
  [SMALL_STATE(67)] = 1191,
  [SMALL_STATE(68)] = 1204,
  [SMALL_STATE(69)] = 1217,
  [SMALL_STATE(70)] = 1226,
  [SMALL_STATE(71)] = 1237,
  [SMALL_STATE(72)] = 1246,
  [SMALL_STATE(73)] = 1255,
  [SMALL_STATE(74)] = 1265,
  [SMALL_STATE(75)] = 1275,
  [SMALL_STATE(76)] = 1285,
  [SMALL_STATE(77)] = 1293,
  [SMALL_STATE(78)] = 1303,
  [SMALL_STATE(79)] = 1313,
  [SMALL_STATE(80)] = 1323,
  [SMALL_STATE(81)] = 1333,
  [SMALL_STATE(82)] = 1341,
  [SMALL_STATE(83)] = 1351,
  [SMALL_STATE(84)] = 1359,
  [SMALL_STATE(85)] = 1369,
  [SMALL_STATE(86)] = 1379,
  [SMALL_STATE(87)] = 1389,
  [SMALL_STATE(88)] = 1399,
  [SMALL_STATE(89)] = 1409,
  [SMALL_STATE(90)] = 1419,
  [SMALL_STATE(91)] = 1429,
  [SMALL_STATE(92)] = 1439,
  [SMALL_STATE(93)] = 1446,
  [SMALL_STATE(94)] = 1453,
  [SMALL_STATE(95)] = 1460,
  [SMALL_STATE(96)] = 1467,
  [SMALL_STATE(97)] = 1474,
  [SMALL_STATE(98)] = 1481,
  [SMALL_STATE(99)] = 1488,
  [SMALL_STATE(100)] = 1492,
  [SMALL_STATE(101)] = 1496,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(67),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(18),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 5),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(87),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(64),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(58),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(76),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(68),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(38),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(57),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(66),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(74),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(77),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(88),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(89),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [320] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_d2(void) {
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
