const spaces = repeat(choice(" ", "\t"));

module.exports = grammar({
  name: "d2",

  extras: ($) => [$.line_comment],

  word: ($) => $._word,

  conflicts: ($) => [
    [$.shape_key],
    [$.arrow],
    [$._shape_path],
    [$._shape_block],
    [$._shape_block_definition],
    [$._style_attr_block],
    [$._inner_style_attribute],
    [$._emptyline],
  ],

  rules: {
    source_file: ($) => repeat($._root_definition),

    _root_definition: ($) =>
      choice(
        $._emptyline,
        $._root_attribute,
        $.connection,
        $._shape_definition
      ),

    connection: ($) =>
      seq(
        $._shape_path,
        repeat1(seq($._arrow, $._shape_path)),
        optional(
          choice(seq($.dot, $._connection_attribute), seq($._colon, $.label))
        ),
        $._end
      ),

    _shape_definition: ($) =>
      seq(
        $._shape_path,
        optional(
          choice(
            seq($.dot, $._shape_attribute),
            seq(
              optional(seq($._colon, optional(seq(spaces, $.label)))),
              optional(alias($._shape_block, $.block))
            )
          )
        ),
        $._end
      ),

    _shape_path: ($) =>
      seq(
        spaces,
        repeat(seq(alias($.shape_key, $.container_key), spaces, $.dot, spaces)),
        $.shape_key
      ),

    shape_key: ($) =>
      choice(
        $.string,
        seq(
          optional($._dash),
          choice(
            $._word,
            repeat1(seq($._word, choice(repeat1(" "), $._dash), $._word))
          ),
          optional($._dash)
        )
      ),

    label: ($) => choice($.string, $._unquoted_string),

    attr_value: ($) => seq(spaces, choice($.string, $._unquoted_string)),

    _root_attribute: ($) =>
      choice(
        seq(
          alias($._root_attr_key, $.attr_key),
          $._colon,
          $.attr_value,
          $._end
        ),
        alias(seq($._shape_attribute, $._end), $.invalid)
      ),

    _root_attr_key: ($) => "direction",

    _shape_block: ($) =>
      seq(
        spaces,
        "{",
        repeat(
          choice($._emptyline, seq(spaces, $._shape_block_definition, $._end))
        ),
        optional(seq($._shape_block_definition, optional($._end))),
        spaces,
        "}"
      ),

    _shape_block_definition: ($) =>
      choice($.connection, $._shape_definition, $._shape_attribute),

    _shape_attribute: ($) =>
      choice(
        seq(alias($._shape_attr_key, $.attr_key), $._colon, $.attr_value),
        $._style_attribute
      ),

    _style_attribute: ($) =>
      seq(
        alias("style", $.attr_key),
        choice(
          seq($.dot, $._inner_style_attribute),
          seq($._colon, alias($._style_attr_block, $.block))
        )
      ),

    _style_attr_block: ($) =>
      seq(
        spaces,
        "{",
        spaces,
        repeat(choice($._emptyline, seq($._inner_style_attribute, $._end))),
        optional(seq($._inner_style_attribute, optional($._end))),
        spaces,
        "}"
      ),

    _inner_style_attribute: ($) =>
      seq(spaces, alias($._style_attr_key, $.attr_key), $._colon, $.attr_value),

    _connection_attribute: ($) =>
      seq(alias($._connection_attr_key, $.attr_key), $._colon, $.attr_value),

    _shape_attr_key: ($) =>
      choice(
        "shape",
        "label",
        // sql
        "constraint",
        // image
        "icon",
        "width",
        "height"
      ),

    _style_attr_key: ($) =>
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
        "3d",
        "link"
      ),

    _text_attr_key: ($) => "near",

    _connection_attr_key: ($) => choice("source-arrowhead", "target-arrowhead"),

    _colon: ($) => seq(spaces, ":"),

    _arrow: ($) => seq(spaces, $.arrow),

    arrow: ($) =>
      choice(
        seq("--", repeat($._dash)),
        seq("<-", repeat($._dash)),
        seq("<-", repeat($._dash), ">"),
        seq(repeat($._dash), "->")
      ),

    _dash: ($) => token.immediate("-"),

    dot: ($) => token.immediate("."),

    _unquoted_string: ($) => token.immediate(/[^'"`\n;{}]+/),

    string: ($) =>
      choice(
        seq("'", repeat(token.immediate(/[^'\n]+/)), "'"),
        seq('"', repeat(token.immediate(/[^"\n]+/)), '"'),
        seq("`", repeat(token.immediate(/[^`\n]+/)), "`")
      ),

    line_comment: ($) => token(seq("#", /.*/)),

    _word: ($) => /[\w\d]+/,

    _emptyline: ($) => seq(spaces, $._eof),
    _eof: ($) => choice("\n", "\0"),
    _end: ($) => seq(spaces, choice(";", $._eof)),
  },
});
