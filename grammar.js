module.exports = grammar({
  name: "d2",

  word: ($) => $._word,

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        choice($._root_attribute, $._shape_attribute),
        $.connection,
        $.shape
      ),

    connection: ($) =>
      seq(
        $.identifier,
        choice(
          seq(seq($.arrow, $.identifier, ":", $.label)),
          seq(repeat1(seq($.arrow, $.identifier)))
        ),
        $._end
      ),

    shape: ($) =>
      seq(
        $.identifier,
        repeat(seq($.dot, $.identifier)),
        optional(seq(":", $.label)),
        $._end
      ),

    label: ($) => choice($.string, $._unquoted_string),

    identifier: ($) => $._identifier,

    attr_value: ($) => choice($.string, $._unquoted_string),

    _root_attribute: ($) =>
      seq(
        alias($._root_attr_key, $.attr_key),
        ":",
        alias($.label, $.attr_value),
        $._end
      ),

    _root_attr_key: ($) => "direction",

    _style_attribute: ($) =>
      seq(
        alias("style", $.attr_key),
        $.dot,
        alias($._style_attr_key, $.attr_key),
        ":",
        $.attr_value,
        $._end
      ),

    _shape_attribute: ($) =>
      seq(
        $.identifier,
        $.dot,
        choice(
          seq(alias($._shape_attr_key, $.attr_key), ":", $.attr_value, $._end),
          $._style_attribute
        )
      ),

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

    _identifier: ($) =>
      prec.right(
        seq(
          repeat(" "),
          optional($._dash),
          choice(
            $._word,
            repeat1(seq($._word, choice(repeat(" "), $._dash), $._word))
          ),
          optional($._dash),
          repeat(" ")
        )
      ),

    _dash: ($) => token.immediate("-"),

    _word: ($) => /[\w\d]+/,

    arrow: ($) =>
      prec.left(
        choice(
          seq("--", repeat($._dash)),
          seq("<-", repeat($._dash)),
          seq("<-", repeat($._dash), ">"),
          seq(repeat($._dash), "->")
        )
      ),

    _unquoted_string: ($) => /[^\n;{]+/,

    string: ($) =>
      choice(
        seq("'", repeat(token(/[^'\n]+/)), "'"),
        seq('"', repeat(token(/[^'\n]+/)), '"'),
        seq("`", repeat(token(/[^'\n]+/)), "`")
      ),

    _end: ($) => choice(";", "\n", "\0"),

    dot: ($) => ".",
  },
});
