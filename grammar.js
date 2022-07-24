/***
 * this is not intended to be a full-blown JS parser bolted onto the side of the
 * CSS parser.  it's an attempt to tokenize the most common contents of JS
 * string-template substitutions used in CSS-in-JS contexts.  complex JS
 * expressions will probably cause this parser to fail, but you shouldn't be
 * using complex JS expressions in your CSS-in-JS anyway.
 ***/

module.exports = grammar(require('../grammar'), {
  name: 'my_grammar',

  rules: {
    /* new rules specific to CSS-in-JS */

    _js_identifier: $ => /[$_a-zA-Z0-9]+/,

    _js_string: $ => token(choice(
      seq("'", /([^'\n]|\\(.|\n))*/, "'"),
      seq('"', /([^"\n]|\\(.|\n))*/, '"'),
      seq('`', /([^`\n]|\\(.|\n))*/, '`')
    )),

    _js_expr: $ => choice(
      $._js_string,
      prec.right(1, seq($._js_expr, /\+\-\*\/%/, $._js_expr)), // foo + bar
      prec.right(1, seq($._js_expr, '??', $._js_expr)), // foo ?? bar
      prec.right(0, seq($._js_expr, '?', $._js_expr, ':', $._js_expr)), // foo ? bar : baz
      seq(
	$._js_identifier,
	optional(choice(
	  seq(/\??\./, $._js_identifier), // foo?.bar
	  seq(optional(/\??\./), '(', optional($._js_args), ')'), // foo?.(bar)
	  seq(optional(/\??\./), '[', $._js_expr, ']') // foo?.[bar]
	))
      )
    ),

    _js_param: $ => choice(
      $._js_identifier,
      seq('{', $._js_params, '}')
    ),

    _js_params: $ => seq(
      $._js_param,
      repeat(seq(',', $._js_param))
    ),

    _js_args: $ => seq(
      $._js_expr,
      repeat(seq(
	',',
	$._js_expr
      ))
    ),

    _js_fat_arrow_function: $ => seq(
      choice(
	$._js_identifier,
	seq('(', optional($._js_params), ')')
      ),
      '=>',
      $._js_expr
    ),

    js_interpolation: $ => seq(
      '${',
      choice(
	$._js_expr,
	$._js_fat_arrow_function
      ),
      '}'
    ),

    /* re-exports of CSS grammar rules so we can reference them */

    identifier: ($, original) => original,
    _value: ($, original) => original,
    important: ($, original) => original,

    /* updates to original CSS grammar rules */
    
    _top_level_item: ($, original) => choice(
      original,
      $.js_interpolation
    ),
    
    _block_item: ($, original) => choice(
      original,
      seq($.js_interpolation, optional(';'))
    ),
    
    declaration: ($, original) => choice(
      original,
      seq(
	alias($.identifier, $.property_name), // keep alias from CSS rule
	':',
	$.js_interpolation,
	repeat(seq(
          optional(','),
          $._value
	)),
	optional($.important),
	';'
      )
    )
  }
});
