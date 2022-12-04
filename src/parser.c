#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  anon_sym_COLON = 3,
  sym_dot = 4,
  anon_sym_DASH_DASH = 5,
  anon_sym_DASH = 6,
  anon_sym_LT_DASH = 7,
  anon_sym_GT = 8,
  anon_sym_DASH_GT = 9,
  sym__unquoted_string = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_string_token1 = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_BQUOTE = 14,
  sym__identifier = 15,
  sym_source_file = 16,
  sym__definition = 17,
  sym__end = 18,
  sym_connection = 19,
  sym_shape = 20,
  sym_label = 21,
  sym_identifier = 22,
  sym_arrow = 23,
  sym_string = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_connection_repeat1 = 26,
  aux_sym_shape_repeat1 = 27,
  aux_sym_arrow_repeat1 = 28,
  aux_sym_string_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [sym_dot] = "dot",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BQUOTE] = "`",
  [sym__identifier] = "_identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__end] = "_end",
  [sym_connection] = "connection",
  [sym_shape] = "shape",
  [sym_label] = "label",
  [sym_identifier] = "identifier",
  [sym_arrow] = "arrow",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_shape_repeat1] = "shape_repeat1",
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_dot] = sym_dot,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym__identifier] = sym__identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__end] = sym__end,
  [sym_connection] = sym_connection,
  [sym_shape] = sym_shape,
  [sym_label] = sym_label,
  [sym_identifier] = sym_identifier,
  [sym_arrow] = sym_arrow,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_shape_repeat1] = aux_sym_shape_repeat1,
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
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
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
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 25,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 16,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '`') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(22);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(22);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 7, .external_lex_state = 1},
  [16] = {.lex_state = 7, .external_lex_state = 1},
  [17] = {.lex_state = 7, .external_lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 7, .external_lex_state = 1},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 7, .external_lex_state = 1},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 0, .external_lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0, .external_lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0, .external_lex_state = 1},
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {.lex_state = 0, .external_lex_state = 1},
  [50] = {.lex_state = 0},
};

