#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 1
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  aux_sym__identifier_token1 = 4,
  aux_sym__identifier_token2 = 5,
  aux_sym__identifier_token3 = 6,
  aux_sym_text_block_token1 = 7,
  sym_language = 8,
  anon_sym_direction = 9,
  anon_sym_shape = 10,
  anon_sym_label = 11,
  anon_sym_constraint = 12,
  anon_sym_icon = 13,
  anon_sym_style = 14,
  anon_sym_link = 15,
  anon_sym_tooltip = 16,
  anon_sym_width = 17,
  anon_sym_height = 18,
  anon_sym_3d = 19,
  anon_sym_opacity = 20,
  anon_sym_fill = 21,
  anon_sym_stroke = 22,
  anon_sym_stroke_DASHwidth = 23,
  anon_sym_stroke_DASHdash = 24,
  anon_sym_border_DASHradius = 25,
  anon_sym_double_DASHborder = 26,
  anon_sym_font_DASHsize = 27,
  anon_sym_font_DASHcolor = 28,
  anon_sym_shadow = 29,
  anon_sym_multiple = 30,
  anon_sym_animated = 31,
  anon_sym_italic = 32,
  anon_sym_bold = 33,
  anon_sym_underline = 34,
  sym__text_attr_key = 35,
  anon_sym_source_DASHarrowhead = 36,
  anon_sym_target_DASHarrowhead = 37,
  sym__dash = 38,
  anon_sym_COLON = 39,
  sym_arrow = 40,
  sym_dot = 41,
  aux_sym__unquoted_string_token1 = 42,
  anon_sym_SQUOTE = 43,
  anon_sym_DQUOTE = 44,
  sym__unescaped_single_string_fragment = 45,
  sym__unescaped_double_string_fragment = 46,
  sym_escape_sequence = 47,
  anon_sym_true = 48,
  anon_sym_false = 49,
  sym_integer = 50,
  sym_float = 51,
  sym_line_comment = 52,
  sym__eol = 53,
  anon_sym_SEMI = 54,
  sym__text_block_start = 55,
  sym__text_block_end = 56,
  sym__text_block_raw_text = 57,
  sym_block_comment = 58,
  sym_source_file = 59,
  sym__root_definition = 60,
  sym_connection = 61,
  sym__connection_path = 62,
  sym__connection_block = 63,
  sym_container = 64,
  sym__container_block = 65,
  sym__container_block_definition = 66,
  sym_shape = 67,
  sym_shape_key = 68,
  sym__identifier = 69,
  sym_text_block = 70,
  sym__root_attribute = 71,
  sym__root_attr_key = 72,
  sym__shape_attribute = 73,
  sym__base_shape_attribute = 74,
  sym__shape_attr_key = 75,
  sym__style_attribute = 76,
  sym__style_attribute_block = 77,
  sym__inner_style_attribute = 78,
  sym__style_attr_key = 79,
  sym__common_style_attr_key = 80,
  sym__connection_attribute = 81,
  sym__connection_arrowhead_attribute = 82,
  sym__connection_arrowhead_attr_key = 83,
  sym_label = 84,
  sym_attr_value = 85,
  sym__colon = 86,
  aux_sym__unquoted_string = 87,
  sym_string = 88,
  sym_boolean = 89,
  sym__end = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_connection_repeat1 = 92,
  aux_sym__connection_path_repeat1 = 93,
  aux_sym__connection_block_repeat1 = 94,
  aux_sym__container_block_repeat1 = 95,
  aux_sym__identifier_repeat1 = 96,
  aux_sym__style_attribute_block_repeat1 = 97,
  aux_sym_string_repeat1 = 98,
  alias_sym_container_key = 99,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [aux_sym__identifier_token3] = "_identifier_token3",
  [aux_sym_text_block_token1] = "text_block_token1",
  [sym_language] = "language",
  [anon_sym_direction] = "direction",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_style] = "attr_key",
  [anon_sym_link] = "link",
  [anon_sym_tooltip] = "tooltip",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_3d] = "3d",
  [anon_sym_opacity] = "opacity",
  [anon_sym_fill] = "fill",
  [anon_sym_stroke] = "stroke",
  [anon_sym_stroke_DASHwidth] = "stroke-width",
  [anon_sym_stroke_DASHdash] = "stroke-dash",
  [anon_sym_border_DASHradius] = "border-radius",
  [anon_sym_double_DASHborder] = "double-border",
  [anon_sym_font_DASHsize] = "font-size",
  [anon_sym_font_DASHcolor] = "font-color",
  [anon_sym_shadow] = "shadow",
  [anon_sym_multiple] = "multiple",
  [anon_sym_animated] = "animated",
  [anon_sym_italic] = "italic",
  [anon_sym_bold] = "bold",
  [anon_sym_underline] = "underline",
  [sym__text_attr_key] = "reserved",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [sym__dash] = "_dash",
  [anon_sym_COLON] = ":",
  [sym_arrow] = "arrow",
  [sym_dot] = "dot",
  [aux_sym__unquoted_string_token1] = "_unquoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym__unescaped_single_string_fragment] = "string_fragment",
  [sym__unescaped_double_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_line_comment] = "line_comment",
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym__text_block_start] = "|",
  [sym__text_block_end] = "|",
  [sym__text_block_raw_text] = "raw_text",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__root_definition] = "_root_definition",
  [sym_connection] = "connection",
  [sym__connection_path] = "_connection_path",
  [sym__connection_block] = "block",
  [sym_container] = "container",
  [sym__container_block] = "block",
  [sym__container_block_definition] = "_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__identifier] = "_identifier",
  [sym_text_block] = "text_block",
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
  [aux_sym__unquoted_string] = "_unquoted_string",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
  [aux_sym__connection_block_repeat1] = "_connection_block_repeat1",
  [aux_sym__container_block_repeat1] = "_container_block_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_container_key] = "container_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [aux_sym__identifier_token2] = aux_sym__identifier_token2,
  [aux_sym__identifier_token3] = aux_sym__identifier_token3,
  [aux_sym_text_block_token1] = aux_sym_text_block_token1,
  [sym_language] = sym_language,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_style] = anon_sym_style,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_tooltip] = anon_sym_tooltip,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_3d] = anon_sym_3d,
  [anon_sym_opacity] = anon_sym_opacity,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_stroke] = anon_sym_stroke,
  [anon_sym_stroke_DASHwidth] = anon_sym_stroke_DASHwidth,
  [anon_sym_stroke_DASHdash] = anon_sym_stroke_DASHdash,
  [anon_sym_border_DASHradius] = anon_sym_border_DASHradius,
  [anon_sym_double_DASHborder] = anon_sym_double_DASHborder,
  [anon_sym_font_DASHsize] = anon_sym_font_DASHsize,
  [anon_sym_font_DASHcolor] = anon_sym_font_DASHcolor,
  [anon_sym_shadow] = anon_sym_shadow,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_animated] = anon_sym_animated,
  [anon_sym_italic] = anon_sym_italic,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_underline] = anon_sym_underline,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [sym__dash] = sym__dash,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_arrow] = sym_arrow,
  [sym_dot] = sym_dot,
  [aux_sym__unquoted_string_token1] = aux_sym__unquoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym__unescaped_double_string_fragment] = sym__unescaped_single_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_line_comment] = sym_line_comment,
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__text_block_start] = sym__text_block_start,
  [sym__text_block_end] = sym__text_block_start,
  [sym__text_block_raw_text] = sym__text_block_raw_text,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__root_definition] = sym__root_definition,
  [sym_connection] = sym_connection,
  [sym__connection_path] = sym__connection_path,
  [sym__connection_block] = sym__connection_block,
  [sym_container] = sym_container,
  [sym__container_block] = sym__connection_block,
  [sym__container_block_definition] = sym__container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__identifier] = sym__identifier,
  [sym_text_block] = sym_text_block,
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
  [aux_sym__unquoted_string] = aux_sym__unquoted_string,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
  [aux_sym__connection_block_repeat1] = aux_sym__connection_block_repeat1,
  [aux_sym__container_block_repeat1] = aux_sym__container_block_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_container_key] = alias_sym_container_key,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_block_token1] = {
    .visible = false,
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
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tooltip] = {
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
  [anon_sym_double_DASHborder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHsize] = {
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
  [anon_sym_italic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_underline] = {
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
  [aux_sym__unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
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
  [sym__text_block_start] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_end] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
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
  [aux_sym__unquoted_string] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [aux_sym__identifier_repeat1] = {
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
  [12] = 11,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 20,
  [26] = 26,
  [27] = 26,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 22,
  [32] = 32,
  [33] = 33,
  [34] = 24,
  [35] = 23,
  [36] = 30,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 39,
  [42] = 38,
  [43] = 33,
  [44] = 38,
  [45] = 32,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 52,
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
  [65] = 55,
  [66] = 66,
  [67] = 67,
  [68] = 64,
  [69] = 50,
  [70] = 70,
  [71] = 71,
  [72] = 53,
  [73] = 52,
  [74] = 67,
  [75] = 75,
  [76] = 64,
  [77] = 75,
  [78] = 78,
  [79] = 78,
  [80] = 80,
  [81] = 81,
  [82] = 78,
  [83] = 83,
  [84] = 81,
  [85] = 78,
  [86] = 78,
  [87] = 75,
  [88] = 88,
  [89] = 89,
  [90] = 81,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 78,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
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
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 134,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 146,
  [149] = 149,
  [150] = 149,
  [151] = 151,
  [152] = 145,
  [153] = 149,
  [154] = 147,
  [155] = 155,
  [156] = 145,
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

static inline bool anon_sym__character_set_2(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? (c >= '\t' && c <= '\f')
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool aux_sym__unquoted_string_token1_character_set_1(int32_t c) {
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

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(229);
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(247);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(244);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_1(lookahead)) SKIP(226)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(290);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '3') ADVANCE(83);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '3') ADVANCE(83);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(315);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'w') ADVANCE(244);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_1(lookahead)) SKIP(25)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'w') ADVANCE(244);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_1(lookahead)) SKIP(25)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(315);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(315);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(315);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(315);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(315);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(315);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 38:
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == 's') ADVANCE(251);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(43)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(207);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(44)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == 's') ADVANCE(251);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(43)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(316);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(44)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(321);
      if (lookahead == '\\') ADVANCE(207);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(321);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(256);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(319);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(319);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(294);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(294);
      if (lookahead == '>') ADVANCE(293);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(294);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(281);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'w') ADVANCE(134);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(267);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(274);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(265);
      END_STATE();
    case 136:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(324);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 212:
      if (lookahead == 'w') ADVANCE(279);
      END_STATE();
    case 213:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 214:
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 215:
      if (lookahead == 'y') ADVANCE(270);
      END_STATE();
    case 216:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 217:
      if (lookahead == 'z') ADVANCE(99);
      END_STATE();
    case 218:
      if (lookahead == '{') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 219:
      if (lookahead == '}') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 225:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 226:
      if (eof) ADVANCE(229);
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(247);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(244);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (anon_sym__character_set_1(lookahead)) SKIP(226)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 227:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(247);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(246);
      if (anon_sym__character_set_1(lookahead)) SKIP(228)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 228:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(247);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(246);
      if (anon_sym__character_set_1(lookahead)) SKIP(228)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_double_DASHborder);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_font_DASHsize);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(294);
      if (lookahead == '>') ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(294);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(294);
      if (lookahead == '>') ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(230);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(315);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == ';') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(315);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(315);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(319);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(321);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(322);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 227, .external_lex_state = 2},
  [2] = {.lex_state = 227, .external_lex_state = 2},
  [3] = {.lex_state = 227, .external_lex_state = 2},
  [4] = {.lex_state = 24, .external_lex_state = 2},
  [5] = {.lex_state = 24, .external_lex_state = 2},
  [6] = {.lex_state = 24, .external_lex_state = 2},
  [7] = {.lex_state = 227, .external_lex_state = 2},
  [8] = {.lex_state = 12, .external_lex_state = 2},
  [9] = {.lex_state = 12, .external_lex_state = 2},
  [10] = {.lex_state = 12, .external_lex_state = 2},
  [11] = {.lex_state = 12, .external_lex_state = 2},
  [12] = {.lex_state = 12, .external_lex_state = 2},
  [13] = {.lex_state = 12, .external_lex_state = 2},
  [14] = {.lex_state = 12, .external_lex_state = 2},
  [15] = {.lex_state = 12, .external_lex_state = 2},
  [16] = {.lex_state = 12, .external_lex_state = 2},
  [17] = {.lex_state = 24, .external_lex_state = 2},
  [18] = {.lex_state = 24, .external_lex_state = 2},
  [19] = {.lex_state = 24, .external_lex_state = 2},
  [20] = {.lex_state = 26, .external_lex_state = 3},
  [21] = {.lex_state = 10, .external_lex_state = 3},
  [22] = {.lex_state = 4, .external_lex_state = 2},
  [23] = {.lex_state = 4, .external_lex_state = 2},
  [24] = {.lex_state = 4, .external_lex_state = 2},
  [25] = {.lex_state = 27, .external_lex_state = 3},
  [26] = {.lex_state = 45, .external_lex_state = 2},
  [27] = {.lex_state = 45, .external_lex_state = 2},
  [28] = {.lex_state = 45, .external_lex_state = 2},
  [29] = {.lex_state = 45, .external_lex_state = 2},
  [30] = {.lex_state = 45, .external_lex_state = 2},
  [31] = {.lex_state = 9, .external_lex_state = 2},
  [32] = {.lex_state = 26, .external_lex_state = 2},
  [33] = {.lex_state = 26, .external_lex_state = 2},
  [34] = {.lex_state = 9, .external_lex_state = 2},
  [35] = {.lex_state = 9, .external_lex_state = 2},
  [36] = {.lex_state = 45, .external_lex_state = 2},
  [37] = {.lex_state = 10, .external_lex_state = 2},
  [38] = {.lex_state = 41, .external_lex_state = 2},
  [39] = {.lex_state = 41, .external_lex_state = 2},
  [40] = {.lex_state = 41, .external_lex_state = 2},
  [41] = {.lex_state = 41, .external_lex_state = 2},
  [42] = {.lex_state = 41, .external_lex_state = 2},
  [43] = {.lex_state = 27, .external_lex_state = 2},
  [44] = {.lex_state = 41, .external_lex_state = 2},
  [45] = {.lex_state = 27, .external_lex_state = 2},
  [46] = {.lex_state = 12, .external_lex_state = 2},
  [47] = {.lex_state = 12, .external_lex_state = 2},
  [48] = {.lex_state = 12, .external_lex_state = 2},
  [49] = {.lex_state = 42, .external_lex_state = 2},
  [50] = {.lex_state = 12, .external_lex_state = 2},
  [51] = {.lex_state = 12, .external_lex_state = 2},
  [52] = {.lex_state = 12, .external_lex_state = 2},
  [53] = {.lex_state = 12, .external_lex_state = 2},
  [54] = {.lex_state = 12, .external_lex_state = 2},
  [55] = {.lex_state = 12, .external_lex_state = 2},
  [56] = {.lex_state = 42, .external_lex_state = 2},
  [57] = {.lex_state = 12, .external_lex_state = 2},
  [58] = {.lex_state = 12, .external_lex_state = 2},
  [59] = {.lex_state = 12, .external_lex_state = 2},
  [60] = {.lex_state = 12, .external_lex_state = 2},
  [61] = {.lex_state = 12, .external_lex_state = 2},
  [62] = {.lex_state = 42, .external_lex_state = 2},
  [63] = {.lex_state = 12, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 9, .external_lex_state = 2},
  [66] = {.lex_state = 12, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 12, .external_lex_state = 2},
  [70] = {.lex_state = 12, .external_lex_state = 2},
  [71] = {.lex_state = 12, .external_lex_state = 2},
  [72] = {.lex_state = 9, .external_lex_state = 2},
  [73] = {.lex_state = 12, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 30, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 14, .external_lex_state = 2},
  [78] = {.lex_state = 30, .external_lex_state = 2},
  [79] = {.lex_state = 14, .external_lex_state = 2},
  [80] = {.lex_state = 12, .external_lex_state = 2},
  [81] = {.lex_state = 32, .external_lex_state = 2},
  [82] = {.lex_state = 31, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 15, .external_lex_state = 2},
  [85] = {.lex_state = 15, .external_lex_state = 2},
  [86] = {.lex_state = 32, .external_lex_state = 2},
  [87] = {.lex_state = 31, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 33, .external_lex_state = 2},
  [91] = {.lex_state = 12, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 12, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 33, .external_lex_state = 2},
  [96] = {.lex_state = 12, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 47, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 47, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 47, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 42, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 48, .external_lex_state = 2},
  [145] = {.lex_state = 12, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 12, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 12, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 49, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 5},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 5},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 48, .external_lex_state = 2},
};

