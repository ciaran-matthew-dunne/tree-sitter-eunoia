// grammar.js
module.exports = grammar({
  name: "eunoia",

  // Allow whitespace and semicolon–style comments between tokens.
  extras: ($) => [/\s+/, $.comment],

  // Resolve ambiguity between common_command and smtlib2_command.
  conflicts: ($) => [[$.common_command, $.smtlib2_command]],

  rules: {
    source_file: ($) => repeat($.command),

    // A command may be any one of the three kinds.
    command: ($) => choice($.eo_command, $.common_command, $.smtlib2_command),

    // --- EO–commands ---------------------------------------------------
    eo_command: ($) =>
      seq(
        "(",
        choice(
          // (assume <symbol> <term>)
          seq("assume", $.symbol, $.term),
          // (assume-push <symbol> <term>)
          seq("assume-push", $.symbol, $.term),
          // (declare-consts <lit-category> <type>)
          seq("declare-consts", $.lit_category, $.type),
          // (declare-parameterized-const <symbol> (<typed-param>*) <type> <attr>*)
          seq(
            "declare-parameterized-const",
            $.symbol,
            "(",
            repeat($.typed_param),
            ")",
            $.type,
            repeat($.attr),
          ),
          // (declare-oracle-fun <symbol> (<type>*) <type> <symbol>)
          seq(
            "declare-oracle-fun",
            $.symbol,
            "(",
            repeat($.type),
            ")",
            $.type,
            $.symbol,
          ),
          // (declare-rule <symbol> <keyword> <sexpr>*)
          seq("declare-rule", $.symbol, $.keyword, repeat($.sexpr)),
          // (declare-rule <symbol> (<typed-param>*) <assumption>? <premises>? <arguments>? <reqs>? :conclusion <term> <attr>*)
          seq(
            "declare-rule",
            $.symbol,
            "(",
            repeat($.typed_param),
            ")",
            optional($.assumption),
            optional($.premises),
            optional($.arguments),
            optional($.reqs),
            ":conclusion",
            $.term,
            repeat($.attr),
          ),
          // (declare-type <symbol> (<type>*))
          seq("declare-type", $.symbol, "(", repeat($.type), ")"),
          // (define <symbol> (<typed-param>*) <term>)
          seq("define", $.symbol, "(", repeat($.typed_param), ")", $.term),
          // (define-type <symbol> (<type>*) <type>)
          seq("define-type", $.symbol, "(", repeat($.type), ")", $.type),
          // (include <string>)
          seq("include", $.string),
          // (program <symbol> <keyword> <sexpr>*)
          seq("program", $.symbol, $.keyword, repeat($.sexpr)),
          // (program <symbol> (<typed-param>*) (<type>*) <type> ((<term> <term>)+))
          seq(
            "program",
            $.symbol,
            "(",
            repeat($.typed_param),
            ")",
            "(",
            repeat($.type),
            ")",
            $.type,
            "(",
            repeat1(seq("(", $.term, $.term, ")")),
            ")",
          ),
          // (reference <string> <symbol>?)
          seq("reference", $.string, optional($.symbol)),
          // (step <symbol> <term>? :rule <symbol> <simple-premises>? <arguments>?)
          seq(
            "step",
            $.symbol,
            optional($.term),
            ":rule",
            $.symbol,
            optional($.simple_premises),
            optional($.arguments),
          ),
          // (step-pop <symbol> <term>? :rule <symbol> <simple-premises>? <arguments>?)
          seq(
            "step-pop",
            $.symbol,
            optional($.term),
            ":rule",
            $.symbol,
            optional($.simple_premises),
            optional($.arguments),
          ),
        ),
        ")",
      ),

    // --- Common commands ------------------------------------------------
    common_command: ($) =>
      seq(
        "(",
        choice(
          // (declare-const <symbol> <type> <attr>*)
          seq("declare-const", $.symbol, $.type, repeat($.attr)),
          // (declare-datatype <symbol> <datatype-dec>)
          seq("declare-datatype", $.symbol, $.datatype_dec),
          // (declare-datatypes (<sort-dec>+) (<datatype-dec>+))
          seq(
            "declare-datatypes",
            "(",
            repeat1($.sort_dec),
            ")",
            "(",
            repeat1($.datatype_dec),
            ")",
          ),
          // (echo <string>?)
          seq("echo", optional($.string)),
          // (exit)
          seq("exit"),
          // (reset)
          seq("reset"),
          // (set-option <attr>)
          seq("set-option", $.attr),
        ),
        ")",
      ),

    // --- SMT–LIB2 commands ----------------------------------------------
    smtlib2_command: ($) =>
      seq(
        "(",
        choice(
          // (assert <term>)
          seq("assert", $.term),
          // (check-sat)
          seq("check-sat"),
          // (check-sat-assuming (<term>*))
          seq("check-sat-assuming", "(", repeat($.term), ")"),
          // (declare-fun <symbol> (<type>*) <type> <attr>*)
          seq(
            "declare-fun",
            $.symbol,
            "(",
            repeat($.type),
            ")",
            $.type,
            repeat($.attr),
          ),
          // (declare-sort <symbol> <numeral>)
          seq("declare-sort", $.symbol, $.numeral),
          // (define-const <symbol> <term>)
          seq("define-const", $.symbol, $.term),
          // (define-fun <symbol> (<typed-param>*) <type> <term>)
          seq(
            "define-fun",
            $.symbol,
            "(",
            repeat($.typed_param),
            ")",
            $.type,
            $.term,
          ),
          // (define-sort <symbol> (<symbol>*) <type>)
          seq("define-sort", $.symbol, "(", repeat($.symbol), ")", $.type),
          // (set-info <attr>)
          seq("set-info", $.attr),
          // (set-logic <symbol>)
          seq("set-logic", $.symbol),
          // Also allow common commands as SMT–LIB2 commands:
          seq("declare-const", $.symbol, $.type, repeat($.attr)),
          seq("declare-datatype", $.symbol, $.datatype_dec),
          seq(
            "declare-datatypes",
            "(",
            repeat1($.sort_dec),
            ")",
            "(",
            repeat1($.datatype_dec),
            ")",
          ),
          seq("echo", optional($.string)),
          seq("exit"),
          seq("reset"),
          seq("set-option", $.attr),
        ),
        ")",
      ),

    // --- Basic tokens and helper rules -------------------------------

    // A keyword is a colon followed by a symbol (e.g. ":conclusion")
    keyword: ($) => token(seq(":", /[^()\s]+/)),

    // A symbol is any non–whitespace sequence that does not contain parens.
    symbol: ($) => token(/[^()\s]+/),

    // A string is a double–quoted sequence with backslash escapes.
    string: ($) => token(seq('"', /(?:\\.|[^"\\])*/, '"')),

    // A numeral is one or more digits.
    numeral: ($) => token(/\d+/),

    // A literal category is one of the fixed quoted strings.
    lit_category: ($) =>
      token(
        choice(
          "'<numeral>'",
          "'<decimal>'",
          "'<rational>'",
          "'<binary>'",
          "'<hexadecimal>'",
          "'<string>'",
        ),
      ),

    // A term is defined by four alternatives:
    //   - a “bang” term: (! <term> <attr>+)
    //   - an "eo::match" term with its internal structure
    //   - a list whose first token is a symbol and at least one term follows
    //   - a plain symbol
    term: ($) =>
      choice(
        // (! <term> <attr>+)
        seq("(", "!", $.term, repeat1($.attr), ")"),
        // (eo::match (<typed-param>*) <term> ((<term> <term>)+))
        seq(
          "(",
          "eo::match",
          "(",
          repeat($.typed_param),
          ")",
          $.term,
          "(",
          repeat1(seq("(", $.term, $.term, ")")),
          ")",
          ")",
        ),
        // (<symbol> <term>+)
        seq("(", $.symbol, repeat1($.term), ")"),
        // A plain symbol
        $.symbol,
      ),

    // In this grammar a type is just a term.
    type: ($) => $.term,

    // A typed parameter is a list: (<symbol> <type> <attr>*)
    typed_param: ($) => seq("(", $.symbol, $.type, repeat($.attr), ")"),

    // A sort declaration is a list: (<symbol> <numeral>)
    sort_dec: ($) => seq("(", $.symbol, $.numeral, ")"),

    // A selector declaration is a list: (<symbol> <type>)
    sel_dec: ($) => seq("(", $.symbol, $.type, ")"),

    // A constructor declaration is a list: (<symbol> <sel-dec>*)
    cons_dec: ($) => seq("(", $.symbol, repeat($.sel_dec), ")"),

    // A datatype declaration is a list of one or more cons_dec: (<cons-dec>+)
    datatype_dec: ($) => seq("(", repeat1($.cons_dec), ")"),

    // An assumption is: :assumption <term>
    assumption: ($) => seq(":assumption", $.term),

    // Premises may be written as a simple–premises or a premise list.
    premises: ($) =>
      choice($.simple_premises, seq(":premise-list", $.term, $.term)),

    // A simple premises is: :premises (<term>*)
    simple_premises: ($) => seq(":premises", "(", repeat($.term), ")"),

    // Arguments are written as: :args (<term>*)
    arguments: ($) => seq(":args", "(", repeat($.term), ")"),

    // Requirements are written as: :requires ((<term> <term>)*)
    reqs: ($) => seq(":requires", "(", repeat(seq($.term, $.term)), ")"),

    // For convenience, we let <sexpr> be an alias for <term>.
    sexpr: ($) => $.term,

    // --- The attr Rule ---
    // An attribute consists of a keyword optionally followed by a term.
    attr: ($) => seq($.keyword, optional($.term)),

    // A comment starts with ";" and continues to the end of the line.
    comment: ($) => token(seq(";", /.*/)),
  },
});
