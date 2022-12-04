#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  sym__word = 1,
  anon_sym_COLON = 2,
  sym__root_attr_key = 3,
  anon_sym_style = 4,
  anon_sym_shape = 5,
  anon_sym_label = 6,
  anon_sym_constraint = 7,
  anon_sym_icon = 8,
  anon_sym_width = 9,
  anon_sym_height = 10,
  anon_sym_opacity = 11,
  anon_sym_fill = 12,
  anon_sym_stroke = 13,
  anon_sym_stroke_DASHwidth = 14,
  anon_sym_stroke_DASHdash = 15,
  anon_sym_border_DASHradius = 16,
  anon_sym_font_DASHcolor = 17,
  anon_sym_shadow = 18,
  anon_sym_multiple = 19,
  anon_sym_animated = 20,
  anon_sym_3d = 21,
  anon_sym_link = 22,
  sym__text_attr_key = 23,
  anon_sym_ = 24,
  sym__dash = 25,
  anon_sym_DASH_DASH = 26,
  anon_sym_LT_DASH = 27,
  anon_sym_GT = 28,
  anon_sym_DASH_GT = 29,
  sym__unquoted_string = 30,
  anon_sym_SQUOTE = 31,
  aux_sym_string_token1 = 32,
  anon_sym_DQUOTE = 33,
  anon_sym_BQUOTE = 34,
  anon_sym_SEMI = 35,
  anon_sym_LF = 36,
  anon_sym_2 = 37,
  sym_dot = 38,
  sym_source_file = 39,
  sym__definition = 40,
  sym_connection = 41,
  sym_shape = 42,
  sym_label = 43,
  sym_identifier = 44,
  sym_attr_value = 45,
  sym__root_attribute = 46,
  sym__style_attribute = 47,
  sym__shape_attribute = 48,
  sym__shape_attr_key = 49,
  sym__style_attr_key = 50,
  sym__identifier = 51,
  sym_arrow = 52,
  sym_string = 53,
  sym__end = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_connection_repeat1 = 56,
  aux_sym_shape_repeat1 = 57,
  aux_sym__identifier_repeat1 = 58,
  aux_sym__identifier_repeat2 = 59,
  aux_sym_arrow_repeat1 = 60,
  aux_sym_string_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_COLON] = ":",
  [sym__root_attr_key] = "attr_key",
  [anon_sym_style] = "attr_key",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_opacity] = "opacity",
  [anon_sym_fill] = "fill",
  [anon_sym_stroke] = "stroke",
  [anon_sym_stroke_DASHwidth] = "stroke-width",
  [anon_sym_stroke_DASHdash] = "stroke-dash",
  [anon_sym_border_DASHradius] = "border-radius",
  [anon_sym_font_DASHcolor] = "font-color",
  [anon_sym_shadow] = "shadow",
  [anon_sym_multiple] = "multiple",
  [anon_sym_animated] = "animated",
  [anon_sym_3d] = "3d",
  [anon_sym_link] = "link",
  [sym__text_attr_key] = "_text_attr_key",
  [anon_sym_] = " ",
  [sym__dash] = "_dash",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_2] = " ",
  [sym_dot] = "dot",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_connection] = "connection",
  [sym_shape] = "shape",
  [sym_label] = "label",
  [sym_identifier] = "identifier",
  [sym_attr_value] = "attr_value",
  [sym__root_attribute] = "_root_attribute",
  [sym__style_attribute] = "_style_attribute",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__identifier] = "_identifier",
  [sym_arrow] = "arrow",
  [sym_string] = "string",
  [sym__end] = "_end",
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
  [sym__word] = sym__word,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__root_attr_key] = sym__root_attr_key,
  [anon_sym_style] = sym__root_attr_key,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_opacity] = anon_sym_opacity,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_stroke] = anon_sym_stroke,
  [anon_sym_stroke_DASHwidth] = anon_sym_stroke_DASHwidth,
  [anon_sym_stroke_DASHdash] = anon_sym_stroke_DASHdash,
  [anon_sym_border_DASHradius] = anon_sym_border_DASHradius,
  [anon_sym_font_DASHcolor] = anon_sym_font_DASHcolor,
  [anon_sym_shadow] = anon_sym_shadow,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_animated] = anon_sym_animated,
  [anon_sym_3d] = anon_sym_3d,
  [anon_sym_link] = anon_sym_link,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_] = anon_sym_,
  [sym__dash] = sym__dash,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_2] = anon_sym_2,
  [sym_dot] = sym_dot,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_connection] = sym_connection,
  [sym_shape] = sym_shape,
  [sym_label] = sym_label,
  [sym_identifier] = sym_identifier,
  [sym_attr_value] = sym_attr_value,
  [sym__root_attribute] = sym__root_attribute,
  [sym__style_attribute] = sym__style_attribute,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__identifier] = sym__identifier,
  [sym_arrow] = sym_arrow,
  [sym_string] = sym_string,
  [sym__end] = sym__end,
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
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHwidth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHdash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHradius] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [sym__text_attr_key] = {
    .visible = false,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
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
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attr_key] = {
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
  [sym__end] = {
    .visible = false,
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
  [1] = {
    [2] = sym_attr_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_label, 2,
    sym_label,
    sym_attr_value,
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
  [32] = 9,
  [33] = 8,
  [34] = 6,
  [35] = 19,
  [36] = 36,
  [37] = 18,
  [38] = 14,
  [39] = 10,
  [40] = 22,
  [41] = 11,
  [42] = 13,
  [43] = 12,
  [44] = 15,
  [45] = 28,
  [46] = 46,
  [47] = 17,
  [48] = 16,
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
  [64] = 63,
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 20,
  [82] = 82,
  [83] = 82,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 67,
  [94] = 91,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 90,
  [105] = 91,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 108,
  [111] = 109,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 112,
  [120] = 120,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      if (lookahead == 0) ADVANCE(169);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '`') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(169);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(169);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(169);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(169);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(169);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(169);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == '`') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(153);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '`') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(159);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 78:
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 81:
      if (eof) ADVANCE(84);
      if (lookahead == 0) ADVANCE(169);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '`') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 82:
      if (eof) ADVANCE(84);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == '`') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '`') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(153);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(159);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(153);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(159);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_dot);
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
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__root_attr_key);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 13},
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
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 82},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 82},
  [62] = {.lex_state = 82},
  [63] = {.lex_state = 82},
  [64] = {.lex_state = 82},
  [65] = {.lex_state = 82},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 82},
  [68] = {.lex_state = 82},
  [69] = {.lex_state = 82},
  [70] = {.lex_state = 82},
  [71] = {.lex_state = 82},
  [72] = {.lex_state = 82},
  [73] = {.lex_state = 82},
  [74] = {.lex_state = 82},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 82},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 82},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 82},
  [82] = {.lex_state = 82},
  [83] = {.lex_state = 82},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 82},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 82},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 82},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 82},
  [104] = {.lex_state = 82},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 80},
  [109] = {.lex_state = 80},
  [110] = {.lex_state = 80},
  [111] = {.lex_state = 80},
  [112] = {.lex_state = 80},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 80},
  [120] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__root_attr_key] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_3d] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(120),
    [sym__definition] = STATE(4),
    [sym_connection] = STATE(4),
    [sym_shape] = STATE(4),
    [sym_identifier] = STATE(5),
    [sym__root_attribute] = STATE(4),
    [sym__shape_attribute] = STATE(4),
    [sym__identifier] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym__identifier_repeat1] = STATE(63),
    [aux_sym__identifier_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [sym__root_attr_key] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(15), 1,
      anon_sym_style,
    ACTIONS(19), 1,
      anon_sym_,
    ACTIONS(21), 1,
      sym__dash,
    STATE(34), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(64), 1,
      aux_sym__identifier_repeat1,
    STATE(75), 1,
      sym__style_attribute,
    STATE(76), 1,
      sym_identifier,
    STATE(114), 1,
      sym__shape_attr_key,
    ACTIONS(17), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [39] = 10,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__word,
    ACTIONS(28), 1,
      sym__root_attr_key,
    ACTIONS(31), 1,
      anon_sym_,
    ACTIONS(34), 1,
      sym__dash,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(63), 1,
      aux_sym__identifier_repeat1,
    STATE(3), 6,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__shape_attribute,
      aux_sym_source_file_repeat1,
  [75] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      sym__root_attr_key,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(63), 1,
      aux_sym__identifier_repeat1,
    STATE(3), 6,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__shape_attribute,
      aux_sym_source_file_repeat1,
  [111] = 13,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(41), 1,
      sym__dash,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT_DASH,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      sym_dot,
    STATE(24), 1,
      aux_sym_connection_repeat1,
    STATE(50), 1,
      aux_sym_shape_repeat1,
    STATE(52), 1,
      sym_arrow,
    STATE(66), 1,
      sym__end,
    STATE(106), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(49), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [152] = 6,
    ACTIONS(55), 1,
      sym__word,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(61), 1,
      sym__dash,
    STATE(18), 1,
      aux_sym__identifier_repeat2,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(57), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [178] = 3,
    ACTIONS(65), 1,
      anon_sym_stroke,
    STATE(116), 1,
      sym__style_attr_key,
    ACTIONS(63), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [198] = 6,
    ACTIONS(55), 1,
      sym__word,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(71), 1,
      sym__dash,
    STATE(18), 1,
      aux_sym__identifier_repeat2,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [224] = 6,
    ACTIONS(55), 1,
      sym__word,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(77), 1,
      sym__dash,
    STATE(18), 1,
      aux_sym__identifier_repeat2,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [250] = 5,
    ACTIONS(79), 1,
      sym__word,
    ACTIONS(81), 1,
      anon_sym_,
    ACTIONS(83), 1,
      sym__dash,
    STATE(17), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(57), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [273] = 4,
    ACTIONS(85), 1,
      sym__word,
    ACTIONS(89), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [294] = 4,
    ACTIONS(85), 1,
      sym__word,
    ACTIONS(91), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [315] = 4,
    ACTIONS(85), 1,
      sym__word,
    ACTIONS(91), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [336] = 5,
    ACTIONS(79), 1,
      sym__word,
    ACTIONS(93), 1,
      anon_sym_,
    ACTIONS(95), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [359] = 4,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(85), 1,
      sym__word,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [380] = 4,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(85), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [401] = 4,
    ACTIONS(85), 1,
      sym__word,
    ACTIONS(91), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [422] = 3,
    ACTIONS(97), 1,
      sym__word,
    STATE(18), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(100), 10,
      anon_sym_COLON,
      anon_sym_,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [441] = 5,
    ACTIONS(79), 1,
      sym__word,
    ACTIONS(102), 1,
      anon_sym_,
    ACTIONS(104), 1,
      sym__dash,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [464] = 3,
    ACTIONS(108), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(106), 10,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [483] = 3,
    ACTIONS(69), 1,
      anon_sym_,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [501] = 1,
    ACTIONS(100), 11,
      anon_sym_COLON,
      anon_sym_,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [515] = 3,
    ACTIONS(91), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [533] = 10,
    ACTIONS(41), 1,
      sym__dash,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT_DASH,
    ACTIONS(47), 1,
      anon_sym_DASH_GT,
    ACTIONS(113), 1,
      anon_sym_LF,
    STATE(31), 1,
      aux_sym_connection_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(71), 1,
      sym__end,
    STATE(106), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [565] = 3,
    ACTIONS(89), 1,
      anon_sym_,
    STATE(26), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [583] = 3,
    ACTIONS(91), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(115), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [601] = 3,
    ACTIONS(91), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [619] = 1,
    ACTIONS(117), 11,
      anon_sym_COLON,
      anon_sym_,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [633] = 3,
    ACTIONS(91), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [651] = 3,
    ACTIONS(75), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [669] = 9,
    ACTIONS(119), 1,
      sym__dash,
    ACTIONS(122), 1,
      anon_sym_DASH_DASH,
    ACTIONS(125), 1,
      anon_sym_LT_DASH,
    ACTIONS(128), 1,
      anon_sym_DASH_GT,
    ACTIONS(133), 1,
      anon_sym_LF,
    STATE(31), 1,
      aux_sym_connection_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(106), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(131), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [698] = 6,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(135), 1,
      sym__word,
    ACTIONS(137), 1,
      sym__dash,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [721] = 6,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(135), 1,
      sym__word,
    ACTIONS(139), 1,
      sym__dash,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(67), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [744] = 6,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(135), 1,
      sym__word,
    ACTIONS(141), 1,
      sym__dash,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(57), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [767] = 5,
    ACTIONS(143), 1,
      sym__word,
    ACTIONS(145), 1,
      anon_sym_,
    ACTIONS(147), 1,
      sym__dash,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [787] = 2,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(149), 8,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_2,
      sym_dot,
  [801] = 4,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(156), 1,
      sym__dash,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(100), 6,
      anon_sym_COLON,
      anon_sym_,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [819] = 5,
    ACTIONS(143), 1,
      sym__word,
    ACTIONS(158), 1,
      anon_sym_,
    ACTIONS(160), 1,
      sym__dash,
    STATE(42), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [839] = 5,
    ACTIONS(143), 1,
      sym__word,
    ACTIONS(162), 1,
      anon_sym_,
    ACTIONS(164), 1,
      sym__dash,
    STATE(47), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(57), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [859] = 2,
    ACTIONS(156), 1,
      sym__dash,
    ACTIONS(100), 7,
      anon_sym_COLON,
      anon_sym_,
      sym__word,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [872] = 4,
    ACTIONS(89), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(26), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [889] = 4,
    ACTIONS(91), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [906] = 4,
    ACTIONS(91), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [923] = 4,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [940] = 2,
    ACTIONS(168), 1,
      sym__dash,
    ACTIONS(117), 7,
      anon_sym_COLON,
      anon_sym_,
      sym__word,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [953] = 3,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      anon_sym_COLON,
    ACTIONS(131), 6,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_2,
  [968] = 4,
    ACTIONS(91), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [985] = 4,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1002] = 2,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(131), 6,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_2,
  [1014] = 6,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      sym_dot,
    STATE(60), 1,
      aux_sym_shape_repeat1,
    STATE(61), 1,
      sym__end,
    ACTIONS(174), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1034] = 7,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(49), 1,
      sym_identifier,
    STATE(63), 1,
      aux_sym__identifier_repeat1,
  [1056] = 7,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
    STATE(63), 1,
      aux_sym__identifier_repeat1,
  [1078] = 7,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_,
    ACTIONS(21), 1,
      sym__dash,
    STATE(34), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(64), 1,
      aux_sym__identifier_repeat1,
    STATE(76), 1,
      sym_identifier,
  [1100] = 6,
    ACTIONS(180), 1,
      sym__unquoted_string,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_BQUOTE,
    STATE(86), 1,
      sym_label,
    STATE(100), 1,
      sym_string,
  [1119] = 6,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_BQUOTE,
    ACTIONS(188), 1,
      sym__unquoted_string,
    STATE(87), 1,
      sym_attr_value,
    STATE(92), 1,
      sym_string,
  [1138] = 6,
    ACTIONS(180), 1,
      sym__unquoted_string,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_BQUOTE,
    STATE(85), 1,
      sym_label,
    STATE(100), 1,
      sym_string,
  [1157] = 6,
    ACTIONS(180), 1,
      sym__unquoted_string,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_BQUOTE,
    STATE(84), 1,
      sym_label,
    STATE(100), 1,
      sym_string,
  [1176] = 6,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_BQUOTE,
    ACTIONS(188), 1,
      sym__unquoted_string,
    STATE(78), 1,
      sym_attr_value,
    STATE(92), 1,
      sym_string,
  [1195] = 6,
    ACTIONS(180), 1,
      sym__unquoted_string,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_BQUOTE,
    STATE(80), 1,
      sym_label,
    STATE(100), 1,
      sym_string,
  [1214] = 4,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(194), 1,
      sym_dot,
    STATE(60), 1,
      aux_sym_shape_repeat1,
    ACTIONS(190), 3,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_2,
  [1229] = 2,
    ACTIONS(199), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1239] = 2,
    ACTIONS(203), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1249] = 5,
    ACTIONS(205), 1,
      sym__word,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(209), 1,
      sym__dash,
    STATE(8), 1,
      aux_sym__identifier_repeat2,
    STATE(81), 1,
      aux_sym__identifier_repeat1,
  [1265] = 5,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(211), 1,
      sym__word,
    ACTIONS(213), 1,
      sym__dash,
    STATE(33), 1,
      aux_sym__identifier_repeat2,
    STATE(81), 1,
      aux_sym__identifier_repeat1,
  [1281] = 4,
    ACTIONS(215), 1,
      sym__word,
    ACTIONS(219), 1,
      anon_sym_GT,
    STATE(74), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(217), 2,
      anon_sym_,
      sym__dash,
  [1295] = 2,
    ACTIONS(223), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1305] = 4,
    ACTIONS(227), 1,
      anon_sym_,
    ACTIONS(229), 1,
      sym__dash,
    STATE(67), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(225), 2,
      sym__word,
      anon_sym_GT,
  [1319] = 2,
    ACTIONS(234), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1329] = 2,
    ACTIONS(238), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1339] = 2,
    ACTIONS(242), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1349] = 2,
    ACTIONS(246), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1359] = 2,
    ACTIONS(250), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1369] = 2,
    ACTIONS(254), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1379] = 4,
    ACTIONS(256), 1,
      sym__word,
    ACTIONS(260), 1,
      anon_sym_GT,
    STATE(67), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(258), 2,
      anon_sym_,
      sym__dash,
  [1393] = 2,
    ACTIONS(264), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(262), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1403] = 2,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(190), 4,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_2,
      sym_dot,
  [1413] = 3,
    ACTIONS(256), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(258), 2,
      anon_sym_,
      sym__dash,
  [1424] = 3,
    ACTIONS(268), 1,
      anon_sym_LF,
    STATE(73), 1,
      sym__end,
    ACTIONS(266), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1435] = 3,
    ACTIONS(215), 1,
      sym__word,
    STATE(77), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(217), 2,
      anon_sym_,
      sym__dash,
  [1446] = 3,
    ACTIONS(272), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym__end,
    ACTIONS(270), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1457] = 4,
    ACTIONS(106), 1,
      sym__word,
    ACTIONS(274), 1,
      anon_sym_,
    ACTIONS(277), 1,
      sym__dash,
    STATE(81), 1,
      aux_sym__identifier_repeat1,
  [1470] = 4,
    ACTIONS(143), 1,
      sym__word,
    ACTIONS(279), 1,
      anon_sym_,
    ACTIONS(281), 1,
      sym__dash,
    STATE(104), 1,
      aux_sym__identifier_repeat1,
  [1483] = 4,
    ACTIONS(79), 1,
      sym__word,
    ACTIONS(283), 1,
      anon_sym_,
    ACTIONS(285), 1,
      sym__dash,
    STATE(90), 1,
      aux_sym__identifier_repeat1,
  [1496] = 3,
    ACTIONS(289), 1,
      anon_sym_LF,
    STATE(69), 1,
      sym__end,
    ACTIONS(287), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1507] = 3,
    ACTIONS(293), 1,
      anon_sym_LF,
    STATE(70), 1,
      sym__end,
    ACTIONS(291), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1518] = 3,
    ACTIONS(297), 1,
      anon_sym_LF,
    STATE(72), 1,
      sym__end,
    ACTIONS(295), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1529] = 3,
    ACTIONS(301), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym__end,
    ACTIONS(299), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1540] = 3,
    ACTIONS(303), 1,
      aux_sym_string_token1,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [1550] = 3,
    ACTIONS(307), 1,
      aux_sym_string_token1,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_string_repeat1,
  [1560] = 3,
    ACTIONS(85), 1,
      sym__word,
    ACTIONS(207), 1,
      anon_sym_,
    STATE(81), 1,
      aux_sym__identifier_repeat1,
  [1570] = 3,
    ACTIONS(311), 1,
      aux_sym_string_token1,
    ACTIONS(314), 1,
      anon_sym_BQUOTE,
    STATE(91), 1,
      aux_sym_string_repeat1,
  [1580] = 2,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(316), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1588] = 3,
    ACTIONS(227), 1,
      anon_sym_DASH_GT,
    ACTIONS(320), 1,
      sym__dash,
    STATE(93), 1,
      aux_sym_arrow_repeat1,
  [1598] = 3,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      aux_sym_string_token1,
    STATE(94), 1,
      aux_sym_string_repeat1,
  [1608] = 2,
    ACTIONS(326), 1,
      sym__word,
    ACTIONS(328), 2,
      anon_sym_,
      sym__dash,
  [1616] = 3,
    ACTIONS(309), 1,
      anon_sym_BQUOTE,
    ACTIONS(330), 1,
      aux_sym_string_token1,
    STATE(91), 1,
      aux_sym_string_repeat1,
  [1626] = 3,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(332), 1,
      aux_sym_string_token1,
    STATE(96), 1,
      aux_sym_string_repeat1,
  [1636] = 2,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(334), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1644] = 3,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      aux_sym_string_token1,
    STATE(107), 1,
      aux_sym_string_repeat1,
  [1654] = 2,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(340), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1662] = 2,
    ACTIONS(215), 1,
      sym__word,
    ACTIONS(217), 2,
      anon_sym_,
      sym__dash,
  [1670] = 2,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1678] = 2,
    ACTIONS(256), 1,
      sym__word,
    ACTIONS(258), 2,
      anon_sym_,
      sym__dash,
  [1686] = 3,
    ACTIONS(166), 1,
      sym__word,
    ACTIONS(207), 1,
      anon_sym_,
    STATE(81), 1,
      aux_sym__identifier_repeat1,
  [1696] = 3,
    ACTIONS(314), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      aux_sym_string_token1,
    STATE(105), 1,
      aux_sym_string_repeat1,
  [1706] = 3,
    ACTIONS(351), 1,
      sym__dash,
    ACTIONS(353), 1,
      anon_sym_DASH_GT,
    STATE(93), 1,
      aux_sym_arrow_repeat1,
  [1716] = 3,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      aux_sym_string_token1,
    STATE(105), 1,
      aux_sym_string_repeat1,
  [1726] = 2,
    ACTIONS(357), 1,
      sym__word,
    STATE(9), 1,
      aux_sym__identifier_repeat2,
  [1733] = 2,
    ACTIONS(359), 1,
      sym__word,
    STATE(33), 1,
      aux_sym__identifier_repeat2,
  [1740] = 2,
    ACTIONS(361), 1,
      sym__word,
    STATE(32), 1,
      aux_sym__identifier_repeat2,
  [1747] = 2,
    ACTIONS(363), 1,
      sym__word,
    STATE(8), 1,
      aux_sym__identifier_repeat2,
  [1754] = 1,
    ACTIONS(365), 1,
      sym__word,
  [1758] = 1,
    ACTIONS(367), 1,
      anon_sym_COLON,
  [1762] = 1,
    ACTIONS(369), 1,
      anon_sym_COLON,
  [1766] = 1,
    ACTIONS(371), 1,
      anon_sym_COLON,
  [1770] = 1,
    ACTIONS(373), 1,
      anon_sym_COLON,
  [1774] = 1,
    ACTIONS(375), 1,
      anon_sym_COLON,
  [1778] = 1,
    ACTIONS(377), 1,
      sym_dot,
  [1782] = 1,
    ACTIONS(379), 1,
      sym__word,
  [1786] = 1,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 224,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 315,
  [SMALL_STATE(14)] = 336,
  [SMALL_STATE(15)] = 359,
  [SMALL_STATE(16)] = 380,
  [SMALL_STATE(17)] = 401,
  [SMALL_STATE(18)] = 422,
  [SMALL_STATE(19)] = 441,
  [SMALL_STATE(20)] = 464,
  [SMALL_STATE(21)] = 483,
  [SMALL_STATE(22)] = 501,
  [SMALL_STATE(23)] = 515,
  [SMALL_STATE(24)] = 533,
  [SMALL_STATE(25)] = 565,
  [SMALL_STATE(26)] = 583,
  [SMALL_STATE(27)] = 601,
  [SMALL_STATE(28)] = 619,
  [SMALL_STATE(29)] = 633,
  [SMALL_STATE(30)] = 651,
  [SMALL_STATE(31)] = 669,
  [SMALL_STATE(32)] = 698,
  [SMALL_STATE(33)] = 721,
  [SMALL_STATE(34)] = 744,
  [SMALL_STATE(35)] = 767,
  [SMALL_STATE(36)] = 787,
  [SMALL_STATE(37)] = 801,
  [SMALL_STATE(38)] = 819,
  [SMALL_STATE(39)] = 839,
  [SMALL_STATE(40)] = 859,
  [SMALL_STATE(41)] = 872,
  [SMALL_STATE(42)] = 889,
  [SMALL_STATE(43)] = 906,
  [SMALL_STATE(44)] = 923,
  [SMALL_STATE(45)] = 940,
  [SMALL_STATE(46)] = 953,
  [SMALL_STATE(47)] = 968,
  [SMALL_STATE(48)] = 985,
  [SMALL_STATE(49)] = 1002,
  [SMALL_STATE(50)] = 1014,
  [SMALL_STATE(51)] = 1034,
  [SMALL_STATE(52)] = 1056,
  [SMALL_STATE(53)] = 1078,
  [SMALL_STATE(54)] = 1100,
  [SMALL_STATE(55)] = 1119,
  [SMALL_STATE(56)] = 1138,
  [SMALL_STATE(57)] = 1157,
  [SMALL_STATE(58)] = 1176,
  [SMALL_STATE(59)] = 1195,
  [SMALL_STATE(60)] = 1214,
  [SMALL_STATE(61)] = 1229,
  [SMALL_STATE(62)] = 1239,
  [SMALL_STATE(63)] = 1249,
  [SMALL_STATE(64)] = 1265,
  [SMALL_STATE(65)] = 1281,
  [SMALL_STATE(66)] = 1295,
  [SMALL_STATE(67)] = 1305,
  [SMALL_STATE(68)] = 1319,
  [SMALL_STATE(69)] = 1329,
  [SMALL_STATE(70)] = 1339,
  [SMALL_STATE(71)] = 1349,
  [SMALL_STATE(72)] = 1359,
  [SMALL_STATE(73)] = 1369,
  [SMALL_STATE(74)] = 1379,
  [SMALL_STATE(75)] = 1393,
  [SMALL_STATE(76)] = 1403,
  [SMALL_STATE(77)] = 1413,
  [SMALL_STATE(78)] = 1424,
  [SMALL_STATE(79)] = 1435,
  [SMALL_STATE(80)] = 1446,
  [SMALL_STATE(81)] = 1457,
  [SMALL_STATE(82)] = 1470,
  [SMALL_STATE(83)] = 1483,
  [SMALL_STATE(84)] = 1496,
  [SMALL_STATE(85)] = 1507,
  [SMALL_STATE(86)] = 1518,
  [SMALL_STATE(87)] = 1529,
  [SMALL_STATE(88)] = 1540,
  [SMALL_STATE(89)] = 1550,
  [SMALL_STATE(90)] = 1560,
  [SMALL_STATE(91)] = 1570,
  [SMALL_STATE(92)] = 1580,
  [SMALL_STATE(93)] = 1588,
  [SMALL_STATE(94)] = 1598,
  [SMALL_STATE(95)] = 1608,
  [SMALL_STATE(96)] = 1616,
  [SMALL_STATE(97)] = 1626,
  [SMALL_STATE(98)] = 1636,
  [SMALL_STATE(99)] = 1644,
  [SMALL_STATE(100)] = 1654,
  [SMALL_STATE(101)] = 1662,
  [SMALL_STATE(102)] = 1670,
  [SMALL_STATE(103)] = 1678,
  [SMALL_STATE(104)] = 1686,
  [SMALL_STATE(105)] = 1696,
  [SMALL_STATE(106)] = 1706,
  [SMALL_STATE(107)] = 1716,
  [SMALL_STATE(108)] = 1726,
  [SMALL_STATE(109)] = 1733,
  [SMALL_STATE(110)] = 1740,
  [SMALL_STATE(111)] = 1747,
  [SMALL_STATE(112)] = 1754,
  [SMALL_STATE(113)] = 1758,
  [SMALL_STATE(114)] = 1762,
  [SMALL_STATE(115)] = 1766,
  [SMALL_STATE(116)] = 1770,
  [SMALL_STATE(117)] = 1774,
  [SMALL_STATE(118)] = 1778,
  [SMALL_STATE(119)] = 1782,
  [SMALL_STATE(120)] = 1786,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(83),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(20),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(106),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(79),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(65),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(101),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(82),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(53),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(67),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 6),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__style_attribute, 6),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4, .production_id = 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 6),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shape_attribute, 6),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shape_attribute, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(81),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(91),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(93),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(94),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(105),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [381] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
