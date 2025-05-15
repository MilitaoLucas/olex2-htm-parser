/**
 * @file Olex2htm grammar for tree-sitter
 * @author Lucas Militão <lucas.milito@usp.br> (with modifications)
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const HTML = require('./tree-sitter-html/grammar');

module.exports = grammar(HTML, {
  name: "html", // Or your custom grammar name like "olex2htm"
  
  extras: HTML.extras,

  inline: $ => HTML.inline ? HTML.inline($) : [], 
  conflicts: $ => HTML.conflicts ? HTML.conflicts($) : [],

  rules: {
    ...HTML.rules,
    comment: $ => seq(
      '<!--',
      repeat($._custom_comment_item),
      '-->'),
    _custom_comment_item: $ => choice(
      $.custom_directive_block,
      $.custom_plain_comment_segment
    ),

    custom_directive_block: $ => seq(
      $.custom_directive_name,
      repeat($.custom_directive_argument_text)
    ),

    custom_directive_name: $ => /#[\w\.]+/,
    custom_directive_argument_text: $ => token(prec(-1, /[^#]+/)),
    custom_plain_comment_segment: $ => token(prec(-2, /[^-<>-]+/)),
  },
});
