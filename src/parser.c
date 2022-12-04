#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

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
  aux_sym_arrow_repeat1 = 25,
  aux_sym_string_repeat1 = 26,
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
  [aux_sym_arrow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_right = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
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
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 12,
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
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
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
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 7, .external_lex_state = 1},
  [8] = {.lex_state = 7, .external_lex_state = 1},
  [9] = {.lex_state = 7, .external_lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 7, .external_lex_state = 1},
  [20] = {.lex_state = 7, .external_lex_state = 1},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 1},
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
    [sym_source_file] = STATE(34),
    [sym__definition] = STATE(5),
    [sym_connection] = STATE(5),
    [sym_shape] = STATE(5),
    [sym_identifier] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
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
    STATE(13), 1,
      aux_sym_arrow_repeat1,
    STATE(26), 1,
      sym__end,
    STATE(31), 1,
      sym_arrow,
  [31] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym__identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(3), 4,
      sym__definition,
      sym_connection,
      sym_shape,
      aux_sym_source_file_repeat1,
  [47] = 2,
    ACTIONS(28), 1,
      anon_sym_LF,
    ACTIONS(26), 6,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [59] = 4,
    ACTIONS(5), 1,
      sym__identifier,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_identifier,
    STATE(3), 4,
      sym__definition,
      sym_connection,
      sym_shape,
      aux_sym_source_file_repeat1,
  [75] = 6,
    ACTIONS(32), 1,
      aux_sym_label_token1,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_BQUOTE,
    STATE(18), 1,
      sym_label,
    STATE(30), 1,
      sym_string,
  [94] = 3,
    ACTIONS(40), 1,
      anon_sym_DASH,
    STATE(7), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(43), 2,
      sym__identifier,
      anon_sym_GT,
  [105] = 4,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_GT,
    ACTIONS(49), 1,
      sym__identifier,
    STATE(9), 1,
      aux_sym_arrow_repeat1,
  [118] = 4,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_GT,
    ACTIONS(55), 1,
      sym__identifier,
    STATE(7), 1,
      aux_sym_arrow_repeat1,
  [131] = 3,
    ACTIONS(57), 1,
      aux_sym_string_token1,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [141] = 3,
    ACTIONS(43), 1,
      anon_sym_DASH_GT,
    ACTIONS(61), 1,
      anon_sym_DASH,
    STATE(11), 1,
      aux_sym_arrow_repeat1,
  [151] = 3,
    ACTIONS(64), 1,
      aux_sym_string_token1,
    ACTIONS(67), 1,
      anon_sym_BQUOTE,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [161] = 3,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(69), 1,
      anon_sym_DASH,
    STATE(11), 1,
      aux_sym_arrow_repeat1,
  [171] = 3,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym_string_token1,
    STATE(14), 1,
      aux_sym_string_repeat1,
  [181] = 3,
    ACTIONS(74), 1,
      anon_sym_SQUOTE,
    ACTIONS(76), 1,
      aux_sym_string_token1,
    STATE(24), 1,
      aux_sym_string_repeat1,
  [191] = 3,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_string_token1,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [201] = 3,
    ACTIONS(74), 1,
      anon_sym_BQUOTE,
    ACTIONS(80), 1,
      aux_sym_string_token1,
    STATE(10), 1,
      aux_sym_string_repeat1,
  [211] = 3,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(84), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym__end,
  [221] = 3,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      sym__identifier,
    STATE(7), 1,
      aux_sym_arrow_repeat1,
  [231] = 3,
    ACTIONS(49), 1,
      sym__identifier,
    ACTIONS(86), 1,
      anon_sym_DASH,
    STATE(19), 1,
      aux_sym_arrow_repeat1,
  [241] = 3,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      aux_sym_string_token1,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [251] = 3,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym__end,
  [261] = 3,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_string_token1,
    STATE(14), 1,
      aux_sym_string_repeat1,
  [271] = 3,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      aux_sym_string_token1,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [281] = 2,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      anon_sym_LF,
  [288] = 1,
    ACTIONS(103), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [293] = 1,
    ACTIONS(105), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [298] = 1,
    ACTIONS(107), 2,
      sym__identifier,
      ts_builtin_sym_end,
  [303] = 2,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(111), 1,
      anon_sym_LF,
  [310] = 2,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      anon_sym_LF,
  [317] = 2,
    ACTIONS(5), 1,
      sym__identifier,
    STATE(22), 1,
      sym_identifier,
  [324] = 1,
    ACTIONS(49), 1,
      sym__identifier,
  [328] = 1,
    ACTIONS(117), 1,
      sym__identifier,
  [332] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [336] = 1,
    ACTIONS(55), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 75,
  [SMALL_STATE(7)] = 94,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 141,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 191,
  [SMALL_STATE(17)] = 201,
  [SMALL_STATE(18)] = 211,
  [SMALL_STATE(19)] = 221,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 241,
  [SMALL_STATE(22)] = 251,
  [SMALL_STATE(23)] = 261,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 281,
  [SMALL_STATE(26)] = 288,
  [SMALL_STATE(27)] = 293,
  [SMALL_STATE(28)] = 298,
  [SMALL_STATE(29)] = 303,
  [SMALL_STATE(30)] = 310,
  [SMALL_STATE(31)] = 317,
  [SMALL_STATE(32)] = 324,
  [SMALL_STATE(33)] = 328,
  [SMALL_STATE(34)] = 332,
  [SMALL_STATE(35)] = 336,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(12),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(14),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
