#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 219
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym__word = 1,
  anon_sym_ = 2,
  sym__root_attr_key = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_style = 6,
  anon_sym_shape = 7,
  anon_sym_label = 8,
  anon_sym_constraint = 9,
  anon_sym_icon = 10,
  anon_sym_width = 11,
  anon_sym_height = 12,
  anon_sym_opacity = 13,
  anon_sym_fill = 14,
  anon_sym_stroke = 15,
  anon_sym_stroke_DASHwidth = 16,
  anon_sym_stroke_DASHdash = 17,
  anon_sym_border_DASHradius = 18,
  anon_sym_font_DASHcolor = 19,
  anon_sym_shadow = 20,
  anon_sym_multiple = 21,
  anon_sym_animated = 22,
  anon_sym_3d = 23,
  anon_sym_link = 24,
  sym__text_attr_key = 25,
  anon_sym_source_DASHarrowhead = 26,
  anon_sym_target_DASHarrowhead = 27,
  anon_sym_COLON = 28,
  anon_sym_DASH_DASH = 29,
  anon_sym_LT_DASH = 30,
  anon_sym_GT = 31,
  anon_sym_DASH_GT = 32,
  sym__dash = 33,
  sym_dot = 34,
  sym__unquoted_string = 35,
  anon_sym_SQUOTE = 36,
  aux_sym_string_token1 = 37,
  anon_sym_DQUOTE = 38,
  aux_sym_string_token2 = 39,
  anon_sym_BQUOTE = 40,
  aux_sym_string_token3 = 41,
  anon_sym_LF = 42,
  anon_sym_2 = 43,
  anon_sym_SEMI = 44,
  sym_source_file = 45,
  sym__definition = 46,
  sym_connection = 47,
  sym_shape = 48,
  sym_label = 49,
  sym_attr_value = 50,
  sym__root_attribute = 51,
  sym__shape_block = 52,
  sym__shape_block_definition = 53,
  sym__shape_attribute = 54,
  sym__style_attribute = 55,
  sym__style_attr_block = 56,
  sym__inner_style_attribute = 57,
  sym__connection_attribute = 58,
  sym__shape_attr_key = 59,
  sym__style_attr_key = 60,
  sym__connection_attr_key = 61,
  sym__identifier = 62,
  sym_identifier = 63,
  sym__colon = 64,
  sym__arrow = 65,
  sym_arrow = 66,
  sym_string = 67,
  sym__emptyline = 68,
  sym__eof = 69,
  sym__end = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_connection_repeat1 = 72,
  aux_sym_shape_repeat1 = 73,
  aux_sym_attr_value_repeat1 = 74,
  aux_sym__shape_block_repeat1 = 75,
  aux_sym__style_attr_block_repeat1 = 76,
  aux_sym_identifier_repeat1 = 77,
  aux_sym_arrow_repeat1 = 78,
  aux_sym_string_repeat1 = 79,
  aux_sym_string_repeat2 = 80,
  aux_sym_string_repeat3 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_] = " ",
  [sym__root_attr_key] = "attr_key",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [sym__dash] = "_dash",
  [sym_dot] = "dot",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_LF] = "\n",
  [anon_sym_2] = " ",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_connection] = "connection",
  [sym_shape] = "shape",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__root_attribute] = "_root_attribute",
  [sym__shape_block] = "block",
  [sym__shape_block_definition] = "_shape_block_definition",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__style_attribute] = "_style_attribute",
  [sym__style_attr_block] = "block",
  [sym__inner_style_attribute] = "_inner_style_attribute",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__connection_attr_key] = "attr_key",
  [sym__identifier] = "_identifier",
  [sym_identifier] = "identifier",
  [sym__colon] = "_colon",
  [sym__arrow] = "_arrow",
  [sym_arrow] = "arrow",
  [sym_string] = "string",
  [sym__emptyline] = "_emptyline",
  [sym__eof] = "_eof",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_shape_repeat1] = "shape_repeat1",
  [aux_sym_attr_value_repeat1] = "attr_value_repeat1",
  [aux_sym__shape_block_repeat1] = "_shape_block_repeat1",
  [aux_sym__style_attr_block_repeat1] = "_style_attr_block_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_] = anon_sym_,
  [sym__root_attr_key] = sym__root_attr_key,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__dash] = sym__dash,
  [sym_dot] = sym_dot,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_connection] = sym_connection,
  [sym_shape] = sym_shape,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__root_attribute] = sym__root_attribute,
  [sym__shape_block] = sym__shape_block,
  [sym__shape_block_definition] = sym__shape_block_definition,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__style_attribute] = sym__style_attribute,
  [sym__style_attr_block] = sym__shape_block,
  [sym__inner_style_attribute] = sym__inner_style_attribute,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__connection_attr_key] = sym__root_attr_key,
  [sym__identifier] = sym__identifier,
  [sym_identifier] = sym_identifier,
  [sym__colon] = sym__colon,
  [sym__arrow] = sym__arrow,
  [sym_arrow] = sym_arrow,
  [sym_string] = sym_string,
  [sym__emptyline] = sym__emptyline,
  [sym__eof] = sym__eof,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_shape_repeat1] = aux_sym_shape_repeat1,
  [aux_sym_attr_value_repeat1] = aux_sym_attr_value_repeat1,
  [aux_sym__shape_block_repeat1] = aux_sym__shape_block_repeat1,
  [aux_sym__style_attr_block_repeat1] = aux_sym__style_attr_block_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_arrow_repeat1] = aux_sym_arrow_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_source_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
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
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
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
  [anon_sym_SEMI] = {
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
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_block] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attr_block] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_style_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_attribute] = {
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
  [sym__connection_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym__arrow] = {
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
  [sym__emptyline] = {
    .visible = false,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
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
  [aux_sym_attr_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__shape_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__style_attr_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
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
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat3] = {
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
  [30] = 10,
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
  [43] = 39,
  [44] = 40,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 42,
  [55] = 53,
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
  [76] = 60,
  [77] = 58,
  [78] = 78,
  [79] = 59,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 61,
  [87] = 87,
  [88] = 88,
  [89] = 57,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 62,
  [100] = 100,
  [101] = 101,
  [102] = 64,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 65,
  [111] = 63,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 10,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 87,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 167,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 87,
  [180] = 180,
  [181] = 181,
  [182] = 149,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 196,
  [204] = 204,
  [205] = 205,
  [206] = 205,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 87,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 211,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 217,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(105);
      if (lookahead == 0) ADVANCE(186);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '3') ADVANCE(152);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(186);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(186);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '}') ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(187);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'k') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 102:
      if (lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 104:
      if (eof) ADVANCE(105);
      if (lookahead == 0) ADVANCE(186);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(149);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
  [1] = {.lex_state = 104},
  [2] = {.lex_state = 104},
  [3] = {.lex_state = 104},
  [4] = {.lex_state = 104},
  [5] = {.lex_state = 104},
  [6] = {.lex_state = 104},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 104},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 104},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 104},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 104},
  [31] = {.lex_state = 104},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 104},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 104},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 104},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 104},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 104},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 104},
  [50] = {.lex_state = 104},
  [51] = {.lex_state = 104},
  [52] = {.lex_state = 104},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 104},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 104},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 104},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 104},
  [71] = {.lex_state = 104},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 104},
  [76] = {.lex_state = 104},
  [77] = {.lex_state = 104},
  [78] = {.lex_state = 104},
  [79] = {.lex_state = 104},
  [80] = {.lex_state = 104},
  [81] = {.lex_state = 104},
  [82] = {.lex_state = 104},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 104},
  [85] = {.lex_state = 104},
  [86] = {.lex_state = 104},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 104},
  [89] = {.lex_state = 104},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 104},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 104},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 104},
  [111] = {.lex_state = 104},
  [112] = {.lex_state = 104},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 104},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 104},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 104},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 104},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 104},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 104},
  [156] = {.lex_state = 104},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 104},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 104},
  [172] = {.lex_state = 104},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 104},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 104},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 104},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 104},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 104},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 104},
  [204] = {.lex_state = 104},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 104},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 104},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 104},
  [218] = {.lex_state = 104},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__root_attr_key] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(216),
    [sym__definition] = STATE(26),
    [sym_connection] = STATE(26),
    [sym_shape] = STATE(26),
    [sym__root_attribute] = STATE(26),
    [sym__identifier] = STATE(20),
    [sym_identifier] = STATE(20),
    [sym__emptyline] = STATE(26),
    [sym__eof] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_attr_value_repeat1] = STATE(80),
    [aux_sym_identifier_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [anon_sym_] = ACTIONS(7),
    [sym__root_attr_key] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_2] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(15), 1,
      anon_sym_,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_style,
    STATE(20), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym_attr_value_repeat1,
    STATE(54), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(69), 1,
      sym_identifier,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(23), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(7), 2,
      sym__emptyline,
      aux_sym__shape_block_repeat1,
    STATE(104), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [57] = 15,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(25), 1,
      anon_sym_,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym__identifier,
    STATE(35), 1,
      aux_sym_attr_value_repeat1,
    STATE(54), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(69), 1,
      sym_identifier,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(23), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(8), 2,
      sym__emptyline,
      aux_sym__shape_block_repeat1,
    STATE(107), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [114] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(71), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(31), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(9), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(107), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [167] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(35), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(8), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(107), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [220] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(37), 1,
      anon_sym_,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_attr_value_repeat1,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(41), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(4), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(97), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [273] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(43), 1,
      anon_sym_,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(70), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(31), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(9), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(96), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [326] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(47), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(67), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(31), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(9), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(104), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [379] = 13,
    ACTIONS(49), 1,
      sym__word,
    ACTIONS(52), 1,
      anon_sym_,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(63), 1,
      sym__dash,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(80), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(66), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(9), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(125), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [432] = 4,
    ACTIONS(69), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(74), 2,
      anon_sym_stroke,
      sym__dash,
    ACTIONS(72), 19,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [464] = 10,
    ACTIONS(76), 1,
      anon_sym_,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_stroke,
    STATE(23), 1,
      aux_sym_attr_value_repeat1,
    STATE(42), 1,
      sym__eof,
    STATE(100), 1,
      sym__inner_style_attribute,
    STATE(175), 1,
      sym__style_attr_key,
    ACTIONS(84), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(18), 2,
      sym__emptyline,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [507] = 9,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(86), 1,
      anon_sym_,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_attr_value_repeat1,
    STATE(94), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(13), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [548] = 9,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(92), 1,
      anon_sym_,
    STATE(22), 1,
      aux_sym_attr_value_repeat1,
    STATE(100), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(94), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(17), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [589] = 9,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(96), 1,
      anon_sym_,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_attr_value_repeat1,
    STATE(98), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(94), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(17), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [630] = 9,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(100), 1,
      anon_sym_,
    STATE(16), 1,
      aux_sym_attr_value_repeat1,
    STATE(100), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(102), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(18), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [671] = 10,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(104), 1,
      anon_sym_,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_attr_value_repeat1,
    STATE(42), 1,
      sym__eof,
    STATE(106), 1,
      sym__inner_style_attribute,
    STATE(175), 1,
      sym__style_attr_key,
    ACTIONS(84), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(14), 2,
      sym__emptyline,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [714] = 9,
    ACTIONS(108), 1,
      anon_sym_,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      anon_sym_stroke,
    STATE(27), 1,
      aux_sym_attr_value_repeat1,
    STATE(118), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(119), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(17), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(113), 11,
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
  [755] = 9,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      anon_sym_,
    STATE(24), 1,
      aux_sym_attr_value_repeat1,
    STATE(106), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(94), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(17), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [796] = 8,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(124), 1,
      anon_sym_,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(128), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(80), 11,
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
  [832] = 15,
    ACTIONS(130), 1,
      anon_sym_,
    ACTIONS(132), 1,
      anon_sym_COLON,
    ACTIONS(134), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_LT_DASH,
    ACTIONS(138), 1,
      anon_sym_DASH_GT,
    ACTIONS(140), 1,
      sym__dash,
    ACTIONS(142), 1,
      sym_dot,
    STATE(25), 1,
      aux_sym_connection_repeat1,
    STATE(45), 1,
      sym__colon,
    STATE(53), 1,
      aux_sym_attr_value_repeat1,
    STATE(66), 1,
      aux_sym_shape_repeat1,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(81), 2,
      sym__eof,
      sym__end,
    STATE(112), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(144), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [882] = 8,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      anon_sym_stroke,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(155), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(149), 11,
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
  [918] = 8,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(128), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(80), 11,
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
  [954] = 8,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(152), 1,
      anon_sym_stroke,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(155), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(149), 11,
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
  [990] = 8,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(128), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(80), 11,
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
  [1026] = 14,
    ACTIONS(134), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_LT_DASH,
    ACTIONS(138), 1,
      anon_sym_DASH_GT,
    ACTIONS(140), 1,
      sym__dash,
    ACTIONS(161), 1,
      anon_sym_,
    ACTIONS(163), 1,
      anon_sym_COLON,
    ACTIONS(165), 1,
      sym_dot,
    STATE(47), 1,
      aux_sym_connection_repeat1,
    STATE(55), 1,
      aux_sym_attr_value_repeat1,
    STATE(136), 1,
      sym__colon,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(88), 2,
      sym__eof,
      sym__end,
    STATE(112), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(167), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1073] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      sym__root_attr_key,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(80), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(171), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(28), 7,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__emptyline,
      sym__eof,
      aux_sym_source_file_repeat1,
  [1112] = 7,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(124), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(128), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(80), 11,
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
  [1145] = 10,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym__word,
    ACTIONS(178), 1,
      anon_sym_,
    ACTIONS(181), 1,
      sym__root_attr_key,
    ACTIONS(184), 1,
      sym__dash,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(80), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(187), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(28), 7,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__emptyline,
      sym__eof,
      aux_sym_source_file_repeat1,
  [1184] = 5,
    ACTIONS(190), 1,
      anon_sym_,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_stroke,
    STATE(186), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(111), 13,
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
      anon_sym_LF,
      anon_sym_2,
  [1212] = 4,
    ACTIONS(198), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(72), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    ACTIONS(74), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1238] = 10,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(201), 1,
      sym__word,
    ACTIONS(203), 1,
      anon_sym_,
    ACTIONS(205), 1,
      sym__dash,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    STATE(135), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    STATE(119), 2,
      sym__shape_attribute,
      sym__style_attribute,
    STATE(132), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1276] = 5,
    ACTIONS(196), 1,
      anon_sym_stroke,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(111), 13,
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
      anon_sym_LF,
      anon_sym_2,
  [1304] = 10,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(201), 1,
      sym__word,
    ACTIONS(203), 1,
      anon_sym_,
    ACTIONS(205), 1,
      sym__dash,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    STATE(135), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    STATE(128), 2,
      sym__shape_attribute,
      sym__style_attribute,
    STATE(132), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1342] = 5,
    ACTIONS(196), 1,
      anon_sym_stroke,
    ACTIONS(213), 1,
      anon_sym_,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(111), 13,
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
      anon_sym_LF,
      anon_sym_2,
  [1370] = 10,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(219), 1,
      sym__word,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym__dash,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(228), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(74), 7,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1408] = 5,
    ACTIONS(196), 1,
      anon_sym_stroke,
    ACTIONS(231), 1,
      anon_sym_,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(111), 13,
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
      anon_sym_LF,
      anon_sym_2,
  [1436] = 10,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(219), 1,
      sym__word,
    ACTIONS(225), 1,
      sym__dash,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(228), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(74), 7,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1474] = 6,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(240), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym_attr_value_repeat1,
    STATE(143), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(80), 11,
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
  [1503] = 2,
    ACTIONS(242), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    ACTIONS(244), 9,
      sym__root_attr_key,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1524] = 2,
    ACTIONS(248), 1,
      anon_sym_stroke,
    ACTIONS(246), 15,
      anon_sym_,
      anon_sym_RBRACE,
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
      anon_sym_LF,
      anon_sym_2,
  [1545] = 2,
    ACTIONS(196), 1,
      anon_sym_stroke,
    ACTIONS(111), 15,
      anon_sym_,
      anon_sym_RBRACE,
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
      anon_sym_LF,
      anon_sym_2,
  [1566] = 2,
    ACTIONS(253), 1,
      anon_sym_stroke,
    ACTIONS(250), 15,
      anon_sym_,
      anon_sym_RBRACE,
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
      anon_sym_LF,
      anon_sym_2,
  [1587] = 2,
    ACTIONS(244), 1,
      anon_sym_stroke,
    ACTIONS(242), 15,
      anon_sym_,
      anon_sym_RBRACE,
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
      anon_sym_LF,
      anon_sym_2,
  [1608] = 2,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(248), 9,
      sym__root_attr_key,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1628] = 13,
    ACTIONS(256), 1,
      anon_sym_,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      anon_sym_2,
    STATE(83), 1,
      sym_label,
    STATE(119), 1,
      sym__shape_block,
    STATE(123), 1,
      aux_sym_attr_value_repeat1,
    STATE(142), 1,
      sym_string,
    ACTIONS(268), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(84), 2,
      sym__eof,
      sym__end,
  [1670] = 13,
    ACTIONS(256), 1,
      anon_sym_,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      sym__unquoted_string,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(274), 1,
      anon_sym_2,
    STATE(90), 1,
      sym_label,
    STATE(123), 1,
      aux_sym_attr_value_repeat1,
    STATE(128), 1,
      sym__shape_block,
    STATE(142), 1,
      sym_string,
    ACTIONS(272), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(82), 2,
      sym__eof,
      sym__end,
  [1712] = 10,
    ACTIONS(276), 1,
      anon_sym_,
    ACTIONS(281), 1,
      anon_sym_DASH_DASH,
    ACTIONS(284), 1,
      anon_sym_LT_DASH,
    ACTIONS(287), 1,
      anon_sym_DASH_GT,
    ACTIONS(290), 1,
      sym__dash,
    STATE(47), 1,
      aux_sym_connection_repeat1,
    STATE(93), 1,
      aux_sym_attr_value_repeat1,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(112), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(279), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1748] = 5,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(124), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(80), 11,
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
  [1774] = 5,
    ACTIONS(295), 1,
      anon_sym_,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(55), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(293), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1799] = 5,
    ACTIONS(301), 1,
      anon_sym_,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(55), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(293), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1824] = 5,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(55), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(293), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1849] = 5,
    ACTIONS(313), 1,
      anon_sym_,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(55), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(293), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1874] = 11,
    ACTIONS(124), 1,
      anon_sym_,
    ACTIONS(134), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_LT_DASH,
    ACTIONS(138), 1,
      anon_sym_DASH_GT,
    ACTIONS(140), 1,
      sym__dash,
    ACTIONS(319), 1,
      anon_sym_COLON,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(204), 1,
      sym_arrow,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1910] = 2,
    ACTIONS(250), 5,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(253), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1928] = 11,
    ACTIONS(124), 1,
      anon_sym_,
    ACTIONS(134), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_LT_DASH,
    ACTIONS(138), 1,
      anon_sym_DASH_GT,
    ACTIONS(140), 1,
      sym__dash,
    ACTIONS(323), 1,
      anon_sym_COLON,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(204), 1,
      sym_arrow,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1964] = 2,
    ACTIONS(55), 5,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(293), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1982] = 5,
    ACTIONS(325), 1,
      sym__word,
    ACTIONS(327), 1,
      anon_sym_,
    ACTIONS(332), 1,
      sym__dash,
    STATE(203), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(330), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2005] = 4,
    ACTIONS(335), 1,
      sym__word,
    ACTIONS(337), 1,
      sym__dash,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(330), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2026] = 5,
    ACTIONS(325), 1,
      sym__word,
    ACTIONS(340), 1,
      anon_sym_,
    ACTIONS(345), 1,
      sym__dash,
    STATE(203), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(343), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2049] = 4,
    ACTIONS(335), 1,
      sym__word,
    ACTIONS(348), 1,
      sym__dash,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(343), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2070] = 4,
    ACTIONS(351), 1,
      sym__word,
    ACTIONS(356), 1,
      sym__dash,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(354), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2091] = 2,
    ACTIONS(360), 1,
      sym__dash,
    ACTIONS(358), 10,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2107] = 3,
    ACTIONS(362), 1,
      sym__word,
    ACTIONS(364), 1,
      sym__dash,
    ACTIONS(343), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2125] = 2,
    ACTIONS(356), 1,
      sym__dash,
    ACTIONS(354), 10,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2141] = 3,
    ACTIONS(362), 1,
      sym__word,
    ACTIONS(368), 1,
      sym__dash,
    ACTIONS(366), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2159] = 8,
    ACTIONS(370), 1,
      anon_sym_,
    ACTIONS(372), 1,
      anon_sym_COLON,
    ACTIONS(374), 1,
      sym_dot,
    STATE(46), 1,
      sym__colon,
    STATE(124), 1,
      aux_sym_shape_repeat1,
    STATE(127), 1,
      aux_sym_attr_value_repeat1,
    STATE(84), 2,
      sym__eof,
      sym__end,
    ACTIONS(268), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2187] = 9,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      sym__word,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(380), 2,
      anon_sym_LF,
      anon_sym_2,
  [2216] = 2,
    ACTIONS(368), 1,
      sym__dash,
    ACTIONS(366), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2231] = 2,
    ACTIONS(385), 1,
      sym__dash,
    ACTIONS(382), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2246] = 9,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(376), 1,
      sym__word,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(380), 2,
      anon_sym_LF,
      anon_sym_2,
  [2275] = 9,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      sym__word,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(380), 2,
      anon_sym_LF,
      anon_sym_2,
  [2304] = 2,
    ACTIONS(364), 1,
      sym__dash,
    ACTIONS(343), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2319] = 2,
    ACTIONS(392), 1,
      sym__dash,
    ACTIONS(390), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2334] = 2,
    ACTIONS(394), 1,
      sym__dash,
    ACTIONS(279), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2349] = 2,
    ACTIONS(398), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(396), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2363] = 4,
    ACTIONS(400), 1,
      sym__word,
    ACTIONS(402), 1,
      sym__dash,
    STATE(86), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(343), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2381] = 4,
    ACTIONS(400), 1,
      sym__word,
    ACTIONS(404), 1,
      sym__dash,
    STATE(86), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(330), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2399] = 2,
    ACTIONS(408), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(406), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2413] = 5,
    ACTIONS(410), 1,
      sym__word,
    ACTIONS(412), 1,
      anon_sym_,
    ACTIONS(415), 1,
      sym__dash,
    STATE(196), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(343), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2433] = 8,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(376), 1,
      sym__word,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(380), 2,
      anon_sym_LF,
      anon_sym_2,
  [2459] = 2,
    ACTIONS(419), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(417), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2473] = 2,
    ACTIONS(423), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(421), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2487] = 6,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(425), 1,
      anon_sym_,
    STATE(123), 1,
      aux_sym_attr_value_repeat1,
    STATE(128), 1,
      sym__shape_block,
    STATE(82), 2,
      sym__eof,
      sym__end,
    ACTIONS(272), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2509] = 2,
    ACTIONS(429), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2523] = 2,
    ACTIONS(433), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(431), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2537] = 3,
    ACTIONS(435), 1,
      sym__word,
    STATE(86), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(354), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2553] = 2,
    ACTIONS(438), 3,
      anon_sym_,
      sym__unquoted_string,
      anon_sym_2,
    ACTIONS(440), 6,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_SEMI,
  [2567] = 2,
    ACTIONS(444), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(442), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2581] = 5,
    ACTIONS(410), 1,
      sym__word,
    ACTIONS(446), 1,
      anon_sym_,
    ACTIONS(449), 1,
      sym__dash,
    STATE(196), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(330), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2601] = 6,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(425), 1,
      anon_sym_,
    STATE(121), 1,
      sym__shape_block,
    STATE(123), 1,
      aux_sym_attr_value_repeat1,
    STATE(75), 2,
      sym__eof,
      sym__end,
    ACTIONS(451), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2623] = 8,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(455), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(141), 1,
      sym_attr_value,
    STATE(158), 1,
      sym_string,
  [2648] = 8,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(455), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(158), 1,
      sym_string,
    STATE(159), 1,
      sym_attr_value,
  [2673] = 8,
    ACTIONS(124), 1,
      anon_sym_,
    ACTIONS(134), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_LT_DASH,
    ACTIONS(138), 1,
      anon_sym_DASH_GT,
    ACTIONS(140), 1,
      sym__dash,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(204), 1,
      sym_arrow,
  [2698] = 5,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 1,
      anon_sym_,
    STATE(130), 1,
      aux_sym_attr_value_repeat1,
    STATE(34), 2,
      sym__eof,
      sym__end,
    ACTIONS(459), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2717] = 8,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(455), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(158), 1,
      sym_string,
    STATE(177), 1,
      sym_attr_value,
  [2742] = 5,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      anon_sym_,
    STATE(117), 1,
      aux_sym_attr_value_repeat1,
    STATE(52), 2,
      sym__eof,
      sym__end,
    ACTIONS(463), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2761] = 5,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      anon_sym_,
    STATE(120), 1,
      aux_sym_attr_value_repeat1,
    STATE(51), 2,
      sym__eof,
      sym__end,
    ACTIONS(467), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2780] = 5,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      anon_sym_,
    STATE(113), 1,
      aux_sym_attr_value_repeat1,
    STATE(32), 2,
      sym__eof,
      sym__end,
    ACTIONS(471), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2799] = 1,
    ACTIONS(358), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2810] = 5,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(473), 1,
      anon_sym_,
    STATE(108), 1,
      aux_sym_attr_value_repeat1,
    STATE(36), 2,
      sym__eof,
      sym__end,
    ACTIONS(475), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2829] = 8,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(455), 1,
      sym__unquoted_string,
    STATE(114), 1,
      sym_attr_value,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(158), 1,
      sym_string,
  [2854] = 1,
    ACTIONS(354), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2865] = 8,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(455), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(152), 1,
      sym_attr_value,
    STATE(158), 1,
      sym_string,
  [2890] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      anon_sym_,
    STATE(129), 1,
      aux_sym_attr_value_repeat1,
    STATE(50), 2,
      sym__eof,
      sym__end,
    ACTIONS(479), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2909] = 8,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(455), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(146), 1,
      sym_attr_value,
    STATE(158), 1,
      sym_string,
  [2934] = 5,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(481), 1,
      anon_sym_,
    STATE(116), 1,
      aux_sym_attr_value_repeat1,
    STATE(29), 2,
      sym__eof,
      sym__end,
    ACTIONS(483), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2953] = 5,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(485), 1,
      anon_sym_,
    STATE(109), 1,
      aux_sym_attr_value_repeat1,
    STATE(49), 2,
      sym__eof,
      sym__end,
    ACTIONS(487), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2972] = 5,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(43), 1,
      sym__eof,
    ACTIONS(489), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2990] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3008] = 2,
    ACTIONS(491), 1,
      sym__word,
    ACTIONS(366), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3020] = 2,
    ACTIONS(491), 1,
      sym__word,
    ACTIONS(343), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3032] = 6,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(376), 1,
      sym__word,
    ACTIONS(493), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(137), 1,
      aux_sym_attr_value_repeat1,
    STATE(74), 2,
      sym__identifier,
      sym_identifier,
  [3052] = 5,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(43), 1,
      sym__eof,
    ACTIONS(489), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3070] = 4,
    ACTIONS(497), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(131), 2,
      sym__eof,
      sym__end,
    ACTIONS(499), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3086] = 7,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(501), 1,
      anon_sym_,
    ACTIONS(503), 1,
      sym__unquoted_string,
    STATE(133), 1,
      aux_sym_attr_value_repeat1,
    STATE(145), 1,
      sym_string,
  [3108] = 5,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(43), 1,
      sym__eof,
    ACTIONS(489), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3126] = 5,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3144] = 4,
    ACTIONS(507), 1,
      anon_sym_,
    STATE(139), 1,
      aux_sym_attr_value_repeat1,
    STATE(41), 2,
      sym__eof,
      sym__end,
    ACTIONS(509), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3160] = 4,
    ACTIONS(497), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(82), 2,
      sym__eof,
      sym__end,
    ACTIONS(272), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3176] = 5,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3194] = 4,
    ACTIONS(497), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(78), 2,
      sym__eof,
      sym__end,
    ACTIONS(511), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3210] = 6,
    ACTIONS(203), 1,
      anon_sym_,
    ACTIONS(205), 1,
      sym__dash,
    ACTIONS(513), 1,
      sym__word,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    STATE(135), 1,
      aux_sym_attr_value_repeat1,
    STATE(132), 2,
      sym__identifier,
      sym_identifier,
  [3230] = 5,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3248] = 3,
    ACTIONS(519), 1,
      sym_dot,
    STATE(124), 1,
      aux_sym_shape_repeat1,
    ACTIONS(517), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3262] = 4,
    ACTIONS(497), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(56), 2,
      sym__eof,
      sym__end,
    ACTIONS(522), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3278] = 4,
    ACTIONS(497), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(85), 2,
      sym__eof,
      sym__end,
    ACTIONS(524), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3294] = 5,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3312] = 4,
    ACTIONS(497), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(75), 2,
      sym__eof,
      sym__end,
    ACTIONS(451), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3328] = 5,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3346] = 5,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(43), 1,
      sym__eof,
    ACTIONS(489), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3364] = 2,
    ACTIONS(528), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(526), 5,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
  [3376] = 1,
    ACTIONS(517), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3385] = 4,
    ACTIONS(74), 1,
      sym__unquoted_string,
    ACTIONS(530), 1,
      anon_sym_,
    STATE(133), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(72), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [3400] = 1,
    ACTIONS(533), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3409] = 6,
    ACTIONS(205), 1,
      sym__dash,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(513), 1,
      sym__word,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(73), 1,
      sym_identifier,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
  [3428] = 6,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(535), 1,
      sym__unquoted_string,
    STATE(126), 1,
      sym_label,
    STATE(142), 1,
      sym_string,
  [3447] = 6,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(376), 1,
      sym__word,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
  [3466] = 1,
    ACTIONS(537), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3475] = 4,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(43), 1,
      sym__eof,
    ACTIONS(489), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3490] = 4,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3505] = 1,
    ACTIONS(539), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3513] = 1,
    ACTIONS(541), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3521] = 1,
    ACTIONS(543), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3529] = 2,
    ACTIONS(438), 2,
      anon_sym_,
      sym__unquoted_string,
    ACTIONS(440), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [3539] = 1,
    ACTIONS(545), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3547] = 1,
    ACTIONS(547), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3555] = 1,
    ACTIONS(550), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3563] = 1,
    ACTIONS(552), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3571] = 3,
    ACTIONS(556), 1,
      sym__dash,
    STATE(149), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(554), 3,
      anon_sym_,
      anon_sym_GT,
      sym__word,
  [3583] = 1,
    ACTIONS(559), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3591] = 1,
    ACTIONS(561), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3599] = 1,
    ACTIONS(563), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3607] = 1,
    ACTIONS(565), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3615] = 1,
    ACTIONS(567), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3623] = 4,
    ACTIONS(571), 1,
      anon_sym_GT,
    ACTIONS(573), 1,
      sym__dash,
    STATE(149), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(569), 2,
      anon_sym_,
      sym__word,
  [3637] = 4,
    ACTIONS(578), 1,
      anon_sym_GT,
    ACTIONS(580), 1,
      sym__dash,
    STATE(155), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(576), 2,
      anon_sym_,
      sym__word,
  [3651] = 5,
    ACTIONS(583), 1,
      anon_sym_,
    ACTIONS(585), 1,
      anon_sym_COLON,
    ACTIONS(587), 1,
      sym_dot,
    STATE(180), 1,
      sym__colon,
    STATE(206), 1,
      aux_sym_attr_value_repeat1,
  [3667] = 1,
    ACTIONS(589), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3675] = 1,
    ACTIONS(591), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3683] = 1,
    ACTIONS(593), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3691] = 1,
    ACTIONS(595), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3698] = 1,
    ACTIONS(597), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3705] = 1,
    ACTIONS(599), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3712] = 4,
    ACTIONS(601), 1,
      anon_sym_,
    ACTIONS(603), 1,
      anon_sym_COLON,
    STATE(101), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [3725] = 4,
    ACTIONS(601), 1,
      anon_sym_,
    ACTIONS(605), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [3738] = 4,
    ACTIONS(601), 1,
      anon_sym_,
    ACTIONS(607), 1,
      anon_sym_COLON,
    STATE(95), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [3751] = 4,
    ACTIONS(325), 1,
      sym__word,
    ACTIONS(609), 1,
      anon_sym_,
    ACTIONS(611), 1,
      sym__dash,
    STATE(203), 1,
      aux_sym_attr_value_repeat1,
  [3764] = 3,
    STATE(126), 1,
      sym__connection_attribute,
    STATE(166), 1,
      sym__connection_attr_key,
    ACTIONS(613), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
  [3775] = 1,
    ACTIONS(615), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3782] = 1,
    ACTIONS(617), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3789] = 4,
    ACTIONS(410), 1,
      sym__word,
    ACTIONS(619), 1,
      anon_sym_,
    ACTIONS(621), 1,
      sym__dash,
    STATE(196), 1,
      aux_sym_attr_value_repeat1,
  [3802] = 3,
    ACTIONS(623), 1,
      sym__dash,
    STATE(178), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(576), 2,
      anon_sym_,
      sym__word,
  [3813] = 4,
    ACTIONS(601), 1,
      anon_sym_,
    ACTIONS(626), 1,
      anon_sym_COLON,
    STATE(92), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [3826] = 1,
    ACTIONS(628), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3833] = 4,
    ACTIONS(601), 1,
      anon_sym_,
    ACTIONS(630), 1,
      anon_sym_COLON,
    STATE(105), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [3846] = 4,
    ACTIONS(601), 1,
      anon_sym_,
    ACTIONS(632), 1,
      anon_sym_COLON,
    STATE(91), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [3859] = 1,
    ACTIONS(634), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3866] = 3,
    ACTIONS(573), 1,
      sym__dash,
    STATE(149), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(569), 2,
      anon_sym_,
      sym__word,
  [3877] = 1,
    ACTIONS(440), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [3884] = 4,
    ACTIONS(636), 1,
      anon_sym_,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym__style_attr_block,
    STATE(198), 1,
      aux_sym_attr_value_repeat1,
  [3897] = 1,
    ACTIONS(640), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3904] = 3,
    ACTIONS(554), 1,
      anon_sym_DASH_GT,
    ACTIONS(642), 1,
      sym__dash,
    STATE(182), 1,
      aux_sym_arrow_repeat1,
  [3914] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [3924] = 3,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [3934] = 3,
    ACTIONS(647), 1,
      anon_sym_BQUOTE,
    ACTIONS(649), 1,
      aux_sym_string_token3,
    STATE(185), 1,
      aux_sym_string_repeat3,
  [3944] = 3,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [3954] = 3,
    ACTIONS(652), 1,
      anon_sym_BQUOTE,
    ACTIONS(654), 1,
      aux_sym_string_token3,
    STATE(207), 1,
      aux_sym_string_repeat3,
  [3964] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [3974] = 3,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [3984] = 3,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      aux_sym_string_token2,
    STATE(190), 1,
      aux_sym_string_repeat2,
  [3994] = 3,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4004] = 1,
    ACTIONS(569), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [4010] = 3,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
    ACTIONS(663), 1,
      aux_sym_string_token2,
    STATE(209), 1,
      aux_sym_string_repeat2,
  [4020] = 3,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    ACTIONS(665), 1,
      aux_sym_string_token1,
    STATE(208), 1,
      aux_sym_string_repeat1,
  [4030] = 3,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4040] = 3,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(491), 1,
      sym__word,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4050] = 3,
    ACTIONS(578), 1,
      anon_sym_DASH_GT,
    ACTIONS(667), 1,
      sym__dash,
    STATE(182), 1,
      aux_sym_arrow_repeat1,
  [4060] = 3,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(669), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4070] = 1,
    ACTIONS(576), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [4076] = 3,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(673), 1,
      aux_sym_string_token1,
    STATE(200), 1,
      aux_sym_string_repeat1,
  [4086] = 1,
    ACTIONS(676), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [4092] = 3,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4102] = 3,
    ACTIONS(362), 1,
      sym__word,
    ACTIONS(378), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4112] = 1,
    ACTIONS(678), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [4118] = 3,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(680), 1,
      anon_sym_COLON,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4128] = 3,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(682), 1,
      anon_sym_COLON,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4138] = 3,
    ACTIONS(684), 1,
      anon_sym_BQUOTE,
    ACTIONS(686), 1,
      aux_sym_string_token3,
    STATE(185), 1,
      aux_sym_string_repeat3,
  [4148] = 3,
    ACTIONS(684), 1,
      anon_sym_SQUOTE,
    ACTIONS(688), 1,
      aux_sym_string_token1,
    STATE(200), 1,
      aux_sym_string_repeat1,
  [4158] = 3,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
    ACTIONS(690), 1,
      aux_sym_string_token2,
    STATE(190), 1,
      aux_sym_string_repeat2,
  [4168] = 1,
    ACTIONS(440), 2,
      anon_sym_,
      anon_sym_LBRACE,
  [4173] = 2,
    ACTIONS(692), 1,
      sym__word,
    STATE(76), 1,
      aux_sym_identifier_repeat1,
  [4180] = 1,
    ACTIONS(694), 2,
      anon_sym_,
      anon_sym_COLON,
  [4185] = 1,
    ACTIONS(696), 2,
      anon_sym_,
      anon_sym_COLON,
  [4190] = 2,
    ACTIONS(698), 1,
      sym__word,
    STATE(60), 1,
      aux_sym_identifier_repeat1,
  [4197] = 1,
    ACTIONS(700), 2,
      anon_sym_,
      anon_sym_COLON,
  [4202] = 1,
    ACTIONS(702), 1,
      ts_builtin_sym_end,
  [4206] = 1,
    ACTIONS(491), 1,
      sym__word,
  [4210] = 1,
    ACTIONS(362), 1,
      sym__word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 167,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 273,
  [SMALL_STATE(8)] = 326,
  [SMALL_STATE(9)] = 379,
  [SMALL_STATE(10)] = 432,
  [SMALL_STATE(11)] = 464,
  [SMALL_STATE(12)] = 507,
  [SMALL_STATE(13)] = 548,
  [SMALL_STATE(14)] = 589,
  [SMALL_STATE(15)] = 630,
  [SMALL_STATE(16)] = 671,
  [SMALL_STATE(17)] = 714,
  [SMALL_STATE(18)] = 755,
  [SMALL_STATE(19)] = 796,
  [SMALL_STATE(20)] = 832,
  [SMALL_STATE(21)] = 882,
  [SMALL_STATE(22)] = 918,
  [SMALL_STATE(23)] = 954,
  [SMALL_STATE(24)] = 990,
  [SMALL_STATE(25)] = 1026,
  [SMALL_STATE(26)] = 1073,
  [SMALL_STATE(27)] = 1112,
  [SMALL_STATE(28)] = 1145,
  [SMALL_STATE(29)] = 1184,
  [SMALL_STATE(30)] = 1212,
  [SMALL_STATE(31)] = 1238,
  [SMALL_STATE(32)] = 1276,
  [SMALL_STATE(33)] = 1304,
  [SMALL_STATE(34)] = 1342,
  [SMALL_STATE(35)] = 1370,
  [SMALL_STATE(36)] = 1408,
  [SMALL_STATE(37)] = 1436,
  [SMALL_STATE(38)] = 1474,
  [SMALL_STATE(39)] = 1503,
  [SMALL_STATE(40)] = 1524,
  [SMALL_STATE(41)] = 1545,
  [SMALL_STATE(42)] = 1566,
  [SMALL_STATE(43)] = 1587,
  [SMALL_STATE(44)] = 1608,
  [SMALL_STATE(45)] = 1628,
  [SMALL_STATE(46)] = 1670,
  [SMALL_STATE(47)] = 1712,
  [SMALL_STATE(48)] = 1748,
  [SMALL_STATE(49)] = 1774,
  [SMALL_STATE(50)] = 1799,
  [SMALL_STATE(51)] = 1824,
  [SMALL_STATE(52)] = 1849,
  [SMALL_STATE(53)] = 1874,
  [SMALL_STATE(54)] = 1910,
  [SMALL_STATE(55)] = 1928,
  [SMALL_STATE(56)] = 1964,
  [SMALL_STATE(57)] = 1982,
  [SMALL_STATE(58)] = 2005,
  [SMALL_STATE(59)] = 2026,
  [SMALL_STATE(60)] = 2049,
  [SMALL_STATE(61)] = 2070,
  [SMALL_STATE(62)] = 2091,
  [SMALL_STATE(63)] = 2107,
  [SMALL_STATE(64)] = 2125,
  [SMALL_STATE(65)] = 2141,
  [SMALL_STATE(66)] = 2159,
  [SMALL_STATE(67)] = 2187,
  [SMALL_STATE(68)] = 2216,
  [SMALL_STATE(69)] = 2231,
  [SMALL_STATE(70)] = 2246,
  [SMALL_STATE(71)] = 2275,
  [SMALL_STATE(72)] = 2304,
  [SMALL_STATE(73)] = 2319,
  [SMALL_STATE(74)] = 2334,
  [SMALL_STATE(75)] = 2349,
  [SMALL_STATE(76)] = 2363,
  [SMALL_STATE(77)] = 2381,
  [SMALL_STATE(78)] = 2399,
  [SMALL_STATE(79)] = 2413,
  [SMALL_STATE(80)] = 2433,
  [SMALL_STATE(81)] = 2459,
  [SMALL_STATE(82)] = 2473,
  [SMALL_STATE(83)] = 2487,
  [SMALL_STATE(84)] = 2509,
  [SMALL_STATE(85)] = 2523,
  [SMALL_STATE(86)] = 2537,
  [SMALL_STATE(87)] = 2553,
  [SMALL_STATE(88)] = 2567,
  [SMALL_STATE(89)] = 2581,
  [SMALL_STATE(90)] = 2601,
  [SMALL_STATE(91)] = 2623,
  [SMALL_STATE(92)] = 2648,
  [SMALL_STATE(93)] = 2673,
  [SMALL_STATE(94)] = 2698,
  [SMALL_STATE(95)] = 2717,
  [SMALL_STATE(96)] = 2742,
  [SMALL_STATE(97)] = 2761,
  [SMALL_STATE(98)] = 2780,
  [SMALL_STATE(99)] = 2799,
  [SMALL_STATE(100)] = 2810,
  [SMALL_STATE(101)] = 2829,
  [SMALL_STATE(102)] = 2854,
  [SMALL_STATE(103)] = 2865,
  [SMALL_STATE(104)] = 2890,
  [SMALL_STATE(105)] = 2909,
  [SMALL_STATE(106)] = 2934,
  [SMALL_STATE(107)] = 2953,
  [SMALL_STATE(108)] = 2972,
  [SMALL_STATE(109)] = 2990,
  [SMALL_STATE(110)] = 3008,
  [SMALL_STATE(111)] = 3020,
  [SMALL_STATE(112)] = 3032,
  [SMALL_STATE(113)] = 3052,
  [SMALL_STATE(114)] = 3070,
  [SMALL_STATE(115)] = 3086,
  [SMALL_STATE(116)] = 3108,
  [SMALL_STATE(117)] = 3126,
  [SMALL_STATE(118)] = 3144,
  [SMALL_STATE(119)] = 3160,
  [SMALL_STATE(120)] = 3176,
  [SMALL_STATE(121)] = 3194,
  [SMALL_STATE(122)] = 3210,
  [SMALL_STATE(123)] = 3230,
  [SMALL_STATE(124)] = 3248,
  [SMALL_STATE(125)] = 3262,
  [SMALL_STATE(126)] = 3278,
  [SMALL_STATE(127)] = 3294,
  [SMALL_STATE(128)] = 3312,
  [SMALL_STATE(129)] = 3328,
  [SMALL_STATE(130)] = 3346,
  [SMALL_STATE(131)] = 3364,
  [SMALL_STATE(132)] = 3376,
  [SMALL_STATE(133)] = 3385,
  [SMALL_STATE(134)] = 3400,
  [SMALL_STATE(135)] = 3409,
  [SMALL_STATE(136)] = 3428,
  [SMALL_STATE(137)] = 3447,
  [SMALL_STATE(138)] = 3466,
  [SMALL_STATE(139)] = 3475,
  [SMALL_STATE(140)] = 3490,
  [SMALL_STATE(141)] = 3505,
  [SMALL_STATE(142)] = 3513,
  [SMALL_STATE(143)] = 3521,
  [SMALL_STATE(144)] = 3529,
  [SMALL_STATE(145)] = 3539,
  [SMALL_STATE(146)] = 3547,
  [SMALL_STATE(147)] = 3555,
  [SMALL_STATE(148)] = 3563,
  [SMALL_STATE(149)] = 3571,
  [SMALL_STATE(150)] = 3583,
  [SMALL_STATE(151)] = 3591,
  [SMALL_STATE(152)] = 3599,
  [SMALL_STATE(153)] = 3607,
  [SMALL_STATE(154)] = 3615,
  [SMALL_STATE(155)] = 3623,
  [SMALL_STATE(156)] = 3637,
  [SMALL_STATE(157)] = 3651,
  [SMALL_STATE(158)] = 3667,
  [SMALL_STATE(159)] = 3675,
  [SMALL_STATE(160)] = 3683,
  [SMALL_STATE(161)] = 3691,
  [SMALL_STATE(162)] = 3698,
  [SMALL_STATE(163)] = 3705,
  [SMALL_STATE(164)] = 3712,
  [SMALL_STATE(165)] = 3725,
  [SMALL_STATE(166)] = 3738,
  [SMALL_STATE(167)] = 3751,
  [SMALL_STATE(168)] = 3764,
  [SMALL_STATE(169)] = 3775,
  [SMALL_STATE(170)] = 3782,
  [SMALL_STATE(171)] = 3789,
  [SMALL_STATE(172)] = 3802,
  [SMALL_STATE(173)] = 3813,
  [SMALL_STATE(174)] = 3826,
  [SMALL_STATE(175)] = 3833,
  [SMALL_STATE(176)] = 3846,
  [SMALL_STATE(177)] = 3859,
  [SMALL_STATE(178)] = 3866,
  [SMALL_STATE(179)] = 3877,
  [SMALL_STATE(180)] = 3884,
  [SMALL_STATE(181)] = 3897,
  [SMALL_STATE(182)] = 3904,
  [SMALL_STATE(183)] = 3914,
  [SMALL_STATE(184)] = 3924,
  [SMALL_STATE(185)] = 3934,
  [SMALL_STATE(186)] = 3944,
  [SMALL_STATE(187)] = 3954,
  [SMALL_STATE(188)] = 3964,
  [SMALL_STATE(189)] = 3974,
  [SMALL_STATE(190)] = 3984,
  [SMALL_STATE(191)] = 3994,
  [SMALL_STATE(192)] = 4004,
  [SMALL_STATE(193)] = 4010,
  [SMALL_STATE(194)] = 4020,
  [SMALL_STATE(195)] = 4030,
  [SMALL_STATE(196)] = 4040,
  [SMALL_STATE(197)] = 4050,
  [SMALL_STATE(198)] = 4060,
  [SMALL_STATE(199)] = 4070,
  [SMALL_STATE(200)] = 4076,
  [SMALL_STATE(201)] = 4086,
  [SMALL_STATE(202)] = 4092,
  [SMALL_STATE(203)] = 4102,
  [SMALL_STATE(204)] = 4112,
  [SMALL_STATE(205)] = 4118,
  [SMALL_STATE(206)] = 4128,
  [SMALL_STATE(207)] = 4138,
  [SMALL_STATE(208)] = 4148,
  [SMALL_STATE(209)] = 4158,
  [SMALL_STATE(210)] = 4168,
  [SMALL_STATE(211)] = 4173,
  [SMALL_STATE(212)] = 4180,
  [SMALL_STATE(213)] = 4185,
  [SMALL_STATE(214)] = 4190,
  [SMALL_STATE(215)] = 4197,
  [SMALL_STATE(216)] = 4202,
  [SMALL_STATE(217)] = 4206,
  [SMALL_STATE(218)] = 4210,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(57),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(80),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(157),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(213),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(214),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(9),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(27),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(212),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(212),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(150),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(212),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(212),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(40),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(160),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(186),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(147),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attr_block_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(30),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(191),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(153),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(183),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(160),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(57),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(169),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(214),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(44),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(189),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(150),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(170),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emptyline, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emptyline, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__emptyline, 1), REDUCE(sym__emptyline, 2),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__emptyline, 1), REDUCE(sym__emptyline, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(93),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(172),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(156),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(199),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(197),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(202),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(170),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(195),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(161),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(188),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(169),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(184),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(181),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(203),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(63),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(72),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2), SHIFT(203),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 2), SHIFT(65),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 2), SHIFT(68),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(167),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__identifier, 1), REDUCE(sym__identifier, 2),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__identifier, 1), REDUCE(sym__identifier, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 6),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 6),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2), SHIFT(196),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 5),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(171),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(196),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(122),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(133),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3), REDUCE(sym__inner_style_attribute, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 6),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(149),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 5),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 7),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 8),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 2), SHIFT(149),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 1), SHIFT(155),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 5),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 1), SHIFT(178),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 8),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attribute, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 7),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(182),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(185),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(190),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(200),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arrow, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attr_key, 1),
  [702] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
