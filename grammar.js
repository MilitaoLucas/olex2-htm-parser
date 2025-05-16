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

    _node: $ => choice(
      $.doctype,
      $.entity,
      $.text,
      $.element,
      $.script_element,
      $.style_element,
      $.comment,
      $.include_keyword,
    ),

    // Override the comment rule
    comment: $ => choice(
      $.include_comment,
      $.normal_comment
    ),

    normal_comment: $ => seq(
      '<!--',
      optional(/\s*?/),
      seq(
        /[^#]/,
        optional($._text)),
      '-->'
    ),
    // Special case for include comments
    include_comment: $ => seq(
      '<!--',
      optional(/\s*?/),
      $.include_keyword,
      optional(/\s*?/),
      optional($._text),
      '-->'
    ),

    include_keyword: $ => '#include',
    _text: (_) => /[^-^-]*?/,
  }
});
