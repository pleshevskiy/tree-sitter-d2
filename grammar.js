const spaces = repeat(" ");

module.exports = grammar({
  name: "d2",

  extras: ($) => [],

  word: ($) => $._word,

  conflicts: ($) => [
    [$._identifier],
    [$.identifier],
    [$.arrow],
    [$._shape_block],
    [$._shape_block_definition],
    [$._style_attr_block],
    [$._inner_style_attribute],
  ],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(seq(spaces, $._eof), $._root_attribute, $.connection, $.shape),

    connection: ($) =>
      seq(
        $._identifier,
        repeat1(seq($._arrow, $._identifier)),
        optional(
          choice(seq($.dot, $._connection_attribute), seq($._colon, $.label))
        ),
        $._end
      ),

    shape: ($) =>
      seq(
        $._identifier,
        repeat(seq($.dot, $._identifier)),
        optional(
          choice(
            seq($.dot, $._shape_attribute),
            seq(
              $._colon,
              optional($.label),
              optional(alias($._shape_block, $.block))
            )
          )
        ),
        $._end
      ),

    label: ($) => choice($.string, $._unquoted_string),

    attr_value: ($) => seq(spaces, choice($.string, $._unquoted_string)),

    _root_attribute: ($) =>
      seq(alias($._root_attr_key, $.attr_key), $._colon, $.attr_value, $._end),

    _root_attr_key: ($) => "direction",

    _shape_block: ($) =>
      seq(
        spaces,
        "{",
        spaces,
        repeat(
          choice(seq(spaces, $._eof), seq($._shape_block_definition, $._end))
        ),
        optional(seq($._shape_block_definition, optional($._end))),
        spaces,
        "}"
      ),

    _shape_block_definition: ($) =>
      choice($.connection, $.shape, $._shape_attribute),

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
        repeat(choice($._eof, seq($._inner_style_attribute, $._end))),
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

    _identifier: ($) => seq(spaces, $.identifier),

    identifier: ($) =>
      seq(
        optional($._dash),
        choice(
          $._word,
          repeat1(seq($._word, choice(spaces, $._dash), $._word))
        ),
        optional($._dash)
      ),

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

    _word: ($) => /[\w\d]+/,

    _eof: ($) => choice("\n", "\0"),
    _end: ($) => seq(spaces, choice(";", $._eof)),
  },
});