enum {
  ts_external_token__text_block_start = 0,
  ts_external_token__text_block_end = 1,
  ts_external_token__text_block_raw_text = 2,
  ts_external_token_block_comment = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_start] = sym__text_block_start,
  [ts_external_token__text_block_end] = sym__text_block_end,
  [ts_external_token__text_block_raw_text] = sym__text_block_raw_text,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token__text_block_end] = true,
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token_block_comment] = true,
  },
  [4] = {
    [ts_external_token__text_block_end] = true,
    [ts_external_token_block_comment] = true,
  },
  [5] = {
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_tooltip] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_stroke_DASHwidth] = ACTIONS(1),
    [anon_sym_stroke_DASHdash] = ACTIONS(1),
    [anon_sym_border_DASHradius] = ACTIONS(1),
    [anon_sym_double_DASHborder] = ACTIONS(1),
    [anon_sym_font_DASHsize] = ACTIONS(1),
    [anon_sym_font_DASHcolor] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_start] = ACTIONS(1),
    [sym__text_block_end] = ACTIONS(1),
    [sym__text_block_raw_text] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(158),
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(100),
    [sym__connection_path] = STATE(156),
    [sym_container] = STATE(100),
    [sym_shape] = STATE(100),
    [sym_shape_key] = STATE(54),
    [sym__identifier] = STATE(57),
    [sym__root_attribute] = STATE(100),
    [sym__root_attr_key] = STATE(155),
    [sym__common_style_attr_key] = STATE(167),
    [sym_string] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__identifier_token1] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
    [anon_sym_style] = ACTIONS(11),
    [anon_sym_link] = ACTIONS(13),
    [anon_sym_opacity] = ACTIONS(13),
    [anon_sym_fill] = ACTIONS(13),
    [anon_sym_stroke] = ACTIONS(15),
    [anon_sym_stroke_DASHwidth] = ACTIONS(13),
    [anon_sym_stroke_DASHdash] = ACTIONS(13),
    [anon_sym_border_DASHradius] = ACTIONS(13),
    [anon_sym_double_DASHborder] = ACTIONS(13),
    [anon_sym_font_DASHsize] = ACTIONS(13),
    [anon_sym_font_DASHcolor] = ACTIONS(13),
    [anon_sym_shadow] = ACTIONS(13),
    [anon_sym_multiple] = ACTIONS(13),
    [anon_sym_animated] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_underline] = ACTIONS(13),
    [sym__text_attr_key] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_escape_sequence] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(23),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    ACTIONS(30), 1,
      anon_sym_direction,
    ACTIONS(39), 1,
      anon_sym_stroke,
    ACTIONS(42), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      sym_escape_sequence,
    ACTIONS(51), 1,
      sym__eol,
    STATE(54), 1,
      sym_shape_key,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(155), 1,
      sym__root_attr_key,
    STATE(156), 1,
      sym__connection_path,
    STATE(167), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(100), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(33), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(36), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [83] = 19,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(9), 1,
      anon_sym_direction,
    ACTIONS(15), 1,
      anon_sym_stroke,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym__eol,
    STATE(54), 1,
      sym_shape_key,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(155), 1,
      sym__root_attr_key,
    STATE(156), 1,
      sym__connection_path,
    STATE(167), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(100), 4,
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
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [166] = 16,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(64), 1,
      sym__eol,
    STATE(6), 1,
      aux_sym__container_block_repeat1,
    STATE(52), 1,
      sym_shape_key,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(145), 1,
      sym__connection_path,
    STATE(147), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(113), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(60), 9,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
  [231] = 16,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      aux_sym__identifier_token1,
    ACTIONS(74), 1,
      anon_sym_style,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_escape_sequence,
    ACTIONS(86), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(73), 1,
      sym_shape_key,
    STATE(152), 1,
      sym__connection_path,
    STATE(154), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(135), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(71), 9,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
  [296] = 16,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(52), 1,
      sym_shape_key,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(145), 1,
      sym__connection_path,
    STATE(147), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(131), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(60), 9,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
  [361] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(95), 2,
      aux_sym__identifier_token1,
      anon_sym_stroke,
    ACTIONS(93), 27,
      ts_builtin_sym_end,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      sym__text_attr_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [399] = 10,
    ACTIONS(15), 1,
      anon_sym_stroke,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(101), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(120), 1,
      sym__inner_style_attribute,
    STATE(150), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [445] = 10,
    ACTIONS(15), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym__eol,
    STATE(8), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(108), 1,
      sym__inner_style_attribute,
    STATE(150), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [491] = 10,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      anon_sym_3d,
    ACTIONS(115), 1,
      anon_sym_stroke,
    ACTIONS(118), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(140), 1,
      sym__inner_style_attribute,
    STATE(149), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [537] = 7,
    ACTIONS(15), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    STATE(109), 1,
      sym__inner_style_attribute,
    STATE(150), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [574] = 7,
    ACTIONS(15), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    STATE(109), 1,
      sym__inner_style_attribute,
    STATE(153), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [611] = 7,
    ACTIONS(15), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    STATE(109), 1,
      sym__inner_style_attribute,
    STATE(149), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [648] = 4,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_stroke,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(107), 17,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      sym__eol,
  [678] = 3,
    ACTIONS(124), 1,
      anon_sym_stroke,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(107), 18,
      anon_sym_RBRACE,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      sym__eol,
  [706] = 4,
    ACTIONS(124), 1,
      anon_sym_stroke,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(107), 17,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      sym__eol,
  [736] = 3,
    ACTIONS(129), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 15,
      anon_sym_RBRACE,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [761] = 4,
    ACTIONS(129), 1,
      aux_sym__identifier_token1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [788] = 4,
    ACTIONS(129), 1,
      aux_sym__identifier_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [815] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      sym__text_block_start,
    STATE(75), 1,
      aux_sym__unquoted_string,
    STATE(89), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(114), 1,
      sym__container_block,
    STATE(116), 1,
      sym_text_block,
    ACTIONS(139), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [860] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      sym__text_block_start,
    ACTIONS(153), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    STATE(77), 1,
      aux_sym__unquoted_string,
    STATE(89), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(114), 1,
      sym__container_block,
    STATE(116), 1,
      sym_text_block,
    ACTIONS(139), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [905] = 6,
    ACTIONS(161), 1,
      aux_sym__identifier_token3,
    ACTIONS(163), 1,
      sym__dash,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(159), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(157), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [933] = 5,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(167), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(170), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(165), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [959] = 6,
    ACTIONS(176), 1,
      aux_sym__identifier_token3,
    ACTIONS(178), 1,
      sym__dash,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(174), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(172), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [987] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      sym__text_block_start,
    ACTIONS(180), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(182), 1,
      sym_escape_sequence,
    STATE(87), 1,
      aux_sym__unquoted_string,
    STATE(89), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(114), 1,
      sym__container_block,
    STATE(116), 1,
      sym_text_block,
    ACTIONS(139), 2,
      sym__eol,
      anon_sym_SEMI,
  [1031] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(184), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(186), 1,
      sym_escape_sequence,
    STATE(81), 1,
      aux_sym__unquoted_string,
    STATE(117), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1068] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(194), 1,
      sym_escape_sequence,
    STATE(84), 1,
      aux_sym__unquoted_string,
    STATE(117), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1105] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(198), 1,
      sym_escape_sequence,
    STATE(90), 1,
      aux_sym__unquoted_string,
    STATE(117), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1142] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(194), 1,
      sym_escape_sequence,
    STATE(84), 1,
      aux_sym__unquoted_string,
    STATE(139), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1179] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(198), 1,
      sym_escape_sequence,
    STATE(90), 1,
      aux_sym__unquoted_string,
    STATE(141), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1216] = 6,
    ACTIONS(163), 1,
      sym__dash,
    ACTIONS(202), 1,
      aux_sym__identifier_token3,
    STATE(34), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(157), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1243] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      aux_sym__unquoted_string,
    STATE(88), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(130), 1,
      sym__connection_block,
    ACTIONS(206), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1282] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(149), 1,
      sym_line_comment,
    STATE(75), 1,
      aux_sym__unquoted_string,
    STATE(92), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(137), 1,
      sym__container_block,
    ACTIONS(208), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1321] = 6,
    ACTIONS(178), 1,
      sym__dash,
    ACTIONS(212), 1,
      aux_sym__identifier_token3,
    STATE(35), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(210), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(172), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1348] = 5,
    STATE(35), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(170), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(214), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(165), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1373] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(184), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(186), 1,
      sym_escape_sequence,
    STATE(81), 1,
      aux_sym__unquoted_string,
    STATE(141), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1410] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      aux_sym__unquoted_string,
    STATE(88), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(130), 1,
      sym__connection_block,
    ACTIONS(206), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1449] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym__identifier_token1,
    ACTIONS(219), 1,
      anon_sym_style,
    ACTIONS(221), 1,
      sym_escape_sequence,
    STATE(68), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1483] = 10,
    ACTIONS(219), 1,
      anon_sym_style,
    ACTIONS(223), 1,
      aux_sym__identifier_token1,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_escape_sequence,
    STATE(68), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1517] = 10,
    ACTIONS(223), 1,
      aux_sym__identifier_token1,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_escape_sequence,
    ACTIONS(235), 1,
      anon_sym_style,
    STATE(76), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1551] = 10,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(223), 1,
      aux_sym__identifier_token1,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_escape_sequence,
    STATE(64), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1585] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(217), 1,
      aux_sym__identifier_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    STATE(64), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1619] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(182), 1,
      sym_escape_sequence,
    STATE(87), 1,
      aux_sym__unquoted_string,
    STATE(92), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(137), 1,
      sym__container_block,
    ACTIONS(208), 2,
      sym__eol,
      anon_sym_SEMI,
  [1657] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym__identifier_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(235), 1,
      anon_sym_style,
    STATE(76), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1691] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(182), 1,
      sym_escape_sequence,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      aux_sym__unquoted_string,
    STATE(88), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(130), 1,
      sym__connection_block,
    ACTIONS(206), 2,
      sym__eol,
      anon_sym_SEMI,
  [1729] = 8,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      sym__eol,
    STATE(48), 1,
      aux_sym__connection_block_repeat1,
    STATE(67), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(98), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1758] = 8,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      anon_sym_style,
    ACTIONS(251), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym__connection_block_repeat1,
    STATE(74), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(248), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(143), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1787] = 8,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym__connection_block_repeat1,
    STATE(67), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(124), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1816] = 8,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(58), 1,
      sym_shape_key,
    STATE(80), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(57), 2,
      sym__identifier,
      sym_string,
  [1844] = 8,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(264), 1,
      sym_arrow,
    STATE(37), 1,
      sym__colon,
    STATE(71), 1,
      aux_sym_connection_repeat1,
    STATE(106), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1872] = 8,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_arrow,
    ACTIONS(266), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym__colon,
    STATE(71), 1,
      aux_sym_connection_repeat1,
    STATE(106), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1900] = 8,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_COLON,
    ACTIONS(274), 1,
      sym_arrow,
    ACTIONS(276), 1,
      sym_dot,
    STATE(20), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1928] = 3,
    ACTIONS(280), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1946] = 8,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_arrow,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(284), 1,
      sym_dot,
    STATE(21), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1974] = 3,
    ACTIONS(178), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1992] = 7,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_shape_key,
    STATE(62), 1,
      aux_sym__connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(57), 2,
      sym__identifier,
      sym_string,
  [2017] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(286), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2032] = 3,
    ACTIONS(288), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [2049] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2064] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(290), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2079] = 3,
    ACTIONS(288), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [2096] = 7,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym__connection_path_repeat1,
    STATE(168), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(294), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(57), 2,
      sym__identifier,
      sym_string,
  [2121] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(303), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2136] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_COLON,
    ACTIONS(305), 1,
      sym_dot,
    STATE(20), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2161] = 3,
    ACTIONS(307), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2178] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2193] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      sym_dot,
    STATE(33), 1,
      sym__colon,
    STATE(138), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2218] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(315), 1,
      sym_dot,
    STATE(21), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2243] = 8,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_arrow,
    ACTIONS(317), 1,
      anon_sym_COLON,
    STATE(45), 1,
      sym__colon,
    STATE(71), 1,
      aux_sym_connection_repeat1,
    STATE(106), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 2,
      sym__eol,
      anon_sym_SEMI,
  [2270] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2285] = 4,
    ACTIONS(323), 1,
      sym_arrow,
    STATE(71), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [2304] = 3,
    ACTIONS(326), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2321] = 8,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_arrow,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(330), 1,
      sym_dot,
    STATE(25), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 2,
      sym__eol,
      anon_sym_SEMI,
  [2348] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      sym_dot,
    STATE(43), 1,
      sym__colon,
    STATE(138), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 2,
      sym__eol,
      anon_sym_SEMI,
  [2372] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(340), 1,
      sym_escape_sequence,
    STATE(78), 1,
      aux_sym__unquoted_string,
    ACTIONS(336), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2394] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(342), 1,
      sym_dot,
    STATE(25), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 2,
      sym__eol,
      anon_sym_SEMI,
  [2418] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(346), 1,
      sym_escape_sequence,
    STATE(79), 1,
      aux_sym__unquoted_string,
    ACTIONS(336), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2440] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(353), 1,
      sym_escape_sequence,
    STATE(78), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2462] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(359), 1,
      sym_escape_sequence,
    STATE(79), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2484] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [2498] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(366), 1,
      sym_escape_sequence,
    STATE(86), 1,
      aux_sym__unquoted_string,
    ACTIONS(362), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2519] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(371), 1,
      sym_escape_sequence,
    STATE(82), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2540] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(374), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2553] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(378), 1,
      sym_escape_sequence,
    STATE(85), 1,
      aux_sym__unquoted_string,
    ACTIONS(362), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2574] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(380), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(383), 1,
      sym_escape_sequence,
    STATE(85), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2595] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(386), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(389), 1,
      sym_escape_sequence,
    STATE(86), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2616] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(394), 1,
      sym_escape_sequence,
    STATE(82), 1,
      aux_sym__unquoted_string,
    ACTIONS(336), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2637] = 4,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2654] = 4,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(398), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2671] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(400), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(402), 1,
      sym_escape_sequence,
    STATE(95), 1,
      aux_sym__unquoted_string,
    ACTIONS(362), 2,
      sym__eol,
      anon_sym_SEMI,
  [2691] = 3,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(243), 4,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2705] = 4,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2721] = 3,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(243), 4,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2735] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(412), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2747] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(417), 1,
      sym_escape_sequence,
    STATE(95), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 2,
      sym__eol,
      anon_sym_SEMI,
  [2767] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(243), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2779] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2790] = 4,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(422), 2,
      sym__eol,
      anon_sym_SEMI,
  [2805] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_string_repeat1,
    ACTIONS(426), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2822] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(428), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2835] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(430), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2846] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym_string_repeat1,
    ACTIONS(434), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2863] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(436), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2874] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(438), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2885] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym_string_repeat1,
    ACTIONS(442), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2902] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(445), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2913] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(447), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2924] = 4,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 2,
      sym__eol,
      anon_sym_SEMI,
  [2939] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(451), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2950] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2961] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(455), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2972] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(457), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2983] = 4,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 2,
      sym__eol,
      anon_sym_SEMI,
  [2998] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(461), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3009] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(463), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3020] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(398), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3031] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3042] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(467), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3053] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(469), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3064] = 4,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(473), 2,
      sym__eol,
      anon_sym_SEMI,
  [3079] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(475), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3090] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(477), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3101] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(479), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3112] = 4,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(483), 2,
      sym__eol,
      anon_sym_SEMI,
  [3127] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3138] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(487), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3149] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(489), 4,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3160] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(491), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3171] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(493), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3182] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3193] = 4,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(497), 2,
      sym__eol,
      anon_sym_SEMI,
  [3208] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(499), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3219] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(501), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3229] = 4,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      sym_dot,
    STATE(151), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3243] = 3,
    STATE(17), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(507), 2,
      sym__eol,
      anon_sym_SEMI,
  [3255] = 4,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(509), 1,
      sym_dot,
    STATE(151), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3269] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3279] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(511), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3289] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(513), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3299] = 3,
    STATE(15), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(515), 2,
      sym__eol,
      anon_sym_SEMI,
  [3311] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(517), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3321] = 4,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(519), 1,
      sym_dot,
    STATE(151), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3335] = 3,
    STATE(96), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(521), 2,
      sym__eol,
      anon_sym_SEMI,
  [3347] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(523), 1,
      aux_sym_text_block_token1,
    ACTIONS(525), 1,
      sym_language,
  [3360] = 3,
    ACTIONS(264), 1,
      sym_arrow,
    STATE(51), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3371] = 3,
    ACTIONS(62), 1,
      anon_sym_style,
    STATE(137), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3382] = 3,
    ACTIONS(527), 1,
      anon_sym_COLON,
    STATE(36), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3393] = 3,
    ACTIONS(235), 1,
      anon_sym_style,
    STATE(137), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3404] = 3,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3415] = 3,
    ACTIONS(531), 1,
      anon_sym_COLON,
    STATE(26), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3426] = 3,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3437] = 3,
    ACTIONS(264), 1,
      sym_arrow,
    STATE(69), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3448] = 3,
    ACTIONS(535), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3459] = 3,
    ACTIONS(537), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3470] = 3,
    ACTIONS(539), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3481] = 3,
    ACTIONS(264), 1,
      sym_arrow,
    STATE(50), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3492] = 2,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3500] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3508] = 2,
    ACTIONS(545), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3516] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      sym__unescaped_single_string_fragment,
  [3526] = 2,
    ACTIONS(549), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3534] = 2,
    ACTIONS(551), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3542] = 2,
    ACTIONS(553), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3550] = 2,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3558] = 2,
    ACTIONS(557), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3566] = 2,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3574] = 2,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3582] = 2,
    ACTIONS(288), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3590] = 2,
    ACTIONS(563), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3598] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(565), 1,
      aux_sym_text_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 296,
  [SMALL_STATE(7)] = 361,
  [SMALL_STATE(8)] = 399,
  [SMALL_STATE(9)] = 445,
  [SMALL_STATE(10)] = 491,
  [SMALL_STATE(11)] = 537,
  [SMALL_STATE(12)] = 574,
  [SMALL_STATE(13)] = 611,
  [SMALL_STATE(14)] = 648,
  [SMALL_STATE(15)] = 678,
  [SMALL_STATE(16)] = 706,
  [SMALL_STATE(17)] = 736,
  [SMALL_STATE(18)] = 761,
  [SMALL_STATE(19)] = 788,
  [SMALL_STATE(20)] = 815,
  [SMALL_STATE(21)] = 860,
  [SMALL_STATE(22)] = 905,
  [SMALL_STATE(23)] = 933,
  [SMALL_STATE(24)] = 959,
  [SMALL_STATE(25)] = 987,
  [SMALL_STATE(26)] = 1031,
  [SMALL_STATE(27)] = 1068,
  [SMALL_STATE(28)] = 1105,
  [SMALL_STATE(29)] = 1142,
  [SMALL_STATE(30)] = 1179,
  [SMALL_STATE(31)] = 1216,
  [SMALL_STATE(32)] = 1243,
  [SMALL_STATE(33)] = 1282,
  [SMALL_STATE(34)] = 1321,
  [SMALL_STATE(35)] = 1348,
  [SMALL_STATE(36)] = 1373,
  [SMALL_STATE(37)] = 1410,
  [SMALL_STATE(38)] = 1449,
  [SMALL_STATE(39)] = 1483,
  [SMALL_STATE(40)] = 1517,
  [SMALL_STATE(41)] = 1551,
  [SMALL_STATE(42)] = 1585,
  [SMALL_STATE(43)] = 1619,
  [SMALL_STATE(44)] = 1657,
  [SMALL_STATE(45)] = 1691,
  [SMALL_STATE(46)] = 1729,
  [SMALL_STATE(47)] = 1758,
  [SMALL_STATE(48)] = 1787,
  [SMALL_STATE(49)] = 1816,
  [SMALL_STATE(50)] = 1844,
  [SMALL_STATE(51)] = 1872,
  [SMALL_STATE(52)] = 1900,
  [SMALL_STATE(53)] = 1928,
  [SMALL_STATE(54)] = 1946,
  [SMALL_STATE(55)] = 1974,
  [SMALL_STATE(56)] = 1992,
  [SMALL_STATE(57)] = 2017,
  [SMALL_STATE(58)] = 2032,
  [SMALL_STATE(59)] = 2049,
  [SMALL_STATE(60)] = 2064,
  [SMALL_STATE(61)] = 2079,
  [SMALL_STATE(62)] = 2096,
  [SMALL_STATE(63)] = 2121,
  [SMALL_STATE(64)] = 2136,
  [SMALL_STATE(65)] = 2161,
  [SMALL_STATE(66)] = 2178,
  [SMALL_STATE(67)] = 2193,
  [SMALL_STATE(68)] = 2218,
  [SMALL_STATE(69)] = 2243,
  [SMALL_STATE(70)] = 2270,
  [SMALL_STATE(71)] = 2285,
  [SMALL_STATE(72)] = 2304,
  [SMALL_STATE(73)] = 2321,
  [SMALL_STATE(74)] = 2348,
  [SMALL_STATE(75)] = 2372,
  [SMALL_STATE(76)] = 2394,
  [SMALL_STATE(77)] = 2418,
  [SMALL_STATE(78)] = 2440,
  [SMALL_STATE(79)] = 2462,
  [SMALL_STATE(80)] = 2484,
  [SMALL_STATE(81)] = 2498,
  [SMALL_STATE(82)] = 2519,
  [SMALL_STATE(83)] = 2540,
  [SMALL_STATE(84)] = 2553,
  [SMALL_STATE(85)] = 2574,
  [SMALL_STATE(86)] = 2595,
  [SMALL_STATE(87)] = 2616,
  [SMALL_STATE(88)] = 2637,
  [SMALL_STATE(89)] = 2654,
  [SMALL_STATE(90)] = 2671,
  [SMALL_STATE(91)] = 2691,
  [SMALL_STATE(92)] = 2705,
  [SMALL_STATE(93)] = 2721,
  [SMALL_STATE(94)] = 2735,
  [SMALL_STATE(95)] = 2747,
  [SMALL_STATE(96)] = 2767,
  [SMALL_STATE(97)] = 2779,
  [SMALL_STATE(98)] = 2790,
  [SMALL_STATE(99)] = 2805,
  [SMALL_STATE(100)] = 2822,
  [SMALL_STATE(101)] = 2835,
  [SMALL_STATE(102)] = 2846,
  [SMALL_STATE(103)] = 2863,
  [SMALL_STATE(104)] = 2874,
  [SMALL_STATE(105)] = 2885,
  [SMALL_STATE(106)] = 2902,
  [SMALL_STATE(107)] = 2913,
  [SMALL_STATE(108)] = 2924,
  [SMALL_STATE(109)] = 2939,
  [SMALL_STATE(110)] = 2950,
  [SMALL_STATE(111)] = 2961,
  [SMALL_STATE(112)] = 2972,
  [SMALL_STATE(113)] = 2983,
  [SMALL_STATE(114)] = 2998,
  [SMALL_STATE(115)] = 3009,
  [SMALL_STATE(116)] = 3020,
  [SMALL_STATE(117)] = 3031,
  [SMALL_STATE(118)] = 3042,
  [SMALL_STATE(119)] = 3053,
  [SMALL_STATE(120)] = 3064,
  [SMALL_STATE(121)] = 3079,
  [SMALL_STATE(122)] = 3090,
  [SMALL_STATE(123)] = 3101,
  [SMALL_STATE(124)] = 3112,
  [SMALL_STATE(125)] = 3127,
  [SMALL_STATE(126)] = 3138,
  [SMALL_STATE(127)] = 3149,
  [SMALL_STATE(128)] = 3160,
  [SMALL_STATE(129)] = 3171,
  [SMALL_STATE(130)] = 3182,
  [SMALL_STATE(131)] = 3193,
  [SMALL_STATE(132)] = 3208,
  [SMALL_STATE(133)] = 3219,
  [SMALL_STATE(134)] = 3229,
  [SMALL_STATE(135)] = 3243,
  [SMALL_STATE(136)] = 3255,
  [SMALL_STATE(137)] = 3269,
  [SMALL_STATE(138)] = 3279,
  [SMALL_STATE(139)] = 3289,
  [SMALL_STATE(140)] = 3299,
  [SMALL_STATE(141)] = 3311,
  [SMALL_STATE(142)] = 3321,
  [SMALL_STATE(143)] = 3335,
  [SMALL_STATE(144)] = 3347,
  [SMALL_STATE(145)] = 3360,
  [SMALL_STATE(146)] = 3371,
  [SMALL_STATE(147)] = 3382,
  [SMALL_STATE(148)] = 3393,
  [SMALL_STATE(149)] = 3404,
  [SMALL_STATE(150)] = 3415,
  [SMALL_STATE(151)] = 3426,
  [SMALL_STATE(152)] = 3437,
  [SMALL_STATE(153)] = 3448,
  [SMALL_STATE(154)] = 3459,
  [SMALL_STATE(155)] = 3470,
  [SMALL_STATE(156)] = 3481,
  [SMALL_STATE(157)] = 3492,
  [SMALL_STATE(158)] = 3500,
  [SMALL_STATE(159)] = 3508,
  [SMALL_STATE(160)] = 3516,
  [SMALL_STATE(161)] = 3526,
  [SMALL_STATE(162)] = 3534,
  [SMALL_STATE(163)] = 3542,
  [SMALL_STATE(164)] = 3550,
  [SMALL_STATE(165)] = 3558,
  [SMALL_STATE(166)] = 3566,
  [SMALL_STATE(167)] = 3574,
  [SMALL_STATE(168)] = 3582,
  [SMALL_STATE(169)] = 3590,
  [SMALL_STATE(170)] = 3598,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(22),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(169),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(134),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(160),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(99),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(22),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(5),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(166),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(157),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(166),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(10),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(123),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(126),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(119),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(110),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(23),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(35),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(31),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(160),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(99),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(31),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(134),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(83),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(47),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(31),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(160),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(99),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(49),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(78),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(78),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(79),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(79),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(82),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(82),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(85),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(85),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(86),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(86),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(101),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(115),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(95),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(95),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(105),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [543] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
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
