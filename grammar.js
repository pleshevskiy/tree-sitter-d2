module.exports = grammar({
  name: "d2",

  externals: ($) => [$._identifier],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.connection, $.shape),

    _end: ($) => choice(";", "\n"),

    connection: ($) =>
      seq(
        field("left", $.identifier),
        $.arrow,
        field("right", $.identifier),
        $._end
      ),

    shape: ($) => seq($.identifier, optional(seq(":", $.label)), $._end),

    label: ($) => choice($.string, /[^\n;{]+/),

    identifier: ($) => $._identifier,

    arrow: ($) =>
      choice(
        seq("--", repeat("-")),
        seq("<-", repeat("-")),
        seq("<-", repeat("-"), ">"),
        seq(repeat("-"), "->")
      ),

    string: ($) =>
      choice(
        seq("'", repeat(token(/[^'\n]+/)), "'"),
        seq('"', repeat(token(/[^'\n]+/)), '"'),
        seq("`", repeat(token(/[^'\n]+/)), "`")
      ),
  },
});
