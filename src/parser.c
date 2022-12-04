#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  anon_sym_COLON = 3,
  aux_sym_label_token1 = 4,
  anon_sym_DASH_DASH = 5,
  anon_sym_DASH = 6,
  anon_sym_LT_DASH = 7,
  anon_sym_GT = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_string_token1 = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_BQUOTE = 13,
  sym__identifier = 14,
  sym_source_file = 15,
  sym__definition = 16,
  sym__end = 17,
  sym_connection = 18,
  sym_shape = 19,
  sym_label = 20,
  sym_identifier = 21,
  sym_arrow = 22,
  sym_string = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_connection_repeat1 = 25,
  aux_sym_arrow_repeat1 = 26,
  aux_sym_string_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
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
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
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
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
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
  [14] = 13,
  [15] = 15,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 11,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '`') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(18);
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
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '`') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(14);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(14);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(14);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(27);
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
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 7, .external_lex_state = 1},
  [11] = {.lex_state = 7, .external_lex_state = 1},
  [12] = {.lex_state = 7, .external_lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 7, .external_lex_state = 1},
  [23] = {.lex_state = 7, .external_lex_state = 1},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
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
    [sym_source_file] = STATE(35),
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
  [0] = 11,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_DASH,
    ACTIONS(19), 1,
      anon_sym_DASH_GT,
    STATE(3), 1,
      aux_sym_connection_repeat1,
    STATE(15), 1,
      aux_sym_arrow_repeat1,
    STATE(32), 1,
      sym_arrow,
    STATE(33), 1,
      sym__end,
  [34] = 10,
    ACTIONS(13), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_DASH,
    ACTIONS(19), 1,
      anon_sym_DASH_GT,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_connection_repeat1,
    STATE(15), 1,
      aux_sym_arrow_repeat1,
    STATE(28), 1,
      sym__end,
    STATE(32), 1,
      sym_arrow,
  [65] = 9,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(32), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_LT_DASH,
    ACTIONS(38), 1,
      anon_sym_DASH_GT,
    STATE(4), 1,
      aux_sym_connection_repeat1,
    STATE(15), 1,
      aux_sym_arrow_repeat1,
    STATE(32), 1,
      sym_arrow,
  [93] = 2,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(41), 6,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [105] = 4,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_identifier,
    STATE(7), 4,
      sym__definition,
      sym_connection,
      sym_shape,
      aux_sym_source_file_repeat1,
  [121] = 4,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym__identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(7), 4,
      sym__definition,
      sym_connection,
      sym_shape,
      aux_sym_source_file_repeat1,
  [137] = 6,
    ACTIONS(52), 1,
      aux_sym_label_token1,
    ACTIONS(54), 1,
      anon_sym_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_BQUOTE,
    STATE(21), 1,
      sym_label,
    STATE(31), 1,
      sym_string,
  [156] = 2,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(25), 5,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [167] = 4,
    ACTIONS(60), 1,
      anon_sym_DASH,
    ACTIONS(62), 1,
      anon_sym_GT,
    ACTIONS(64), 1,
      sym__identifier,
    STATE(12), 1,
      aux_sym_arrow_repeat1,
  [180] = 3,
    ACTIONS(66), 1,
      anon_sym_DASH,
    STATE(11), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(69), 2,
      sym__identifier,
      anon_sym_GT,
  [191] = 4,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(11), 1,
      aux_sym_arrow_repeat1,
  [204] = 3,
    ACTIONS(77), 1,
      aux_sym_string_token1,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym_string_repeat1,
  [214] = 3,
    ACTIONS(80), 1,
      anon_sym_SQUOTE,
    ACTIONS(82), 1,
      aux_sym_string_token1,
    STATE(14), 1,
      aux_sym_string_repeat1,
  [224] = 3,
    ACTIONS(62), 1,
      anon_sym_DASH_GT,
    ACTIONS(85), 1,
      anon_sym_DASH,
    STATE(24), 1,
      aux_sym_arrow_repeat1,
  [234] = 3,
    ACTIONS(80), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      aux_sym_string_token1,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [244] = 3,
    ACTIONS(90), 1,
      aux_sym_string_token1,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [254] = 3,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      aux_sym_string_token1,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [264] = 3,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      aux_sym_string_token1,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [274] = 3,
    ACTIONS(94), 1,
      anon_sym_BQUOTE,
    ACTIONS(100), 1,
      aux_sym_string_token1,
    STATE(17), 1,
      aux_sym_string_repeat1,
  [284] = 3,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym__end,
  [294] = 3,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(11), 1,
      aux_sym_arrow_repeat1,
  [304] = 3,
    ACTIONS(64), 1,
      sym__identifier,
    ACTIONS(106), 1,
      anon_sym_DASH,
    STATE(22), 1,
      aux_sym_arrow_repeat1,
  [314] = 3,
    ACTIONS(69), 1,
      anon_sym_DASH_GT,
    ACTIONS(108), 1,
      anon_sym_DASH,
    STATE(24), 1,
      aux_sym_arrow_repeat1,
  [324] = 3,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      aux_sym_string_token1,
    STATE(13), 1,
      aux_sym_string_repeat1,
  [334] = 3,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      aux_sym_string_token1,
    STATE(14), 1,
      aux_sym_string_repeat1,
  [344] = 2,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      anon_sym_LF,
  [351] = 1,
    ACTIONS(119), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [356] = 1,
    ACTIONS(121), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [361] = 2,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(125), 1,
      anon_sym_LF,
  [368] = 2,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    ACTIONS(129), 1,
      anon_sym_LF,
  [375] = 2,
    ACTIONS(5), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier,
  [382] = 1,
    ACTIONS(131), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [387] = 1,
    ACTIONS(75), 1,
      sym__identifier,
  [391] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [395] = 1,
    ACTIONS(135), 1,
      sym__identifier,
  [399] = 1,
    ACTIONS(64), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 191,
  [SMALL_STATE(13)] = 204,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 234,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 254,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 274,
  [SMALL_STATE(21)] = 284,
  [SMALL_STATE(22)] = 294,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 314,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 334,
  [SMALL_STATE(27)] = 344,
  [SMALL_STATE(28)] = 351,
  [SMALL_STATE(29)] = 356,
  [SMALL_STATE(30)] = 361,
  [SMALL_STATE(31)] = 368,
  [SMALL_STATE(32)] = 375,
  [SMALL_STATE(33)] = 382,
  [SMALL_STATE(34)] = 387,
  [SMALL_STATE(35)] = 391,
  [SMALL_STATE(36)] = 395,
  [SMALL_STATE(37)] = 399,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(23),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(15),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(37),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(13),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(14),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(24),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
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
