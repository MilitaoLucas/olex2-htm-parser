#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_attribute_value = 10,
  sym_entity = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_quoted_attribute_value_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_quoted_attribute_value_token2 = 15,
  sym_text = 16,
  anon_sym_LT_BANG_DASH_DASH = 17,
  anon_sym_DASH_DASH_GT = 18,
  sym_custom_directive_name = 19,
  sym__start_tag_name = 20,
  sym__script_start_tag_name = 21,
  sym__style_start_tag_name = 22,
  sym__end_tag_name = 23,
  sym_erroneous_end_tag_name = 24,
  sym__implicit_end_tag = 25,
  sym_raw_text = 26,
  sym_document = 27,
  sym_doctype = 28,
  sym__node = 29,
  sym_element = 30,
  sym_script_element = 31,
  sym_style_element = 32,
  sym_start_tag = 33,
  sym_script_start_tag = 34,
  sym_style_start_tag = 35,
  sym_self_closing_tag = 36,
  sym_end_tag = 37,
  sym_erroneous_end_tag = 38,
  sym_attribute = 39,
  sym_quoted_attribute_value = 40,
  aux_sym_document_repeat1 = 41,
  aux_sym_start_tag_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_custom_directive_name] = "custom_directive_name",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_custom_directive_name] = sym_custom_directive_name,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_custom_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 9,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 10,
  [25] = 12,
  [26] = 13,
  [27] = 14,
  [28] = 15,
  [29] = 16,
  [30] = 17,
  [31] = 31,
  [32] = 22,
  [33] = 21,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 37,
  [40] = 40,
  [41] = 35,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 45,
  [52] = 52,
  [53] = 53,
  [54] = 48,
  [55] = 53,
  [56] = 56,
  [57] = 52,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 49,
  [64] = 50,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 59,
  [69] = 69,
  [70] = 60,
  [71] = 69,
  [72] = 72,
  [73] = 72,
  [74] = 62,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 78,
  [87] = 82,
  [88] = 88,
  [89] = 85,
  [90] = 81,
  [91] = 84,
  [92] = 88,
  [93] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 79,
        '#', 20,
        '&', 3,
        '\'', 76,
        '-', 6,
        '/', 8,
        '<', 29,
        '=', 33,
        '>', 27,
        'D', 12,
        'd', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 17:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(82);
      END_STATE();
    case 18:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(26);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '<') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(82);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_custom_directive_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21, .external_lex_state = 2},
  [3] = {.lex_state = 21, .external_lex_state = 2},
  [4] = {.lex_state = 21, .external_lex_state = 2},
  [5] = {.lex_state = 21, .external_lex_state = 2},
  [6] = {.lex_state = 21, .external_lex_state = 2},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21, .external_lex_state = 2},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21, .external_lex_state = 2},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21, .external_lex_state = 2},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21, .external_lex_state = 2},
  [22] = {.lex_state = 21, .external_lex_state = 2},
  [23] = {.lex_state = 21, .external_lex_state = 2},
  [24] = {.lex_state = 21, .external_lex_state = 2},
  [25] = {.lex_state = 21, .external_lex_state = 2},
  [26] = {.lex_state = 21, .external_lex_state = 2},
  [27] = {.lex_state = 21, .external_lex_state = 2},
  [28] = {.lex_state = 21, .external_lex_state = 2},
  [29] = {.lex_state = 21, .external_lex_state = 2},
  [30] = {.lex_state = 21, .external_lex_state = 2},
  [31] = {.lex_state = 21, .external_lex_state = 2},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 7, .external_lex_state = 3},
  [36] = {.lex_state = 7, .external_lex_state = 3},
  [37] = {.lex_state = 7, .external_lex_state = 3},
  [38] = {.lex_state = 7, .external_lex_state = 3},
  [39] = {.lex_state = 7, .external_lex_state = 3},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7, .external_lex_state = 3},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 4},
  [49] = {.lex_state = 7, .external_lex_state = 3},
  [50] = {.lex_state = 7, .external_lex_state = 3},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0, .external_lex_state = 5},
  [53] = {.lex_state = 0, .external_lex_state = 4},
  [54] = {.lex_state = 0, .external_lex_state = 4},
  [55] = {.lex_state = 0, .external_lex_state = 4},
  [56] = {.lex_state = 7, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 5},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 0, .external_lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0, .external_lex_state = 4},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 4},
  [67] = {.lex_state = 0, .external_lex_state = 4},
  [68] = {.lex_state = 0, .external_lex_state = 6},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0, .external_lex_state = 7},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0, .external_lex_state = 8},
  [89] = {.lex_state = 0, .external_lex_state = 7},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0, .external_lex_state = 8},
  [93] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_custom_directive_name] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(83),
    [sym_doctype] = STATE(7),
    [sym__node] = STATE(7),
    [sym_element] = STATE(7),
    [sym_script_element] = STATE(7),
    [sym_style_element] = STATE(7),
    [sym_start_tag] = STATE(2),
    [sym_script_start_tag] = STATE(48),
    [sym_style_start_tag] = STATE(53),
    [sym_self_closing_tag] = STATE(33),
    [sym_erroneous_end_tag] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LT_SLASH] = ACTIONS(9),
    [sym_entity] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(13), 1,
      anon_sym_LT_BANG,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    ACTIONS(21), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(32), 1,
      sym_end_tag,
    STATE(54), 1,
      sym_script_start_tag,
    STATE(55), 1,
      sym_style_start_tag,
    ACTIONS(19), 2,
      sym_entity,
      sym_text,
    STATE(3), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [41] = 11,
    ACTIONS(13), 1,
      anon_sym_LT_BANG,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_end_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(54), 1,
      sym_script_start_tag,
    STATE(55), 1,
      sym_style_start_tag,
    ACTIONS(23), 2,
      sym_entity,
      sym_text,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [82] = 11,
    ACTIONS(13), 1,
      anon_sym_LT_BANG,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    ACTIONS(29), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(27), 1,
      sym_end_tag,
    STATE(54), 1,
      sym_script_start_tag,
    STATE(55), 1,
      sym_style_start_tag,
    ACTIONS(23), 2,
      sym_entity,
      sym_text,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [123] = 11,
    ACTIONS(13), 1,
      anon_sym_LT_BANG,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    ACTIONS(33), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(22), 1,
      sym_end_tag,
    STATE(54), 1,
      sym_script_start_tag,
    STATE(55), 1,
      sym_style_start_tag,
    ACTIONS(31), 2,
      sym_entity,
      sym_text,
    STATE(4), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [164] = 10,
    ACTIONS(35), 1,
      anon_sym_LT_BANG,
    ACTIONS(38), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(47), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(54), 1,
      sym_script_start_tag,
    STATE(55), 1,
      sym_style_start_tag,
    ACTIONS(44), 2,
      sym_entity,
      sym_text,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [202] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LT_SLASH,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_tag,
    STATE(33), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_script_start_tag,
    STATE(53), 1,
      sym_style_start_tag,
    ACTIONS(51), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [240] = 10,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LT_BANG,
    ACTIONS(56), 1,
      anon_sym_LT,
    ACTIONS(59), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_tag,
    STATE(33), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_script_start_tag,
    STATE(53), 1,
      sym_style_start_tag,
    ACTIONS(62), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [278] = 2,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(65), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [289] = 2,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [300] = 2,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(73), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [311] = 2,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [322] = 2,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [333] = 2,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [344] = 2,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [355] = 2,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [366] = 2,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [377] = 2,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(101), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [388] = 2,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [399] = 2,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [410] = 2,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(109), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [421] = 2,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [432] = 2,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(105), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [443] = 2,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(69), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [454] = 2,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(77), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [465] = 2,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(81), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [476] = 2,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [487] = 2,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [498] = 2,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(93), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [509] = 2,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(97), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [520] = 2,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [531] = 2,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [542] = 2,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [553] = 2,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [564] = 3,
    ACTIONS(123), 1,
      sym_attribute_name,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(35), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [576] = 4,
    ACTIONS(126), 1,
      anon_sym_GT,
    ACTIONS(128), 1,
      anon_sym_SLASH_GT,
    ACTIONS(130), 1,
      sym_attribute_name,
    STATE(35), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [590] = 4,
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(132), 1,
      anon_sym_GT,
    ACTIONS(134), 1,
      anon_sym_SLASH_GT,
    STATE(38), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [604] = 4,
    ACTIONS(126), 1,
      anon_sym_GT,
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(136), 1,
      anon_sym_SLASH_GT,
    STATE(35), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [618] = 4,
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(132), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      anon_sym_SLASH_GT,
    STATE(36), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [632] = 3,
    ACTIONS(140), 1,
      anon_sym_GT,
    ACTIONS(142), 1,
      sym_attribute_name,
    STATE(41), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [643] = 3,
    ACTIONS(121), 1,
      anon_sym_GT,
    ACTIONS(144), 1,
      sym_attribute_name,
    STATE(41), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [654] = 3,
    ACTIONS(142), 1,
      sym_attribute_name,
    ACTIONS(147), 1,
      anon_sym_GT,
    STATE(40), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [665] = 3,
    ACTIONS(142), 1,
      sym_attribute_name,
    ACTIONS(149), 1,
      anon_sym_GT,
    STATE(44), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [676] = 3,
    ACTIONS(142), 1,
      sym_attribute_name,
    ACTIONS(151), 1,
      anon_sym_GT,
    STATE(41), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [687] = 2,
    ACTIONS(155), 1,
      anon_sym_EQ,
    ACTIONS(153), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [696] = 4,
    ACTIONS(157), 1,
      sym_attribute_value,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_quoted_attribute_value,
  [709] = 4,
    ACTIONS(163), 1,
      sym_attribute_value,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_quoted_attribute_value,
  [722] = 3,
    ACTIONS(169), 1,
      anon_sym_LT_SLASH,
    ACTIONS(171), 1,
      sym_raw_text,
    STATE(19), 1,
      sym_end_tag,
  [732] = 1,
    ACTIONS(173), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [738] = 1,
    ACTIONS(175), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [744] = 2,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(153), 2,
      anon_sym_GT,
      sym_attribute_name,
  [752] = 3,
    ACTIONS(179), 1,
      sym__start_tag_name,
    ACTIONS(181), 1,
      sym__script_start_tag_name,
    ACTIONS(183), 1,
      sym__style_start_tag_name,
  [762] = 3,
    ACTIONS(169), 1,
      anon_sym_LT_SLASH,
    ACTIONS(185), 1,
      sym_raw_text,
    STATE(10), 1,
      sym_end_tag,
  [772] = 3,
    ACTIONS(187), 1,
      anon_sym_LT_SLASH,
    ACTIONS(189), 1,
      sym_raw_text,
    STATE(23), 1,
      sym_end_tag,
  [782] = 3,
    ACTIONS(187), 1,
      anon_sym_LT_SLASH,
    ACTIONS(191), 1,
      sym_raw_text,
    STATE(24), 1,
      sym_end_tag,
  [792] = 1,
    ACTIONS(193), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [798] = 3,
    ACTIONS(181), 1,
      sym__script_start_tag_name,
    ACTIONS(183), 1,
      sym__style_start_tag_name,
    ACTIONS(195), 1,
      sym__start_tag_name,
  [808] = 1,
    ACTIONS(193), 2,
      anon_sym_GT,
      sym_attribute_name,
  [813] = 2,
    ACTIONS(197), 1,
      sym__end_tag_name,
    ACTIONS(199), 1,
      sym_erroneous_end_tag_name,
  [820] = 2,
    ACTIONS(169), 1,
      anon_sym_LT_SLASH,
    STATE(16), 1,
      sym_end_tag,
  [827] = 1,
    ACTIONS(201), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [832] = 2,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      aux_sym_quoted_attribute_value_token2,
  [839] = 1,
    ACTIONS(173), 2,
      anon_sym_GT,
      sym_attribute_name,
  [844] = 1,
    ACTIONS(175), 2,
      anon_sym_GT,
      sym_attribute_name,
  [849] = 1,
    ACTIONS(207), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [854] = 1,
    ACTIONS(209), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [859] = 1,
    ACTIONS(211), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [864] = 2,
    ACTIONS(199), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(213), 1,
      sym__end_tag_name,
  [871] = 2,
    ACTIONS(187), 1,
      anon_sym_LT_SLASH,
    STATE(28), 1,
      sym_end_tag,
  [878] = 2,
    ACTIONS(187), 1,
      anon_sym_LT_SLASH,
    STATE(29), 1,
      sym_end_tag,
  [885] = 2,
    ACTIONS(169), 1,
      anon_sym_LT_SLASH,
    STATE(15), 1,
      sym_end_tag,
  [892] = 2,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      aux_sym_quoted_attribute_value_token1,
  [899] = 2,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_quoted_attribute_value_token1,
  [906] = 2,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_quoted_attribute_value_token2,
  [913] = 1,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
  [917] = 1,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
  [921] = 1,
    ACTIONS(227), 1,
      sym__doctype,
  [925] = 1,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
  [929] = 1,
    ACTIONS(229), 1,
      anon_sym_GT,
  [933] = 1,
    ACTIONS(231), 1,
      anon_sym_GT,
  [937] = 1,
    ACTIONS(233), 1,
      aux_sym_doctype_token1,
  [941] = 1,
    ACTIONS(235), 1,
      anon_sym_GT,
  [945] = 1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [949] = 1,
    ACTIONS(239), 1,
      anon_sym_GT,
  [953] = 1,
    ACTIONS(241), 1,
      sym_erroneous_end_tag_name,
  [957] = 1,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
  [961] = 1,
    ACTIONS(243), 1,
      anon_sym_GT,
  [965] = 1,
    ACTIONS(213), 1,
      sym__end_tag_name,
  [969] = 1,
    ACTIONS(199), 1,
      sym_erroneous_end_tag_name,
  [973] = 1,
    ACTIONS(245), 1,
      aux_sym_doctype_token1,
  [977] = 1,
    ACTIONS(247), 1,
      anon_sym_GT,
  [981] = 1,
    ACTIONS(197), 1,
      sym__end_tag_name,
  [985] = 1,
    ACTIONS(249), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 202,
  [SMALL_STATE(8)] = 240,
  [SMALL_STATE(9)] = 278,
  [SMALL_STATE(10)] = 289,
  [SMALL_STATE(11)] = 300,
  [SMALL_STATE(12)] = 311,
  [SMALL_STATE(13)] = 322,
  [SMALL_STATE(14)] = 333,
  [SMALL_STATE(15)] = 344,
  [SMALL_STATE(16)] = 355,
  [SMALL_STATE(17)] = 366,
  [SMALL_STATE(18)] = 377,
  [SMALL_STATE(19)] = 388,
  [SMALL_STATE(20)] = 399,
  [SMALL_STATE(21)] = 410,
  [SMALL_STATE(22)] = 421,
  [SMALL_STATE(23)] = 432,
  [SMALL_STATE(24)] = 443,
  [SMALL_STATE(25)] = 454,
  [SMALL_STATE(26)] = 465,
  [SMALL_STATE(27)] = 476,
  [SMALL_STATE(28)] = 487,
  [SMALL_STATE(29)] = 498,
  [SMALL_STATE(30)] = 509,
  [SMALL_STATE(31)] = 520,
  [SMALL_STATE(32)] = 531,
  [SMALL_STATE(33)] = 542,
  [SMALL_STATE(34)] = 553,
  [SMALL_STATE(35)] = 564,
  [SMALL_STATE(36)] = 576,
  [SMALL_STATE(37)] = 590,
  [SMALL_STATE(38)] = 604,
  [SMALL_STATE(39)] = 618,
  [SMALL_STATE(40)] = 632,
  [SMALL_STATE(41)] = 643,
  [SMALL_STATE(42)] = 654,
  [SMALL_STATE(43)] = 665,
  [SMALL_STATE(44)] = 676,
  [SMALL_STATE(45)] = 687,
  [SMALL_STATE(46)] = 696,
  [SMALL_STATE(47)] = 709,
  [SMALL_STATE(48)] = 722,
  [SMALL_STATE(49)] = 732,
  [SMALL_STATE(50)] = 738,
  [SMALL_STATE(51)] = 744,
  [SMALL_STATE(52)] = 752,
  [SMALL_STATE(53)] = 762,
  [SMALL_STATE(54)] = 772,
  [SMALL_STATE(55)] = 782,
  [SMALL_STATE(56)] = 792,
  [SMALL_STATE(57)] = 798,
  [SMALL_STATE(58)] = 808,
  [SMALL_STATE(59)] = 813,
  [SMALL_STATE(60)] = 820,
  [SMALL_STATE(61)] = 827,
  [SMALL_STATE(62)] = 832,
  [SMALL_STATE(63)] = 839,
  [SMALL_STATE(64)] = 844,
  [SMALL_STATE(65)] = 849,
  [SMALL_STATE(66)] = 854,
  [SMALL_STATE(67)] = 859,
  [SMALL_STATE(68)] = 864,
  [SMALL_STATE(69)] = 871,
  [SMALL_STATE(70)] = 878,
  [SMALL_STATE(71)] = 885,
  [SMALL_STATE(72)] = 892,
  [SMALL_STATE(73)] = 899,
  [SMALL_STATE(74)] = 906,
  [SMALL_STATE(75)] = 913,
  [SMALL_STATE(76)] = 917,
  [SMALL_STATE(77)] = 921,
  [SMALL_STATE(78)] = 925,
  [SMALL_STATE(79)] = 929,
  [SMALL_STATE(80)] = 933,
  [SMALL_STATE(81)] = 937,
  [SMALL_STATE(82)] = 941,
  [SMALL_STATE(83)] = 945,
  [SMALL_STATE(84)] = 949,
  [SMALL_STATE(85)] = 953,
  [SMALL_STATE(86)] = 957,
  [SMALL_STATE(87)] = 961,
  [SMALL_STATE(88)] = 965,
  [SMALL_STATE(89)] = 969,
  [SMALL_STATE(90)] = 973,
  [SMALL_STATE(91)] = 977,
  [SMALL_STATE(92)] = 981,
  [SMALL_STATE(93)] = 985,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [237] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
  },
  [2] = {
    [ts_external_token__implicit_end_tag] = true,
  },
  [3] = {
    [ts_external_token_SLASH_GT] = true,
  },
  [4] = {
    [ts_external_token_raw_text] = true,
  },
  [5] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
  },
  [6] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [7] = {
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_html_external_scanner_create(void);
void tree_sitter_html_external_scanner_destroy(void *);
bool tree_sitter_html_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_html_external_scanner_serialize(void *, char *);
void tree_sitter_html_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_html(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_html_external_scanner_create,
      tree_sitter_html_external_scanner_destroy,
      tree_sitter_html_external_scanner_scan,
      tree_sitter_html_external_scanner_serialize,
      tree_sitter_html_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
