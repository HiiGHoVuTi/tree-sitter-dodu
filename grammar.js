const glyph = /([^ \[\]\(\),;\n\t\\.0-9])+/;

module.exports = grammar({
  name: "dodu",
  rules: {
    source_file: $ => repeat($._declaration),
    identifier: $ => glyph,
    _declaration: $ => seq(
      alias($.identifier, $.name),
      "<-",
      $._expression,
      "."
    ),
    list: $ => seq(
      '[',
      seq(
        repeat(seq($._expression, ';')),
        $._expression
      ),
      ']'
    ),
    literal: $ => choice(
      alias(/\"(\\.|[^"\\])*\"/, $.string),
      alias(/[0-9]+/, $.number),
      $.list
    ),
    _expression: $ => choice(
      $._abstraction,
      $._composition,
      $._application,
      $._letbinding,
    ),
    _application: $ => seq(
      alias($._term, $.function),
      repeat($._term)
    ),
    _abstraction: $ => seq(
      "\\", repeat(alias($.identifier, $.name)), ".",
      $._expression
    ),
    _letbinding: $ => seq(
      "@", "(", repeat($._declaration), ")",
      $._expression
    ),
    _composition: $ => seq(
      $._application, ",", $._expression
    ),
    _train: $ => seq(
      "{", choice(
        seq(alias($._term, $.function), $._term),
        seq($._term, alias($._term, $.function), $._term)
      ), "}"
    ),
    _term: $ => choice(
      $.literal,
      $.identifier,
      $._train,
      seq("(", $._expression, ")")
    )
  }
})