enum {
  ts_external_token__identifier = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__identifier] = sym__identifier,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__identifier] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__definition] = STATE(6),
    [sym_connection] = STATE(6),
    [sym_shape] = STATE(6),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      sym_dot,
    ACTIONS(15), 1,
      anon_sym_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_LT_DASH,
    ACTIONS(21), 1,
      anon_sym_DASH_GT,
    STATE(3), 1,
      aux_sym_connection_repeat1,
    STATE(13), 1,
      aux_sym_shape_repeat1,
    STATE(30), 1,
      aux_sym_arrow_repeat1,
    STATE(37), 1,
      sym__end,
    STATE(39), 1,
      sym_arrow,
  [40] = 10,
    ACTIONS(15), 1,
      anon_sym_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_LT_DASH,
    ACTIONS(21), 1,
      anon_sym_DASH_GT,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_connection_repeat1,
    STATE(30), 1,
      aux_sym_arrow_repeat1,
    STATE(35), 1,
      sym__end,
    STATE(46), 1,
      sym_arrow,
  [71] = 9,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(31), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_LT_DASH,
    ACTIONS(40), 1,
      anon_sym_DASH_GT,
    STATE(4), 1,
      aux_sym_connection_repeat1,
    STATE(30), 1,
      aux_sym_arrow_repeat1,
    STATE(46), 1,
      sym_arrow,
  [99] = 2,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(43), 7,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [112] = 4,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_identifier,
    STATE(7), 4,
      sym__definition,
      sym_connection,
      sym_shape,
      aux_sym_source_file_repeat1,
  [128] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym__identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(7), 4,
      sym__definition,
      sym_connection,
      sym_shape,
      aux_sym_source_file_repeat1,
  [144] = 3,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(54), 1,
      anon_sym_COLON,
    ACTIONS(27), 5,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [158] = 6,
    ACTIONS(56), 1,
      sym__unquoted_string,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_BQUOTE,
    STATE(23), 1,
      sym_label,
    STATE(42), 1,
      sym_string,
  [177] = 2,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(27), 5,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [188] = 6,
    ACTIONS(56), 1,
      sym__unquoted_string,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_BQUOTE,
    STATE(28), 1,
      sym_label,
    STATE(42), 1,
      sym_string,
  [207] = 6,
    ACTIONS(56), 1,
      sym__unquoted_string,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_BQUOTE,
    STATE(31), 1,
      sym_label,
    STATE(42), 1,
      sym_string,
  [226] = 6,
    ACTIONS(13), 1,
      sym_dot,
    ACTIONS(64), 1,
      anon_sym_SEMI,
    ACTIONS(66), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      anon_sym_COLON,
    STATE(14), 1,
      aux_sym_shape_repeat1,
    STATE(41), 1,
      sym__end,
  [245] = 4,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(74), 1,
      sym_dot,
    STATE(14), 1,
      aux_sym_shape_repeat1,
    ACTIONS(70), 2,
      anon_sym_SEMI,
      anon_sym_COLON,
  [259] = 4,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      sym__identifier,
    STATE(16), 1,
      aux_sym_arrow_repeat1,
  [272] = 3,
    ACTIONS(83), 1,
      anon_sym_DASH,
    STATE(16), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(86), 2,
      sym__identifier,
      anon_sym_GT,
  [283] = 4,
    ACTIONS(88), 1,
      anon_sym_DASH,
    ACTIONS(90), 1,
      anon_sym_GT,
    ACTIONS(92), 1,
      sym__identifier,
    STATE(15), 1,
      aux_sym_arrow_repeat1,
  [296] = 2,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(70), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_dot,
  [305] = 3,
    ACTIONS(94), 1,
      aux_sym_string_token1,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [315] = 3,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      aux_sym_string_token1,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [325] = 3,
    ACTIONS(100), 1,
      aux_sym_string_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_string_repeat1,
  [335] = 3,
    ACTIONS(102), 1,
      anon_sym_BQUOTE,
    ACTIONS(104), 1,
      aux_sym_string_token1,
    STATE(34), 1,
      aux_sym_string_repeat1,
  [345] = 3,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    ACTIONS(108), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym__end,
  [355] = 3,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      sym__identifier,
    STATE(16), 1,
      aux_sym_arrow_repeat1,
  [365] = 3,
    ACTIONS(110), 1,
      aux_sym_string_token1,
    ACTIONS(113), 1,
      anon_sym_BQUOTE,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [375] = 3,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_string_token1,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [385] = 3,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      aux_sym_string_token1,
    STATE(20), 1,
      aux_sym_string_repeat1,
  [395] = 3,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_LF,
    STATE(44), 1,
      sym__end,
  [405] = 3,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      aux_sym_string_token1,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [415] = 3,
    ACTIONS(90), 1,
      anon_sym_DASH_GT,
    ACTIONS(127), 1,
      anon_sym_DASH,
    STATE(33), 1,
      aux_sym_arrow_repeat1,
  [425] = 3,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(131), 1,
      anon_sym_LF,
    STATE(43), 1,
      sym__end,
  [435] = 3,
    ACTIONS(92), 1,
      sym__identifier,
    ACTIONS(133), 1,
      anon_sym_DASH,
    STATE(24), 1,
      aux_sym_arrow_repeat1,
  [445] = 3,
    ACTIONS(86), 1,
      anon_sym_DASH_GT,
    ACTIONS(135), 1,
      anon_sym_DASH,
    STATE(33), 1,
      aux_sym_arrow_repeat1,
  [455] = 3,
    ACTIONS(96), 1,
      anon_sym_BQUOTE,
    ACTIONS(138), 1,
      aux_sym_string_token1,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [465] = 1,
    ACTIONS(140), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [470] = 2,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(144), 1,
      anon_sym_LF,
  [477] = 1,
    ACTIONS(146), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [482] = 1,
    ACTIONS(148), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [487] = 2,
    ACTIONS(5), 1,
      sym__identifier,
    STATE(8), 1,
      sym_identifier,
  [494] = 2,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      anon_sym_LF,
  [501] = 1,
    ACTIONS(154), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [506] = 2,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    ACTIONS(158), 1,
      anon_sym_LF,
  [513] = 1,
    ACTIONS(160), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [518] = 1,
    ACTIONS(162), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [523] = 2,
    ACTIONS(5), 1,
      sym__identifier,
    STATE(18), 1,
      sym_identifier,
  [530] = 2,
    ACTIONS(5), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
  [537] = 1,
    ACTIONS(164), 1,
      sym__identifier,
  [541] = 1,
    ACTIONS(92), 1,
      sym__identifier,
  [545] = 1,
    ACTIONS(81), 1,
      sym__identifier,
  [549] = 1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 207,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 272,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 296,
  [SMALL_STATE(19)] = 305,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 335,
  [SMALL_STATE(23)] = 345,
  [SMALL_STATE(24)] = 355,
  [SMALL_STATE(25)] = 365,
  [SMALL_STATE(26)] = 375,
  [SMALL_STATE(27)] = 385,
  [SMALL_STATE(28)] = 395,
  [SMALL_STATE(29)] = 405,
  [SMALL_STATE(30)] = 415,
  [SMALL_STATE(31)] = 425,
  [SMALL_STATE(32)] = 435,
  [SMALL_STATE(33)] = 445,
  [SMALL_STATE(34)] = 455,
  [SMALL_STATE(35)] = 465,
  [SMALL_STATE(36)] = 470,
  [SMALL_STATE(37)] = 477,
  [SMALL_STATE(38)] = 482,
  [SMALL_STATE(39)] = 487,
  [SMALL_STATE(40)] = 494,
  [SMALL_STATE(41)] = 501,
  [SMALL_STATE(42)] = 506,
  [SMALL_STATE(43)] = 513,
  [SMALL_STATE(44)] = 518,
  [SMALL_STATE(45)] = 523,
  [SMALL_STATE(46)] = 530,
  [SMALL_STATE(47)] = 537,
  [SMALL_STATE(48)] = 541,
  [SMALL_STATE(49)] = 545,
  [SMALL_STATE(50)] = 549,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(32),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(30),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(17),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(48),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(45),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(25),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(26),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(29),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(33),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_d2_external_scanner_create(void);
void tree_sitter_d2_external_scanner_destroy(void *);
bool tree_sitter_d2_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_d2_external_scanner_serialize(void *, char *);
void tree_sitter_d2_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_d2_external_scanner_create,
      tree_sitter_d2_external_scanner_destroy,
      tree_sitter_d2_external_scanner_scan,
      tree_sitter_d2_external_scanner_serialize,
      tree_sitter_d2_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
