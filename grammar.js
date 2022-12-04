module.exports = grammar({
  name: "d2",

  word: ($) => $._word,

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.attribute, $.connection, $.shape),

    _end: ($) => choice(";", "\n", "\0"),

    attribute: ($) =>
      choice(
        seq(
          $.identifier,
          repeat1(seq($.dot, $.keyword)),
          ":",
          alias($.label, $.attribute_value),
          $._end
        ),
        seq(
          $.keyword,
          repeat(seq($.dot, $.keyword)),
          ":",
          alias($.label, $.attribute_value),
          $._end
        )
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

    dot: ($) => ".",

    label: ($) => choice($.string, $._unquoted_string),

    identifier: ($) => $._identifier,

    keyword: ($) => choice("direction"),

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
  },
});
