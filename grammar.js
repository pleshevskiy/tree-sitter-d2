const PREC = {
  COMMENT: -2,
  EOL: -1,
  TEXT_BLOCK_CONTENT: -1,
  UNQUOTED_STRING: -1,
  CONTAINER: 2,
  CONNECTION: 2,
  SHAPE: 3,
  IDENTIFIER: 0,
  ARROW: 0,
  ATTRIBUTE: 0,
  ATTRIBUTE_KEY: 0,
};

module.exports = grammar({
  name: "d2",

  externals: ($) => [
    $._text_block_start,
    $._text_block_end,
    $._text_block_raw_text,
    $.block_comment,
  ],

  extras: ($) => [
    /[ \f\t\v\u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]/,
    $.line_comment,
    $.block_comment,
  ],

  conflicts: ($) => [
    [$._connection_path, $.container],
    [$._container_block],
    [$._connection_block],
    [$._style_attribute_block],
  ],

  rules: {
    source_file: ($) => repeat($._root_definition),

    _root_definition: ($) =>
      choice(
        $._eol,
        seq(
          choice(
            alias($._root_attribute, $.attribute),
            $.shape,
            $.container,
            $.connection
          ),
          choice($._end, "\0")
        )
      ),

    // connections

    connection: ($) =>
      seq(
        $._connection_path,
        repeat1(seq($.arrow, $._connection_path)),
        optional(
          seq(
            optional(seq($._colon, optional($.label))),
            optional(seq(alias($._connection_block, $.block)))
          )
        )
      ),

    _connection_path: ($) =>
      seq(
        repeat(
          prec(PREC.CONNECTION, seq(alias($.shape_key, $.container_key), $.dot))
        ),
        $.shape_key
      ),

    _connection_block: ($) =>
      seq(
        "{",
        repeat(choice($._eol, seq($._connection_attribute, $._end))),
        optional(seq($._connection_attribute, optional($._end))),
        "}"
      ),

    // containers

    container: ($) =>
      prec(
        PREC.CONTAINER,
        seq(
          alias($.shape_key, $.container_key),
          choice(
            seq($.dot, choice($.shape, $.container)),
            seq(
              optional(seq($._colon, optional($.label))),
              optional(seq(alias($._container_block, $.block)))
            )
          )
        )
      ),

    _container_block: ($) =>
      seq(
        "{",
        repeat(choice($._eol, seq($._container_block_definition, $._end))),
        optional(seq($._container_block_definition, optional($._end))),
        "}"
      ),

    _container_block_definition: ($) =>
      choice($.shape, $.container, $.connection, $._shape_attribute),

    // shapes

    shape: ($) =>
      prec(
        PREC.SHAPE,
        seq(
          $.shape_key,
          optional(
            choice(
              seq($.dot, alias($._style_attribute, $.attribute)),
              seq(optional(seq($._colon, choice($.label, $.text_block))))
            )
          )
        )
      ),

    shape_key: ($) => choice($.string, $._identifier),

    _identifier: ($) =>
      seq(
        optional("-"),
        /[\w\d$]/,
        repeat(
          token(prec(PREC.IDENTIFIER, /([\w\d'"$(),]+)?( +|-)[\w\d'"$()]+/))
        ),
        optional(/[\w\d'"$()]+/),
        optional($._dash)
      ),

    text_block: ($) =>
      seq(
        alias($._text_block_start, "|"),
        optional($.language),
        /\s/,
        alias($._text_block_raw_text, $.raw_text),
        alias($._text_block_end, "|")
      ),

    language: ($) => /\w+/,

    // attributes

    _root_attribute: ($) =>
      seq(alias($._root_attr_key, $.attr_key), $._colon, $.attr_value),

    _root_attr_key: ($) =>
      choice(
        "direction",
        // reserved but doesn't affected for root
        alias(
          choice(
            "shape",
            "label",
            "constraint",
            "icon",
            "style",
            $._common_style_attr_key,
            $._text_attr_key
          ),
          $.reserved
        )
      ),

    _shape_attribute: ($) =>
      choice(
        alias($._base_shape_attribute, $.attribute),
        alias($._style_attribute, $.attribute)
      ),

    _base_shape_attribute: ($) =>
      seq(alias($._shape_attr_key, $.attr_key), $._colon, $.attr_value),

    _shape_attr_key: ($) =>
      prec(
        PREC.ATTRIBUTE_KEY,
        choice(
          "shape",
          "label",
          // sql
          "constraint",
          // image
          "icon",
          "width",
          "height"
        )
      ),

    _style_attribute: ($) =>
      prec(
        PREC.ATTRIBUTE,
        seq(
          alias("style", $.attr_key),
          choice(
            seq($.dot, alias($._inner_style_attribute, $.attribute)),
            seq($._colon, alias($._style_attribute_block, $.block))
          )
        )
      ),

    _style_attribute_block: ($) =>
      seq(
        "{",
        repeat(
          choice(
            $._eol,
            seq(alias($._inner_style_attribute, $.attribute), $._end)
          )
        ),
        optional(
          seq(alias($._inner_style_attribute, $.attribute), optional($._end))
        ),
        "}"
      ),

    _inner_style_attribute: ($) =>
      prec(
        PREC.ATTRIBUTE,
        seq(alias($._style_attr_key, $.attr_key), $._colon, $.attr_value)
      ),

    _style_attr_key: ($) => choice($._common_style_attr_key, "3d"),

    _common_style_attr_key: ($) =>
      choice(
        "opacity",
        "fill",
        "stroke",
        "stroke-width",
        "stroke-dash",
        "border-radius",
        "font-color",
        "shadow",
        "multiple",
        "animated",
        "link"
      ),

    _text_attr_key: ($) => "near",

    _connection_attribute: ($) =>
      choice(
        alias($._connection_arrowhead_attribute, $.attribute),
        alias($._style_attribute, $.attribute)
      ),

    _connection_arrowhead_attribute: ($) =>
      seq(
        alias($._connection_arrowhead_attr_key, $.attr_key),
        choice(
          seq($.dot, alias($._style_attribute, $.attribute)),
          seq(
            optional(seq($._colon, optional($.label))),
            optional(seq(alias($._container_block, $.block)))
          )
        )
      ),

    _connection_arrowhead_block: ($) =>
      seq("{", repeat(choice($._eol, seq($._shape_attribute, $._end))), "}"),

    _connection_arrowhead_attr_key: ($) =>
      choice("source-arrowhead", "target-arrowhead"),

    //

    label: ($) => choice($.string, $._unquoted_string),

    attr_value: ($) =>
      seq(choice($.boolean, $.integer, $.float, $.string, $._unquoted_string)),

    // --------------------------------------------

    _dash: ($) => token.immediate("-"),

    _colon: ($) => seq(":"),

    arrow: ($) => token(prec(PREC.ARROW, choice(/-+>/, /--+/, /<-+/, /<-+>/))),

    dot: ($) => token("."),

    _unquoted_string: ($) =>
      token(prec(PREC.UNQUOTED_STRING, /[^'"`|\n\s;{}]([^\n;{}]*[^\n\s;{}])?/)),

    string: ($) =>
      choice(
        seq(
          "'",
          alias($._unescaped_single_string_fragment, $.string_fragment),
          "'"
        ),
        seq(
          '"',
          repeat(
            choice(
              alias($._unescaped_double_string_fragment, $.string_fragment),
              $.escape_sequence
            )
          ),
          '"'
        )
      ),

    _unescaped_single_string_fragment: ($) => token.immediate(/[^'\n]+/),

    _unescaped_double_string_fragment: ($) => token.immediate(/[^"\\\n]+/),

    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu0-7]/,
            /[0-7]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/
          )
        )
      ),

    boolean: ($) => choice("true", "false"),

    integer: ($) => /[0-9]+/,

    float: ($) => /[0-9]+\.[0-9]+/,

    line_comment: ($) => token(prec(PREC.COMMENT, seq("#", /.*/))),

    _eol: ($) => token(prec(PREC.EOL, "\n")),
    _end: ($) => seq(choice(";", $._eol)),
  },
});
