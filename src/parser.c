#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 1
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym__identifier = 1,
  anon_sym_ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_PIPE = 5,
  anon_sym_PIPE_BQUOTE = 6,
  anon_sym_BQUOTE_PIPE = 7,
  sym_language = 8,
  anon_sym_direction = 9,
  anon_sym_shape = 10,
  anon_sym_label = 11,
  anon_sym_constraint = 12,
  anon_sym_icon = 13,
  anon_sym_style = 14,
  anon_sym_width = 15,
  anon_sym_height = 16,
  anon_sym_3d = 17,
  anon_sym_opacity = 18,
  anon_sym_fill = 19,
  anon_sym_stroke = 20,
  anon_sym_stroke_DASHwidth = 21,
  anon_sym_stroke_DASHdash = 22,
  anon_sym_border_DASHradius = 23,
  anon_sym_font_DASHcolor = 24,
  anon_sym_shadow = 25,
  anon_sym_multiple = 26,
  anon_sym_animated = 27,
  anon_sym_link = 28,
  sym__text_attr_key = 29,
  anon_sym_source_DASHarrowhead = 30,
  anon_sym_target_DASHarrowhead = 31,
  sym__dash = 32,
  anon_sym_COLON = 33,
  sym_arrow = 34,
  sym_dot = 35,
  sym__unquoted_string = 36,
  anon_sym_SQUOTE = 37,
  aux_sym_string_token1 = 38,
  anon_sym_DQUOTE = 39,
  aux_sym_string_token2 = 40,
  anon_sym_BQUOTE = 41,
  aux_sym_string_token3 = 42,
  sym_line_comment = 43,
  sym__eol = 44,
  anon_sym_SEMI = 45,
  sym__text_block_raw = 46,
  sym_source_file = 47,
  sym__root_definition = 48,
  sym_connection = 49,
  sym__connection_path = 50,
  sym__connection_block = 51,
  sym__connection_block_definition = 52,
  sym_container = 53,
  sym__container_block = 54,
  sym__container_block_definition = 55,
  sym_shape = 56,
  sym_shape_key = 57,
  sym_text_block = 58,
  sym__text_block_definition = 59,
  sym__root_attribute = 60,
  sym__root_attr_key = 61,
  sym__shape_attribute = 62,
  sym__base_shape_attribute = 63,
  sym__shape_attr_key = 64,
  sym__style_attribute = 65,
  sym__style_attribute_block = 66,
  sym__inner_style_attribute = 67,
  sym__style_attr_key = 68,
  sym__common_style_attr_key = 69,
  sym__connection_attribute = 70,
  sym__connection_arrowhead_attribute = 71,
  sym__connection_arrowhead_attr_key = 72,
  sym_label = 73,
  sym_attr_value = 74,
  sym__colon = 75,
  sym_string = 76,
  sym__end = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym_connection_repeat1 = 79,
  aux_sym__connection_path_repeat1 = 80,
  aux_sym__connection_block_repeat1 = 81,
  aux_sym__container_block_repeat1 = 82,
  aux_sym__style_attribute_block_repeat1 = 83,
  aux_sym_string_repeat1 = 84,
  aux_sym_string_repeat2 = 85,
  aux_sym_string_repeat3 = 86,
  alias_sym_container_key = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_BQUOTE] = "|`",
  [anon_sym_BQUOTE_PIPE] = "`|",
  [sym_language] = "language",
  [anon_sym_direction] = "direction",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_style] = "attr_key",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_3d] = "3d",
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
  [anon_sym_link] = "link",
  [sym__text_attr_key] = "reserved",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [sym__dash] = "_dash",
  [anon_sym_COLON] = ":",
  [sym_arrow] = "arrow",
  [sym_dot] = "dot",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_string_token3] = "string_token3",
  [sym_line_comment] = "line_comment",
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym__text_block_raw] = "raw_text",
  [sym_source_file] = "source_file",
  [sym__root_definition] = "_root_definition",
  [sym_connection] = "connection",
  [sym__connection_path] = "_connection_path",
  [sym__connection_block] = "block",
  [sym__connection_block_definition] = "_connection_block_definition",
  [sym_container] = "container",
  [sym__container_block] = "block",
  [sym__container_block_definition] = "_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym_text_block] = "text_block",
  [sym__text_block_definition] = "_text_block_definition",
  [sym__root_attribute] = "attribute",
  [sym__root_attr_key] = "attr_key",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__base_shape_attribute] = "attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attribute] = "attribute",
  [sym__style_attribute_block] = "block",
  [sym__inner_style_attribute] = "attribute",
  [sym__style_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__connection_arrowhead_attribute] = "attribute",
  [sym__connection_arrowhead_attr_key] = "attr_key",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__colon] = "_colon",
  [sym_string] = "string",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
  [aux_sym__connection_block_repeat1] = "_connection_block_repeat1",
  [aux_sym__container_block_repeat1] = "_container_block_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
  [alias_sym_container_key] = "container_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE_BQUOTE] = anon_sym_PIPE_BQUOTE,
  [anon_sym_BQUOTE_PIPE] = anon_sym_BQUOTE_PIPE,
  [sym_language] = sym_language,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_style] = anon_sym_style,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_3d] = anon_sym_3d,
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
  [anon_sym_link] = anon_sym_link,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [sym__dash] = sym__dash,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_arrow] = sym_arrow,
  [sym_dot] = sym_dot,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_line_comment] = sym_line_comment,
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__text_block_raw] = sym__text_block_raw,
  [sym_source_file] = sym_source_file,
  [sym__root_definition] = sym__root_definition,
  [sym_connection] = sym_connection,
  [sym__connection_path] = sym__connection_path,
  [sym__connection_block] = sym__connection_block,
  [sym__connection_block_definition] = sym__connection_block_definition,
  [sym_container] = sym_container,
  [sym__container_block] = sym__connection_block,
  [sym__container_block_definition] = sym__container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym_text_block] = sym_text_block,
  [sym__text_block_definition] = sym__text_block_definition,
  [sym__root_attribute] = sym__root_attribute,
  [sym__root_attr_key] = anon_sym_style,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__base_shape_attribute] = sym__root_attribute,
  [sym__shape_attr_key] = anon_sym_style,
  [sym__style_attribute] = sym__root_attribute,
  [sym__style_attribute_block] = sym__connection_block,
  [sym__inner_style_attribute] = sym__root_attribute,
  [sym__style_attr_key] = anon_sym_style,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__connection_arrowhead_attribute] = sym__root_attribute,
  [sym__connection_arrowhead_attr_key] = anon_sym_style,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__colon] = sym__colon,
  [sym_string] = sym_string,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
  [aux_sym__connection_block_repeat1] = aux_sym__connection_block_repeat1,
  [aux_sym__container_block_repeat1] = aux_sym__container_block_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
  [alias_sym_container_key] = alias_sym_container_key,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_direction] = {
    .visible = true,
    .named = false,
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
  [anon_sym_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3d] = {
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
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [sym__text_attr_key] = {
    .visible = true,
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
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_arrow] = {
    .visible = true,
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
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__root_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_path] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_block] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_container] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_shape_key] = {
    .visible = true,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym__text_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__root_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__base_shape_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute_block] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__common_style_attr_key] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_arrowhead_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_arrowhead_attr_key] = {
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
  [sym__colon] = {
    .visible = false,
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
  [aux_sym__connection_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__connection_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__container_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__style_attribute_block_repeat1] = {
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
  [alias_sym_container_key] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym__text_attr_key,
  },
  [2] = {
    [0] = alias_sym_container_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_shape_key, 2,
    sym_shape_key,
    alias_sym_container_key,
  sym__common_style_attr_key, 2,
    sym__common_style_attr_key,
    sym__text_attr_key,
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
  [15] = 12,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 17,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 26,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 32,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 30,
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
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 96,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
};

static inline bool anon_sym__character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym__unquoted_string_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? (c >= 11 && c <= '\f')
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool aux_sym_string_token2_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\f')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '}') ADVANCE(99);
      if (anon_sym__character_set_1(lookahead)) SKIP(93)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '}') ADVANCE(99);
      if (anon_sym__character_set_1(lookahead)) SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '}') ADVANCE(99);
      if (anon_sym__character_set_1(lookahead)) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '{') ADVANCE(98);
      if (anon_sym__character_set_1(lookahead)) SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '{') ADVANCE(98);
      if (anon_sym__character_set_1(lookahead)) SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(97);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(97);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(97);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(97);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead == '}') ADVANCE(99);
      if (anon_sym__character_set_1(lookahead)) SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(216);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(209);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '`') ADVANCE(217);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '>') ADVANCE(200);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '>') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(194);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'w') ADVANCE(188);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 89:
      if (lookahead == '|') ADVANCE(170);
      END_STATE();
    case 90:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 93:
      if (eof) ADVANCE(95);
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == ';') ADVANCE(224);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '}') ADVANCE(99);
      if (anon_sym__character_set_1(lookahead)) SKIP(93)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 's') ADVANCE(112);
      if (anon_sym__character_set_1(lookahead)) SKIP(94)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'k') ADVANCE(195);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'k') ADVANCE(108);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(189);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'h') ADVANCE(183);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'h') ADVANCE(181);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '`') ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '`') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PIPE_BQUOTE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PIPE_BQUOTE);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BQUOTE_PIPE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_3d);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_animated);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '>') ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '>') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '>') ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(97);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(97);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead == '|') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(212);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(216);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '#') ADVANCE(220);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 224:
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
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 94},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 94},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 94},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1, .external_lex_state = 1},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1, .external_lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
};

enum {
  ts_external_token__text_block_raw = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_raw] = sym__text_block_raw,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_raw] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_BQUOTE] = ACTIONS(1),
    [sym_language] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_3d] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_stroke_DASHwidth] = ACTIONS(1),
    [anon_sym_stroke_DASHdash] = ACTIONS(1),
    [anon_sym_border_DASHradius] = ACTIONS(1),
    [anon_sym_font_DASHcolor] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [anon_sym_source_DASHarrowhead] = ACTIONS(1),
    [anon_sym_target_DASHarrowhead] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_raw] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(108),
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(55),
    [sym__connection_path] = STATE(104),
    [sym_container] = STATE(55),
    [sym_shape] = STATE(55),
    [sym_shape_key] = STATE(26),
    [sym__root_attribute] = STATE(55),
    [sym__root_attr_key] = STATE(92),
    [sym__common_style_attr_key] = STATE(113),
    [sym_string] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
    [anon_sym_style] = ACTIONS(11),
    [anon_sym_opacity] = ACTIONS(13),
    [anon_sym_fill] = ACTIONS(13),
    [anon_sym_stroke] = ACTIONS(13),
    [anon_sym_stroke_DASHwidth] = ACTIONS(13),
    [anon_sym_stroke_DASHdash] = ACTIONS(13),
    [anon_sym_border_DASHradius] = ACTIONS(13),
    [anon_sym_font_DASHcolor] = ACTIONS(13),
    [anon_sym_shadow] = ACTIONS(13),
    [anon_sym_multiple] = ACTIONS(13),
    [anon_sym_animated] = ACTIONS(13),
    [anon_sym_link] = ACTIONS(13),
    [sym__text_attr_key] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(28), 1,
      anon_sym_direction,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(46), 1,
      sym__eol,
    STATE(26), 1,
      sym_shape_key,
    STATE(33), 1,
      sym_string,
    STATE(41), 1,
      aux_sym__connection_path_repeat1,
    STATE(92), 1,
      sym__root_attr_key,
    STATE(104), 1,
      sym__connection_path,
    STATE(113), 1,
      sym__common_style_attr_key,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(55), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(31), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(34), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [74] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_direction,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym__eol,
    STATE(26), 1,
      sym_shape_key,
    STATE(33), 1,
      sym_string,
    STATE(41), 1,
      aux_sym__connection_path_repeat1,
    STATE(92), 1,
      sym__root_attr_key,
    STATE(104), 1,
      sym__connection_path,
    STATE(113), 1,
      sym__common_style_attr_key,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(55), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(11), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(13), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [148] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(59), 1,
      sym__eol,
    STATE(31), 1,
      sym_shape_key,
    STATE(33), 1,
      sym_string,
    STATE(41), 1,
      aux_sym__connection_path_repeat1,
    STATE(96), 1,
      sym__connection_path,
    STATE(103), 1,
      sym__shape_attr_key,
    STATE(5), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    ACTIONS(55), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(70), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [208] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      sym__identifier,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_style,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      anon_sym_BQUOTE,
    ACTIONS(81), 1,
      sym__eol,
    STATE(31), 1,
      sym_shape_key,
    STATE(33), 1,
      sym_string,
    STATE(41), 1,
      aux_sym__connection_path_repeat1,
    STATE(96), 1,
      sym__connection_path,
    STATE(103), 1,
      sym__shape_attr_key,
    STATE(5), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    ACTIONS(66), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(70), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [268] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym__eol,
    STATE(31), 1,
      sym_shape_key,
    STATE(33), 1,
      sym_string,
    STATE(41), 1,
      aux_sym__connection_path_repeat1,
    STATE(96), 1,
      sym__connection_path,
    STATE(103), 1,
      sym__shape_attr_key,
    STATE(4), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    ACTIONS(55), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(70), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [328] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__eol,
    ACTIONS(90), 19,
      sym__identifier,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
      sym__text_attr_key,
  [360] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      anon_sym_3d,
    ACTIONS(98), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(81), 1,
      sym__inner_style_attribute,
    STATE(95), 1,
      sym__style_attr_key,
    STATE(105), 1,
      sym__common_style_attr_key,
    ACTIONS(96), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [400] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(94), 1,
      anon_sym_3d,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      sym__eol,
    STATE(8), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(81), 1,
      sym__inner_style_attribute,
    STATE(95), 1,
      sym__style_attr_key,
    STATE(105), 1,
      sym__common_style_attr_key,
    ACTIONS(96), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [440] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      anon_sym_3d,
    ACTIONS(112), 1,
      anon_sym_stroke,
    ACTIONS(115), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(81), 1,
      sym__inner_style_attribute,
    STATE(95), 1,
      sym__style_attr_key,
    STATE(105), 1,
      sym__common_style_attr_key,
    ACTIONS(109), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [480] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(94), 1,
      anon_sym_3d,
    STATE(58), 1,
      sym__inner_style_attribute,
    STATE(95), 1,
      sym__style_attr_key,
    STATE(105), 1,
      sym__common_style_attr_key,
    ACTIONS(96), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [511] = 13,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(126), 1,
      sym__unquoted_string,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      sym_line_comment,
    STATE(52), 1,
      sym_label,
    STATE(56), 1,
      sym_string,
    STATE(66), 1,
      sym_text_block,
    STATE(67), 1,
      sym__container_block,
    ACTIONS(118), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [553] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_stroke,
    ACTIONS(104), 13,
      anon_sym_RBRACE,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
      sym__eol,
  [575] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 5,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__eol,
    ACTIONS(138), 8,
      sym__identifier,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
  [596] = 13,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(126), 1,
      sym__unquoted_string,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      sym_line_comment,
    STATE(52), 1,
      sym_label,
    STATE(56), 1,
      sym_string,
    STATE(66), 1,
      sym_text_block,
    STATE(67), 1,
      sym__container_block,
    ACTIONS(118), 2,
      sym__eol,
      anon_sym_SEMI,
  [637] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      anon_sym_style,
    ACTIONS(148), 1,
      sym__eol,
    STATE(40), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(146), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(19), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(62), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [666] = 10,
    ACTIONS(126), 1,
      sym__unquoted_string,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_label,
    STATE(56), 1,
      sym_string,
    STATE(65), 1,
      sym__connection_block,
    ACTIONS(150), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [699] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_style,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      sym__eol,
    STATE(40), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(146), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(16), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(62), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [728] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_style,
    ACTIONS(166), 1,
      sym__eol,
    STATE(40), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(163), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(19), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(62), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [757] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(169), 1,
      sym__identifier,
    STATE(30), 1,
      sym_shape_key,
    STATE(33), 1,
      sym_string,
    STATE(66), 1,
      sym__style_attribute,
    STATE(67), 2,
      sym_container,
      sym_shape,
  [789] = 10,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      sym__unquoted_string,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      sym_line_comment,
    STATE(54), 1,
      sym_label,
    STATE(56), 1,
      sym_string,
    STATE(94), 1,
      sym__container_block,
    ACTIONS(171), 2,
      sym__eol,
      anon_sym_SEMI,
  [821] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(169), 1,
      sym__identifier,
    STATE(33), 1,
      sym_string,
    STATE(43), 1,
      sym_shape_key,
    STATE(66), 1,
      sym__style_attribute,
    STATE(67), 2,
      sym_container,
      sym_shape,
  [853] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(173), 1,
      sym__identifier,
    ACTIONS(176), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    STATE(33), 1,
      sym_string,
    STATE(43), 1,
      sym_shape_key,
    STATE(66), 1,
      sym__style_attribute,
    STATE(67), 2,
      sym_container,
      sym_shape,
  [885] = 10,
    ACTIONS(126), 1,
      sym__unquoted_string,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_label,
    STATE(56), 1,
      sym_string,
    STATE(65), 1,
      sym__connection_block,
    ACTIONS(150), 2,
      sym__eol,
      anon_sym_SEMI,
  [917] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(173), 1,
      sym__identifier,
    ACTIONS(176), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    STATE(30), 1,
      sym_shape_key,
    STATE(33), 1,
      sym_string,
    STATE(66), 1,
      sym__style_attribute,
    STATE(67), 2,
      sym_container,
      sym_shape,
  [949] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      sym_arrow,
    ACTIONS(193), 1,
      sym_dot,
    STATE(12), 1,
      sym__colon,
    STATE(87), 1,
      sym__container_block,
    ACTIONS(185), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [976] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(201), 1,
      sym_arrow,
    STATE(17), 1,
      sym__colon,
    STATE(42), 1,
      aux_sym_connection_repeat1,
    STATE(82), 1,
      sym__connection_block,
    ACTIONS(195), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1003] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      sym_arrow,
    ACTIONS(203), 1,
      anon_sym_COLON,
    STATE(24), 1,
      sym__colon,
    STATE(42), 1,
      aux_sym_connection_repeat1,
    STATE(82), 1,
      sym__connection_block,
    ACTIONS(195), 2,
      sym__eol,
      anon_sym_SEMI,
  [1029] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(205), 1,
      sym__identifier,
    STATE(33), 1,
      sym_string,
    STATE(38), 1,
      sym_shape_key,
    STATE(41), 1,
      aux_sym__connection_path_repeat1,
    STATE(48), 1,
      sym__connection_path,
  [1057] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(207), 1,
      sym_dot,
    STATE(12), 1,
      sym__colon,
    STATE(87), 1,
      sym__container_block,
    ACTIONS(185), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1081] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      sym_arrow,
    ACTIONS(209), 1,
      anon_sym_COLON,
    ACTIONS(211), 1,
      sym_dot,
    STATE(15), 1,
      sym__colon,
    STATE(87), 1,
      sym__container_block,
    ACTIONS(185), 2,
      sym__eol,
      anon_sym_SEMI,
  [1107] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      sym__dash,
    ACTIONS(213), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1123] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1136] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1149] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      sym__identifier,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      anon_sym_BQUOTE,
    STATE(33), 1,
      sym_string,
    STATE(35), 1,
      aux_sym__connection_path_repeat1,
    STATE(111), 1,
      sym_shape_key,
  [1174] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1187] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1200] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 1,
      sym_dot,
    ACTIONS(191), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1215] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym__dash,
    ACTIONS(213), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1230] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(241), 1,
      sym_dot,
    STATE(21), 1,
      sym__colon,
    STATE(98), 1,
      sym__container_block,
    ACTIONS(243), 2,
      sym__eol,
      anon_sym_SEMI,
  [1253] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(205), 1,
      sym__identifier,
    STATE(33), 1,
      sym_string,
    STATE(35), 1,
      aux_sym__connection_path_repeat1,
    STATE(44), 1,
      sym_shape_key,
  [1278] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(247), 1,
      sym_arrow,
    STATE(42), 1,
      aux_sym_connection_repeat1,
    ACTIONS(245), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [1295] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      sym_dot,
    STATE(15), 1,
      sym__colon,
    STATE(87), 1,
      sym__container_block,
    ACTIONS(185), 2,
      sym__eol,
      anon_sym_SEMI,
  [1318] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 1,
      sym_dot,
    ACTIONS(252), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1333] = 7,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      sym__unquoted_string,
    STATE(57), 1,
      sym_string,
    STATE(93), 1,
      sym_attr_value,
  [1355] = 7,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      sym__unquoted_string,
    STATE(57), 1,
      sym_string,
    STATE(61), 1,
      sym_attr_value,
  [1377] = 7,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      sym__unquoted_string,
    STATE(57), 1,
      sym_string,
    STATE(77), 1,
      sym_attr_value,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(245), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1411] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym__connection_block,
    ACTIONS(256), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1426] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [1437] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1448] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym__container_block,
    ACTIONS(262), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1463] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 4,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1473] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym__container_block,
    ACTIONS(266), 2,
      sym__eol,
      anon_sym_SEMI,
  [1487] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(7), 1,
      sym__end,
    ACTIONS(268), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1509] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1527] = 4,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      aux_sym_string_token1,
    STATE(73), 1,
      aux_sym_string_repeat1,
  [1540] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1558] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(50), 1,
      sym__end,
    ACTIONS(284), 2,
      sym__eol,
      anon_sym_SEMI,
  [1569] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      sym_language,
    ACTIONS(288), 1,
      sym__eol,
    STATE(114), 1,
      sym__text_block_definition,
  [1582] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      sym_language,
    ACTIONS(288), 1,
      sym__eol,
    STATE(110), 1,
      sym__text_block_definition,
  [1595] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1613] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1622] = 4,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      aux_sym_string_token2,
    STATE(76), 1,
      aux_sym_string_repeat2,
  [1635] = 4,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    ACTIONS(294), 1,
      aux_sym_string_token3,
    STATE(80), 1,
      aux_sym_string_repeat3,
  [1648] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(14), 1,
      sym__end,
    ACTIONS(296), 2,
      sym__eol,
      anon_sym_SEMI,
  [1659] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1668] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_COLON,
    ACTIONS(302), 1,
      sym_dot,
    STATE(102), 1,
      sym__colon,
  [1681] = 4,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
    ACTIONS(306), 1,
      aux_sym_string_token1,
    STATE(88), 1,
      aux_sym_string_repeat1,
  [1694] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1703] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 1,
      sym__text_block_raw,
    ACTIONS(310), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [1714] = 4,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym_string_token2,
    STATE(89), 1,
      aux_sym_string_repeat2,
  [1727] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1736] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1745] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1754] = 4,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_BQUOTE,
    ACTIONS(322), 1,
      aux_sym_string_token3,
    STATE(84), 1,
      aux_sym_string_repeat3,
  [1767] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(13), 1,
      sym__end,
    ACTIONS(324), 2,
      sym__eol,
      anon_sym_SEMI,
  [1778] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(326), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1787] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1796] = 4,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      anon_sym_BQUOTE,
    ACTIONS(332), 1,
      aux_sym_string_token3,
    STATE(84), 1,
      aux_sym_string_repeat3,
  [1809] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1818] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1836] = 4,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(343), 1,
      aux_sym_string_token1,
    STATE(88), 1,
      aux_sym_string_repeat1,
  [1849] = 4,
    ACTIONS(134), 1,
      sym_line_comment,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      aux_sym_string_token2,
    STATE(89), 1,
      aux_sym_string_repeat2,
  [1862] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(351), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1871] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 1,
      sym__text_block_raw,
    ACTIONS(353), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [1882] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 1,
      anon_sym_COLON,
    STATE(46), 1,
      sym__colon,
  [1892] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 2,
      sym__eol,
      anon_sym_SEMI,
  [1900] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 2,
      sym__eol,
      anon_sym_SEMI,
  [1908] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(361), 1,
      anon_sym_COLON,
    STATE(47), 1,
      sym__colon,
  [1918] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      sym_arrow,
    STATE(28), 1,
      aux_sym_connection_repeat1,
  [1928] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(353), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [1936] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 2,
      sym__eol,
      anon_sym_SEMI,
  [1944] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_style,
    STATE(94), 1,
      sym__style_attribute,
  [1954] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [1962] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 2,
      sym__eol,
      anon_sym_SEMI,
  [1970] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym__style_attribute_block,
  [1980] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(371), 1,
      anon_sym_COLON,
    STATE(45), 1,
      sym__colon,
  [1990] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      sym_arrow,
    STATE(27), 1,
      aux_sym_connection_repeat1,
  [2000] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_COLON,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(375), 1,
      anon_sym_COLON,
  [2014] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 1,
      anon_sym_COLON,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
  [2028] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 1,
      sym__eol,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(383), 1,
      anon_sym_PIPE,
  [2042] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 1,
      sym_dot,
  [2049] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(385), 1,
      anon_sym_COLON,
  [2056] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      anon_sym_COLON,
  [2063] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(383), 1,
      anon_sym_BQUOTE_PIPE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 208,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 328,
  [SMALL_STATE(8)] = 360,
  [SMALL_STATE(9)] = 400,
  [SMALL_STATE(10)] = 440,
  [SMALL_STATE(11)] = 480,
  [SMALL_STATE(12)] = 511,
  [SMALL_STATE(13)] = 553,
  [SMALL_STATE(14)] = 575,
  [SMALL_STATE(15)] = 596,
  [SMALL_STATE(16)] = 637,
  [SMALL_STATE(17)] = 666,
  [SMALL_STATE(18)] = 699,
  [SMALL_STATE(19)] = 728,
  [SMALL_STATE(20)] = 757,
  [SMALL_STATE(21)] = 789,
  [SMALL_STATE(22)] = 821,
  [SMALL_STATE(23)] = 853,
  [SMALL_STATE(24)] = 885,
  [SMALL_STATE(25)] = 917,
  [SMALL_STATE(26)] = 949,
  [SMALL_STATE(27)] = 976,
  [SMALL_STATE(28)] = 1003,
  [SMALL_STATE(29)] = 1029,
  [SMALL_STATE(30)] = 1057,
  [SMALL_STATE(31)] = 1081,
  [SMALL_STATE(32)] = 1107,
  [SMALL_STATE(33)] = 1123,
  [SMALL_STATE(34)] = 1136,
  [SMALL_STATE(35)] = 1149,
  [SMALL_STATE(36)] = 1174,
  [SMALL_STATE(37)] = 1187,
  [SMALL_STATE(38)] = 1200,
  [SMALL_STATE(39)] = 1215,
  [SMALL_STATE(40)] = 1230,
  [SMALL_STATE(41)] = 1253,
  [SMALL_STATE(42)] = 1278,
  [SMALL_STATE(43)] = 1295,
  [SMALL_STATE(44)] = 1318,
  [SMALL_STATE(45)] = 1333,
  [SMALL_STATE(46)] = 1355,
  [SMALL_STATE(47)] = 1377,
  [SMALL_STATE(48)] = 1399,
  [SMALL_STATE(49)] = 1411,
  [SMALL_STATE(50)] = 1426,
  [SMALL_STATE(51)] = 1437,
  [SMALL_STATE(52)] = 1448,
  [SMALL_STATE(53)] = 1463,
  [SMALL_STATE(54)] = 1473,
  [SMALL_STATE(55)] = 1487,
  [SMALL_STATE(56)] = 1499,
  [SMALL_STATE(57)] = 1509,
  [SMALL_STATE(58)] = 1518,
  [SMALL_STATE(59)] = 1527,
  [SMALL_STATE(60)] = 1540,
  [SMALL_STATE(61)] = 1549,
  [SMALL_STATE(62)] = 1558,
  [SMALL_STATE(63)] = 1569,
  [SMALL_STATE(64)] = 1582,
  [SMALL_STATE(65)] = 1595,
  [SMALL_STATE(66)] = 1604,
  [SMALL_STATE(67)] = 1613,
  [SMALL_STATE(68)] = 1622,
  [SMALL_STATE(69)] = 1635,
  [SMALL_STATE(70)] = 1648,
  [SMALL_STATE(71)] = 1659,
  [SMALL_STATE(72)] = 1668,
  [SMALL_STATE(73)] = 1681,
  [SMALL_STATE(74)] = 1694,
  [SMALL_STATE(75)] = 1703,
  [SMALL_STATE(76)] = 1714,
  [SMALL_STATE(77)] = 1727,
  [SMALL_STATE(78)] = 1736,
  [SMALL_STATE(79)] = 1745,
  [SMALL_STATE(80)] = 1754,
  [SMALL_STATE(81)] = 1767,
  [SMALL_STATE(82)] = 1778,
  [SMALL_STATE(83)] = 1787,
  [SMALL_STATE(84)] = 1796,
  [SMALL_STATE(85)] = 1809,
  [SMALL_STATE(86)] = 1818,
  [SMALL_STATE(87)] = 1827,
  [SMALL_STATE(88)] = 1836,
  [SMALL_STATE(89)] = 1849,
  [SMALL_STATE(90)] = 1862,
  [SMALL_STATE(91)] = 1871,
  [SMALL_STATE(92)] = 1882,
  [SMALL_STATE(93)] = 1892,
  [SMALL_STATE(94)] = 1900,
  [SMALL_STATE(95)] = 1908,
  [SMALL_STATE(96)] = 1918,
  [SMALL_STATE(97)] = 1928,
  [SMALL_STATE(98)] = 1936,
  [SMALL_STATE(99)] = 1944,
  [SMALL_STATE(100)] = 1954,
  [SMALL_STATE(101)] = 1962,
  [SMALL_STATE(102)] = 1970,
  [SMALL_STATE(103)] = 1980,
  [SMALL_STATE(104)] = 1990,
  [SMALL_STATE(105)] = 2000,
  [SMALL_STATE(106)] = 2007,
  [SMALL_STATE(107)] = 2014,
  [SMALL_STATE(108)] = 2021,
  [SMALL_STATE(109)] = 2028,
  [SMALL_STATE(110)] = 2035,
  [SMALL_STATE(111)] = 2042,
  [SMALL_STATE(112)] = 2049,
  [SMALL_STATE(113)] = 2056,
  [SMALL_STATE(114)] = 2063,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(32),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(106),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(72),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(59),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(68),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(69),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(105),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(112),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(112),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(10),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__container_block_definition, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block_definition, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(72),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(51),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(19),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(39),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(59),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(68),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(69),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(39),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(59),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(68),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(69),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(29),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block_definition, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(84),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(88),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(89),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [379] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
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
