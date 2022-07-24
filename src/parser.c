#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 337
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 9
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  sym_nesting_selector = 14,
  anon_sym_STAR = 15,
  anon_sym_DOT = 16,
  anon_sym_COLON = 17,
  anon_sym_COLON_COLON = 18,
  anon_sym_POUND = 19,
  anon_sym_LBRACK = 20,
  anon_sym_EQ = 21,
  anon_sym_TILDE_EQ = 22,
  anon_sym_CARET_EQ = 23,
  anon_sym_PIPE_EQ = 24,
  anon_sym_STAR_EQ = 25,
  anon_sym_DOLLAR_EQ = 26,
  anon_sym_RBRACK = 27,
  anon_sym_GT = 28,
  anon_sym_TILDE = 29,
  anon_sym_PLUS = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  sym_important = 33,
  anon_sym_LPAREN2 = 34,
  anon_sym_and = 35,
  anon_sym_or = 36,
  anon_sym_not = 37,
  anon_sym_only = 38,
  anon_sym_selector = 39,
  aux_sym_color_value_token1 = 40,
  sym_string_value = 41,
  aux_sym_integer_value_token1 = 42,
  aux_sym_float_value_token1 = 43,
  sym_unit = 44,
  anon_sym_DASH = 45,
  anon_sym_SLASH = 46,
  sym_identifier = 47,
  sym_at_keyword = 48,
  sym_comment = 49,
  sym_plain_value = 50,
  sym__js_identifier = 51,
  sym__js_string = 52,
  aux_sym__js_expr_token1 = 53,
  anon_sym_QMARK_QMARK = 54,
  anon_sym_QMARK = 55,
  aux_sym__js_expr_token2 = 56,
  anon_sym_EQ_GT = 57,
  anon_sym_DOLLAR_LBRACE = 58,
  sym__descendant_operator = 59,
  sym_stylesheet = 60,
  sym_import_statement = 61,
  sym_media_statement = 62,
  sym_charset_statement = 63,
  sym_namespace_statement = 64,
  sym_keyframes_statement = 65,
  sym_keyframe_block_list = 66,
  sym_keyframe_block = 67,
  sym_supports_statement = 68,
  sym_at_rule = 69,
  sym_rule_set = 70,
  sym_selectors = 71,
  sym_block = 72,
  sym__selector = 73,
  sym_universal_selector = 74,
  sym_class_selector = 75,
  sym_pseudo_class_selector = 76,
  sym_pseudo_element_selector = 77,
  sym_id_selector = 78,
  sym_attribute_selector = 79,
  sym_child_selector = 80,
  sym_descendant_selector = 81,
  sym_sibling_selector = 82,
  sym_adjacent_sibling_selector = 83,
  sym_pseudo_class_arguments = 84,
  sym_declaration = 85,
  sym_last_declaration = 86,
  sym__query = 87,
  sym_feature_query = 88,
  sym_parenthesized_query = 89,
  sym_binary_query = 90,
  sym_unary_query = 91,
  sym_selector_query = 92,
  sym__value = 93,
  sym_parenthesized_value = 94,
  sym_color_value = 95,
  sym_integer_value = 96,
  sym_float_value = 97,
  sym_call_expression = 98,
  sym_binary_expression = 99,
  sym_arguments = 100,
  sym__js_expr = 101,
  sym__js_param = 102,
  sym__js_params = 103,
  sym__js_args = 104,
  sym__js_fat_arrow_function = 105,
  sym_js_interpolation = 106,
  aux_sym_stylesheet_repeat1 = 107,
  aux_sym_import_statement_repeat1 = 108,
  aux_sym_keyframe_block_list_repeat1 = 109,
  aux_sym_selectors_repeat1 = 110,
  aux_sym_block_repeat1 = 111,
  aux_sym_pseudo_class_arguments_repeat1 = 112,
  aux_sym_pseudo_class_arguments_repeat2 = 113,
  aux_sym_declaration_repeat1 = 114,
  aux_sym_arguments_repeat1 = 115,
  aux_sym__js_params_repeat1 = 116,
  aux_sym__js_args_repeat1 = 117,
  alias_sym_class_name = 118,
  alias_sym_feature_name = 119,
  alias_sym_function_name = 120,
  alias_sym_id_name = 121,
  alias_sym_keyframes_name = 122,
  alias_sym_keyword_query = 123,
  alias_sym_namespace_name = 124,
  alias_sym_property_name = 125,
  alias_sym_tag_name = 126,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "attribute_name",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym__js_identifier] = "_js_identifier",
  [sym__js_string] = "_js_string",
  [aux_sym__js_expr_token1] = "_js_expr_token1",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_QMARK] = "\?",
  [aux_sym__js_expr_token2] = "_js_expr_token2",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym__descendant_operator] = "_descendant_operator",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym__js_expr] = "_js_expr",
  [sym__js_param] = "_js_param",
  [sym__js_params] = "_js_params",
  [sym__js_args] = "_js_args",
  [sym__js_fat_arrow_function] = "_js_fat_arrow_function",
  [sym_js_interpolation] = "js_interpolation",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__js_params_repeat1] = "_js_params_repeat1",
  [aux_sym__js_args_repeat1] = "_js_args_repeat1",
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__js_identifier] = sym__js_identifier,
  [sym__js_string] = sym__js_string,
  [aux_sym__js_expr_token1] = aux_sym__js_expr_token1,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym__js_expr_token2] = aux_sym__js_expr_token2,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym__js_expr] = sym__js_expr,
  [sym__js_param] = sym__js_param,
  [sym__js_params] = sym__js_params,
  [sym__js_args] = sym__js_args,
  [sym__js_fat_arrow_function] = sym__js_fat_arrow_function,
  [sym_js_interpolation] = sym_js_interpolation,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym__js_params_repeat1] = aux_sym__js_params_repeat1,
  [aux_sym__js_args_repeat1] = aux_sym__js_args_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__js_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__js_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__js_expr_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__js_expr_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__js_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__js_param] = {
    .visible = false,
    .named = true,
  },
  [sym__js_params] = {
    .visible = false,
    .named = true,
  },
  [sym__js_args] = {
    .visible = false,
    .named = true,
  },
  [sym__js_fat_arrow_function] = {
    .visible = false,
    .named = true,
  },
  [sym_js_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__js_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__js_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_keyword_query,
  },
  [4] = {
    [1] = alias_sym_class_name,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [2] = alias_sym_class_name,
  },
  [10] = {
    [2] = alias_sym_tag_name,
  },
  [11] = {
    [2] = alias_sym_id_name,
  },
  [12] = {
    [1] = alias_sym_namespace_name,
  },
  [13] = {
    [0] = alias_sym_property_name,
  },
  [14] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '~') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '~') ADVANCE(119);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '~') ADVANCE(119);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '~') ADVANCE(119);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(264);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '{') ADVANCE(269);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(268);
      END_STATE();
    case 38:
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'k') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 69:
      if (lookahead == '{') ADVANCE(269);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 76:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 77:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(258);
      END_STATE();
    case 78:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(7);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '`') ADVANCE(263);
      END_STATE();
    case 83:
      if (eof) ADVANCE(86);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '~') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 84:
      if (eof) ADVANCE(86);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '~') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '~') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(268);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'y') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '_') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(191);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(23);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(23);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(228);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(233);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(211);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'y') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'y') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(77);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__js_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__js_string);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__js_string);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__js_string);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__js_string);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__js_expr_token1);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '?') ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__js_expr_token2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 84},
  [2] = {.lex_state = 84},
  [3] = {.lex_state = 84},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 84},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 84},
  [8] = {.lex_state = 84},
  [9] = {.lex_state = 84},
  [10] = {.lex_state = 84},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 3, .external_lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 84},
  [19] = {.lex_state = 84},
  [20] = {.lex_state = 84},
  [21] = {.lex_state = 84},
  [22] = {.lex_state = 84},
  [23] = {.lex_state = 84},
  [24] = {.lex_state = 84},
  [25] = {.lex_state = 1, .external_lex_state = 1},
  [26] = {.lex_state = 84},
  [27] = {.lex_state = 84},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 84},
  [30] = {.lex_state = 84},
  [31] = {.lex_state = 84},
  [32] = {.lex_state = 84},
  [33] = {.lex_state = 84},
  [34] = {.lex_state = 84},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 84},
  [37] = {.lex_state = 84},
  [38] = {.lex_state = 84},
  [39] = {.lex_state = 84},
  [40] = {.lex_state = 84},
  [41] = {.lex_state = 84},
  [42] = {.lex_state = 84},
  [43] = {.lex_state = 84},
  [44] = {.lex_state = 84},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 84},
  [47] = {.lex_state = 84},
  [48] = {.lex_state = 84},
  [49] = {.lex_state = 84},
  [50] = {.lex_state = 84},
  [51] = {.lex_state = 84},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 84},
  [54] = {.lex_state = 84},
  [55] = {.lex_state = 84},
  [56] = {.lex_state = 84},
  [57] = {.lex_state = 84},
  [58] = {.lex_state = 84},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 84},
  [61] = {.lex_state = 84},
  [62] = {.lex_state = 84},
  [63] = {.lex_state = 84},
  [64] = {.lex_state = 84},
  [65] = {.lex_state = 84},
  [66] = {.lex_state = 84},
  [67] = {.lex_state = 84},
  [68] = {.lex_state = 84},
  [69] = {.lex_state = 84},
  [70] = {.lex_state = 84},
  [71] = {.lex_state = 84},
  [72] = {.lex_state = 84},
  [73] = {.lex_state = 84},
  [74] = {.lex_state = 84},
  [75] = {.lex_state = 84},
  [76] = {.lex_state = 84},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 84, .external_lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 84, .external_lex_state = 1},
  [128] = {.lex_state = 84, .external_lex_state = 1},
  [129] = {.lex_state = 84, .external_lex_state = 1},
  [130] = {.lex_state = 84, .external_lex_state = 1},
  [131] = {.lex_state = 84, .external_lex_state = 1},
  [132] = {.lex_state = 84, .external_lex_state = 1},
  [133] = {.lex_state = 84, .external_lex_state = 1},
  [134] = {.lex_state = 84, .external_lex_state = 1},
  [135] = {.lex_state = 84, .external_lex_state = 1},
  [136] = {.lex_state = 84, .external_lex_state = 1},
  [137] = {.lex_state = 84, .external_lex_state = 1},
  [138] = {.lex_state = 84, .external_lex_state = 1},
  [139] = {.lex_state = 84, .external_lex_state = 1},
  [140] = {.lex_state = 84, .external_lex_state = 1},
  [141] = {.lex_state = 84, .external_lex_state = 1},
  [142] = {.lex_state = 84, .external_lex_state = 1},
  [143] = {.lex_state = 84, .external_lex_state = 1},
  [144] = {.lex_state = 16},
  [145] = {.lex_state = 84, .external_lex_state = 1},
  [146] = {.lex_state = 84, .external_lex_state = 1},
  [147] = {.lex_state = 84, .external_lex_state = 1},
  [148] = {.lex_state = 84, .external_lex_state = 1},
  [149] = {.lex_state = 84, .external_lex_state = 1},
  [150] = {.lex_state = 84, .external_lex_state = 1},
  [151] = {.lex_state = 84, .external_lex_state = 1},
  [152] = {.lex_state = 18},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 84, .external_lex_state = 1},
  [158] = {.lex_state = 84, .external_lex_state = 1},
  [159] = {.lex_state = 84, .external_lex_state = 1},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 84, .external_lex_state = 1},
  [162] = {.lex_state = 18},
  [163] = {.lex_state = 18},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 18},
  [166] = {.lex_state = 18},
  [167] = {.lex_state = 84, .external_lex_state = 1},
  [168] = {.lex_state = 18},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 18},
  [171] = {.lex_state = 84, .external_lex_state = 1},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 18},
  [174] = {.lex_state = 18},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 18},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 18},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 15},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 17},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 17},
  [188] = {.lex_state = 17},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 15},
  [191] = {.lex_state = 15},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 17},
  [195] = {.lex_state = 17},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 15},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 17},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 84},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 15},
  [225] = {.lex_state = 15},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 15},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 15},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 84},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 17},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 17},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 17},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 17},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 84},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 84},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 15},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 84},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 84},
  [303] = {.lex_state = 84},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 84},
  [307] = {.lex_state = 84},
  [308] = {.lex_state = 84},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 28},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 84},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 28},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 84},
  [327] = {.lex_state = 28},
  [328] = {.lex_state = 84},
  [329] = {.lex_state = 84},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 84},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 84},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 84},
  [336] = {.lex_state = 84},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__js_string] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym__js_expr_token2] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(324),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(293),
    [sym__selector] = STATE(147),
    [sym_universal_selector] = STATE(147),
    [sym_class_selector] = STATE(147),
    [sym_pseudo_class_selector] = STATE(147),
    [sym_pseudo_element_selector] = STATE(147),
    [sym_id_selector] = STATE(147),
    [sym_attribute_selector] = STATE(147),
    [sym_child_selector] = STATE(147),
    [sym_descendant_selector] = STATE(147),
    [sym_sibling_selector] = STATE(147),
    [sym_adjacent_sibling_selector] = STATE(147),
    [sym_declaration] = STATE(9),
    [sym_js_interpolation] = STATE(9),
    [aux_sym_stylesheet_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(33),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(20), 1,
      sym_js_interpolation,
    STATE(292), 1,
      sym_selectors,
    STATE(311), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(147), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [91] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_js_interpolation,
    STATE(292), 1,
      sym_selectors,
    STATE(314), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(4), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(147), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [182] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_js_interpolation,
    STATE(292), 1,
      sym_selectors,
    STATE(332), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(147), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [273] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_js_interpolation,
    STATE(292), 1,
      sym_selectors,
    STATE(319), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(7), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(147), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [364] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_js_interpolation,
    STATE(292), 1,
      sym_selectors,
    STATE(304), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(2), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(147), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [455] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_js_interpolation,
    STATE(292), 1,
      sym_selectors,
    STATE(322), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(147), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [546] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_ATimport,
    ACTIONS(74), 1,
      anon_sym_ATmedia,
    ACTIONS(77), 1,
      anon_sym_ATcharset,
    ACTIONS(80), 1,
      anon_sym_ATnamespace,
    ACTIONS(86), 1,
      anon_sym_ATsupports,
    ACTIONS(92), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(101), 1,
      anon_sym_COLON_COLON,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym_at_keyword,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(293), 1,
      sym_selectors,
    ACTIONS(83), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(89), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_js_interpolation,
      aux_sym_stylesheet_repeat1,
    STATE(147), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [632] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATimport,
    ACTIONS(9), 1,
      anon_sym_ATmedia,
    ACTIONS(11), 1,
      anon_sym_ATcharset,
    ACTIONS(13), 1,
      anon_sym_ATnamespace,
    ACTIONS(17), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_at_keyword,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(293), 1,
      sym_selectors,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_js_interpolation,
      aux_sym_stylesheet_repeat1,
    STATE(147), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [718] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_ATimport,
    ACTIONS(124), 1,
      anon_sym_ATmedia,
    ACTIONS(127), 1,
      anon_sym_ATcharset,
    ACTIONS(130), 1,
      anon_sym_ATnamespace,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      anon_sym_ATsupports,
    ACTIONS(144), 1,
      anon_sym_STAR,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_COLON_COLON,
    ACTIONS(156), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_at_keyword,
    ACTIONS(168), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(20), 1,
      sym_js_interpolation,
    STATE(292), 1,
      sym_selectors,
    ACTIONS(133), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(141), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(147), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [806] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      sym_nesting_selector,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(181), 1,
      sym_string_value,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym_plain_value,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(145), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [877] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(181), 1,
      sym_string_value,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      sym_nesting_selector,
    STATE(87), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(167), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [945] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_important,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    STATE(59), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(106), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1002] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_arguments,
    ACTIONS(215), 2,
      anon_sym_STAR,
      sym_string_value,
    ACTIONS(217), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(221), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(213), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1040] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      sym_important,
    STATE(84), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(106), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1094] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(227), 1,
      sym_important,
    STATE(82), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(106), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1148] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(229), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(171), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1190] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(157), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1232] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(235), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(129), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(237), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(241), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(245), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1332] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(247), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(148), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1374] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(249), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(143), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1416] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(251), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(141), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
    ACTIONS(257), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(259), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(253), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(263), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(267), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1544] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      anon_sym_LPAREN2,
    ACTIONS(280), 1,
      sym_string_value,
    ACTIONS(283), 1,
      aux_sym_integer_value_token1,
    ACTIONS(286), 1,
      aux_sym_float_value_token1,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_plain_value,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(272), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(106), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(295), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(299), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(305), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(309), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(311), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(315), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1751] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(323), 1,
      sym_string_value,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(260), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(263), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(267), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(327), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(329), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(335), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(339), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(343), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(345), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(305), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2041] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(242), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(315), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(299), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(353), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(357), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(309), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(359), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2250] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(246), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(245), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(345), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(136), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(329), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(367), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(371), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2459] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(379), 1,
      sym_important,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    STATE(106), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(381), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(311), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(387), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(295), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(367), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(371), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(391), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(357), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(391), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(327), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(343), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(359), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(339), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(381), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(335), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(387), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(353), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2967] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      sym_important,
    STATE(84), 1,
      aux_sym_declaration_repeat1,
    STATE(106), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_arguments,
    ACTIONS(215), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(221), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [3043] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_LPAREN2,
    ACTIONS(401), 1,
      sym_string_value,
    ACTIONS(404), 1,
      aux_sym_integer_value_token1,
    ACTIONS(407), 1,
      aux_sym_float_value_token1,
    ACTIONS(410), 1,
      sym_identifier,
    ACTIONS(413), 1,
      sym_plain_value,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(393), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3085] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(416), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3127] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(227), 1,
      sym_important,
    STATE(82), 1,
      aux_sym_declaration_repeat1,
    STATE(106), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3173] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      sym_important,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    STATE(106), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3219] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(280), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3265] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(424), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      sym_important,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    STATE(106), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_unit,
    ACTIONS(430), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(428), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_unit,
    ACTIONS(436), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(434), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3365] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(442), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3430] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(448), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3494] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(454), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(462), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(220), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(466), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3554] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3594] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(472), 1,
      sym_string_value,
    ACTIONS(474), 1,
      sym_plain_value,
    ACTIONS(476), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(81), 1,
      sym_js_interpolation,
    STATE(16), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3634] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(478), 1,
      sym_string_value,
    ACTIONS(480), 1,
      sym_plain_value,
    STATE(77), 1,
      sym_js_interpolation,
    STATE(15), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(482), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3698] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(488), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(492), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3786] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    ACTIONS(454), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(462), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(218), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3822] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(500), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3886] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(504), 1,
      sym_string_value,
    ACTIONS(506), 1,
      sym_plain_value,
    STATE(81), 1,
      sym_js_interpolation,
    STATE(13), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(508), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(512), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(518), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(516), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4001] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(520), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(272), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4028] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    STATE(80), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4065] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_string_value,
    STATE(93), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(125), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4102] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(526), 1,
      sym_string_value,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(534), 1,
      sym_plain_value,
    STATE(227), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4136] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(536), 1,
      anon_sym_SEMI,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(204), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4170] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_POUND,
    ACTIONS(542), 1,
      anon_sym_LPAREN2,
    ACTIONS(544), 1,
      sym_string_value,
    ACTIONS(546), 1,
      aux_sym_integer_value_token1,
    ACTIONS(548), 1,
      aux_sym_float_value_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(552), 1,
      sym_plain_value,
    STATE(91), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4204] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(554), 1,
      sym_string_value,
    ACTIONS(556), 1,
      sym_plain_value,
    STATE(225), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4238] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(189), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COLON,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_pseudo_class_arguments,
    ACTIONS(562), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4298] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(568), 1,
      sym_string_value,
    ACTIONS(570), 1,
      sym_plain_value,
    STATE(217), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4332] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(572), 1,
      sym_string_value,
    ACTIONS(574), 1,
      sym_plain_value,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4366] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(576), 1,
      sym_string_value,
    ACTIONS(578), 1,
      sym_plain_value,
    STATE(107), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4400] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(580), 1,
      sym_string_value,
    ACTIONS(582), 1,
      sym_plain_value,
    STATE(221), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4434] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(584), 1,
      sym_string_value,
    ACTIONS(586), 1,
      sym_plain_value,
    STATE(224), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4468] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_POUND,
    ACTIONS(542), 1,
      anon_sym_LPAREN2,
    ACTIONS(546), 1,
      aux_sym_integer_value_token1,
    ACTIONS(548), 1,
      aux_sym_float_value_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(588), 1,
      sym_string_value,
    ACTIONS(590), 1,
      sym_plain_value,
    STATE(173), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4502] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_POUND,
    ACTIONS(542), 1,
      anon_sym_LPAREN2,
    ACTIONS(546), 1,
      aux_sym_integer_value_token1,
    ACTIONS(548), 1,
      aux_sym_float_value_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(592), 1,
      sym_string_value,
    ACTIONS(594), 1,
      sym_plain_value,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4536] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(596), 1,
      sym_string_value,
    ACTIONS(598), 1,
      sym_plain_value,
    STATE(229), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4570] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_plain_value,
    STATE(200), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4604] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(606), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(604), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
  [4630] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(608), 1,
      sym_string_value,
    ACTIONS(610), 1,
      sym_plain_value,
    STATE(231), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(614), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_pseudo_class_arguments,
    ACTIONS(612), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(616), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(624), 1,
      anon_sym_COLON,
    ACTIONS(620), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COLON,
    ACTIONS(626), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COLON,
    ACTIONS(630), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_COLON,
    ACTIONS(634), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_COLON,
    ACTIONS(638), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_COLON,
    ACTIONS(642), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_COLON,
    ACTIONS(646), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_COLON,
    ACTIONS(650), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_COLON,
    ACTIONS(654), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(658), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COLON,
    ACTIONS(213), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COLON,
    ACTIONS(662), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(666), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(670), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(674), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_arguments,
    ACTIONS(215), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(221), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5040] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(682), 1,
      anon_sym_COLON_COLON,
    ACTIONS(684), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_LBRACK,
    ACTIONS(688), 1,
      anon_sym_GT,
    ACTIONS(690), 1,
      anon_sym_TILDE,
    ACTIONS(692), 1,
      anon_sym_PLUS,
    ACTIONS(694), 1,
      sym__descendant_operator,
    STATE(280), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [5080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_COLON,
    ACTIONS(696), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5100] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(682), 1,
      anon_sym_COLON_COLON,
    ACTIONS(684), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_LBRACK,
    ACTIONS(688), 1,
      anon_sym_GT,
    ACTIONS(690), 1,
      anon_sym_TILDE,
    ACTIONS(692), 1,
      anon_sym_PLUS,
    ACTIONS(694), 1,
      sym__descendant_operator,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      aux_sym_selectors_repeat1,
  [5140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(706), 1,
      anon_sym_COLON,
    ACTIONS(704), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(708), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_COLON,
    ACTIONS(712), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_COLON,
    ACTIONS(716), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(239), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_unit,
    ACTIONS(428), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(430), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(233), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(210), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_unit,
    ACTIONS(434), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(436), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5339] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(682), 1,
      anon_sym_COLON_COLON,
    ACTIONS(684), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_LBRACK,
    ACTIONS(688), 1,
      anon_sym_GT,
    ACTIONS(690), 1,
      anon_sym_TILDE,
    ACTIONS(692), 1,
      anon_sym_PLUS,
    ACTIONS(694), 1,
      sym__descendant_operator,
    ACTIONS(724), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_COLON,
    ACTIONS(213), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    ACTIONS(213), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5412] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(250), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_COLON,
    ACTIONS(213), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(211), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5481] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(265), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LBRACK,
    ACTIONS(740), 1,
      anon_sym_LPAREN2,
    ACTIONS(742), 1,
      anon_sym_QMARK,
    ACTIONS(744), 1,
      aux_sym__js_expr_token2,
    ACTIONS(736), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [5531] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(207), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(502), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5575] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(682), 1,
      anon_sym_COLON_COLON,
    ACTIONS(684), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_LBRACK,
    ACTIONS(688), 1,
      anon_sym_GT,
    ACTIONS(690), 1,
      anon_sym_TILDE,
    ACTIONS(692), 1,
      anon_sym_PLUS,
    ACTIONS(694), 1,
      sym__descendant_operator,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5610] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN2,
    ACTIONS(460), 1,
      anon_sym_selector,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(458), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(206), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(245), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(484), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5671] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(682), 1,
      anon_sym_COLON_COLON,
    ACTIONS(684), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_LBRACK,
    ACTIONS(688), 1,
      anon_sym_GT,
    ACTIONS(690), 1,
      anon_sym_TILDE,
    ACTIONS(692), 1,
      anon_sym_PLUS,
    ACTIONS(694), 1,
      sym__descendant_operator,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
  [5705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(450), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(494), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(510), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(444), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(514), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(468), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(490), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_SLASH,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_arguments,
    ACTIONS(215), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_SLASH,
    ACTIONS(750), 1,
      sym_unit,
    ACTIONS(428), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(752), 1,
      sym_unit,
    ACTIONS(434), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_QMARK,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
    ACTIONS(754), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [5906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_QMARK,
    ACTIONS(754), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [5922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_QMARK,
    ACTIONS(760), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [5938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_QMARK,
    ACTIONS(764), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [5954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
    ACTIONS(760), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [5972] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LBRACK,
    ACTIONS(740), 1,
      anon_sym_LPAREN2,
    ACTIONS(742), 1,
      anon_sym_QMARK,
    ACTIONS(744), 1,
      aux_sym__js_expr_token2,
    ACTIONS(770), 1,
      anon_sym_EQ_GT,
    ACTIONS(736), 3,
      anon_sym_RBRACE,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [5996] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    ACTIONS(776), 1,
      aux_sym_integer_value_token1,
    STATE(291), 1,
      sym_integer_value,
    ACTIONS(774), 2,
      sym_from,
      sym_to,
    STATE(194), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6017] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(780), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_block,
    STATE(223), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(782), 2,
      anon_sym_and,
      anon_sym_or,
  [6040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_SLASH,
    ACTIONS(512), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(508), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_SLASH,
    ACTIONS(500), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(482), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      aux_sym_integer_value_token1,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(291), 1,
      sym_integer_value,
    ACTIONS(774), 2,
      sym_from,
      sym_to,
    STATE(195), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6121] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    ACTIONS(791), 1,
      aux_sym_integer_value_token1,
    STATE(291), 1,
      sym_integer_value,
    ACTIONS(788), 2,
      sym_from,
      sym_to,
    STATE(195), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACK,
    ACTIONS(794), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [6157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(448), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(442), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6187] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      aux_sym_integer_value_token1,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    STATE(291), 1,
      sym_integer_value,
    ACTIONS(774), 2,
      sym_from,
      sym_to,
    STATE(195), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_SLASH,
    ACTIONS(492), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(488), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_SLASH,
    ACTIONS(466), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      aux_sym_integer_value_token1,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    STATE(291), 1,
      sym_integer_value,
    ACTIONS(774), 2,
      sym_from,
      sym_to,
    STATE(199), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6274] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(802), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_block,
    STATE(230), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(782), 2,
      anon_sym_and,
      anon_sym_or,
  [6297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RBRACK,
    ACTIONS(804), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [6312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      sym_block,
    STATE(236), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(782), 2,
      anon_sym_and,
      anon_sym_or,
  [6380] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      sym_block,
    STATE(253), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(782), 2,
      anon_sym_and,
      anon_sym_or,
  [6400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym__js_args_repeat1,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
    ACTIONS(824), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6459] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    ACTIONS(830), 1,
      sym__js_identifier,
    STATE(257), 1,
      sym__js_param,
    STATE(323), 1,
      sym__js_params,
  [6478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6493] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_SEMI,
    STATE(263), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(782), 2,
      anon_sym_and,
      anon_sym_or,
  [6510] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(844), 1,
      sym__js_string,
    STATE(214), 1,
      sym__js_expr,
    STATE(316), 1,
      sym__js_args,
  [6529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_SEMI,
    STATE(267), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(782), 2,
      anon_sym_and,
      anon_sym_or,
  [6546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6561] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(850), 1,
      sym_string_value,
    ACTIONS(852), 1,
      sym_identifier,
    STATE(176), 1,
      sym_arguments,
    STATE(310), 1,
      sym_call_expression,
  [6580] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_block,
    STATE(247), 1,
      aux_sym_import_statement_repeat1,
  [6599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(856), 1,
      anon_sym_RBRACK,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(858), 1,
      anon_sym_SEMI,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6629] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(862), 1,
      sym__js_identifier,
    ACTIONS(864), 1,
      sym__js_string,
    STATE(256), 1,
      sym__js_expr,
    STATE(298), 1,
      sym__js_fat_arrow_function,
  [6648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(866), 1,
      anon_sym_SEMI,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6663] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(844), 1,
      sym__js_string,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym__js_expr,
    STATE(334), 1,
      sym__js_args,
  [6682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6697] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_block,
    STATE(247), 1,
      aux_sym_import_statement_repeat1,
  [6716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SLASH,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    ACTIONS(832), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6731] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(862), 1,
      sym__js_identifier,
    ACTIONS(876), 1,
      sym__js_string,
    STATE(245), 1,
      sym__js_expr,
    STATE(299), 1,
      sym__js_fat_arrow_function,
  [6750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(878), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6763] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(862), 1,
      sym__js_identifier,
    ACTIONS(880), 1,
      sym__js_string,
    STATE(244), 1,
      sym__js_expr,
    STATE(325), 1,
      sym__js_fat_arrow_function,
  [6782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(852), 1,
      sym_identifier,
    ACTIONS(882), 1,
      sym_string_value,
    STATE(176), 1,
      sym_arguments,
    STATE(301), 1,
      sym_call_expression,
  [6801] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      sym_block,
    STATE(247), 1,
      aux_sym_import_statement_repeat1,
  [6817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(886), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
    ACTIONS(782), 2,
      anon_sym_and,
      anon_sym_or,
  [6859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(889), 1,
      anon_sym_COLON,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(878), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym__js_params_repeat1,
    ACTIONS(906), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [6991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
    ACTIONS(782), 2,
      anon_sym_and,
      anon_sym_or,
  [7005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [7029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_block,
    STATE(247), 1,
      aux_sym_import_statement_repeat1,
  [7045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym__js_params_repeat1,
    ACTIONS(913), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [7083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym__js_params_repeat1,
    ACTIONS(917), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_COLON,
    ACTIONS(814), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(830), 1,
      sym__js_identifier,
    STATE(257), 1,
      sym__js_param,
    STATE(312), 1,
      sym__js_params,
  [7125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [7153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_QMARK,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [7167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    STATE(247), 1,
      aux_sym_import_statement_repeat1,
  [7180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 2,
      anon_sym_and,
      anon_sym_or,
  [7200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    ACTIONS(931), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__js_args_repeat1,
  [7213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(934), 1,
      anon_sym_SEMI,
    STATE(247), 1,
      aux_sym_import_statement_repeat1,
  [7226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_LBRACE,
    STATE(278), 1,
      aux_sym_selectors_repeat1,
  [7248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(940), 1,
      sym__js_string,
    STATE(237), 1,
      sym__js_expr,
  [7261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(942), 1,
      sym__js_string,
    STATE(240), 1,
      sym__js_expr,
  [7274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(944), 1,
      sym__js_string,
    STATE(215), 1,
      sym__js_expr,
  [7287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym__js_args_repeat1,
  [7300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym__js_identifier,
    ACTIONS(948), 1,
      anon_sym_LBRACK,
    ACTIONS(950), 1,
      anon_sym_LPAREN2,
  [7313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(952), 1,
      sym__js_string,
    STATE(262), 1,
      sym__js_expr,
  [7326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(954), 1,
      sym__js_string,
    STATE(182), 1,
      sym__js_expr,
  [7339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(956), 1,
      sym__js_string,
    STATE(241), 1,
      sym__js_expr,
  [7352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_selectors_repeat1,
  [7365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym_string_value,
    ACTIONS(963), 1,
      sym_identifier,
    STATE(305), 1,
      sym_call_expression,
  [7378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(970), 1,
      sym__js_string,
    STATE(186), 1,
      sym__js_expr,
  [7417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(972), 1,
      sym__js_string,
    STATE(252), 1,
      sym__js_expr,
  [7430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym_string_value,
    ACTIONS(976), 1,
      sym_identifier,
    STATE(321), 1,
      sym_call_expression,
  [7443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__js_identifier,
    ACTIONS(978), 1,
      sym__js_string,
    STATE(261), 1,
      sym__js_expr,
  [7456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(980), 1,
      sym__js_identifier,
    STATE(264), 1,
      sym__js_param,
  [7469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_keyframe_block_list,
  [7479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_keyframe_block_list,
  [7489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
  [7499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      aux_sym_color_value_token1,
    ACTIONS(992), 1,
      sym_identifier,
  [7509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    STATE(243), 1,
      sym_block,
  [7519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [7529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
  [7539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
  [7549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    ACTIONS(996), 1,
      sym_unit,
  [7559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_arguments,
  [7569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_SEMI,
  [7576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
  [7583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [7590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      sym_identifier,
  [7597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_SEMI,
  [7604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym_identifier,
  [7611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym_identifier,
  [7618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
  [7625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_SEMI,
  [7632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      sym_identifier,
  [7639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym_identifier,
  [7646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_EQ_GT,
  [7653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [7660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
  [7667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_RBRACE,
  [7674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_RBRACE,
  [7681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      aux_sym_color_value_token1,
  [7688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [7695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_EQ_GT,
  [7702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
  [7709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
  [7716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_LPAREN2,
  [7723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
  [7730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      aux_sym_color_value_token1,
  [7737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
  [7744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_RBRACE,
  [7751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
  [7758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      ts_builtin_sym_end,
  [7765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
  [7772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym_identifier,
  [7779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      aux_sym_color_value_token1,
  [7786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_identifier,
  [7793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_identifier,
  [7800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_SEMI,
  [7807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym_identifier,
  [7814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_RBRACE,
  [7821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym_identifier,
  [7828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
  [7835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym_identifier,
  [7842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 455,
  [SMALL_STATE(8)] = 546,
  [SMALL_STATE(9)] = 632,
  [SMALL_STATE(10)] = 718,
  [SMALL_STATE(11)] = 806,
  [SMALL_STATE(12)] = 877,
  [SMALL_STATE(13)] = 945,
  [SMALL_STATE(14)] = 1002,
  [SMALL_STATE(15)] = 1040,
  [SMALL_STATE(16)] = 1094,
  [SMALL_STATE(17)] = 1148,
  [SMALL_STATE(18)] = 1190,
  [SMALL_STATE(19)] = 1232,
  [SMALL_STATE(20)] = 1274,
  [SMALL_STATE(21)] = 1304,
  [SMALL_STATE(22)] = 1332,
  [SMALL_STATE(23)] = 1374,
  [SMALL_STATE(24)] = 1416,
  [SMALL_STATE(25)] = 1458,
  [SMALL_STATE(26)] = 1490,
  [SMALL_STATE(27)] = 1517,
  [SMALL_STATE(28)] = 1544,
  [SMALL_STATE(29)] = 1589,
  [SMALL_STATE(30)] = 1616,
  [SMALL_STATE(31)] = 1643,
  [SMALL_STATE(32)] = 1670,
  [SMALL_STATE(33)] = 1697,
  [SMALL_STATE(34)] = 1724,
  [SMALL_STATE(35)] = 1751,
  [SMALL_STATE(36)] = 1798,
  [SMALL_STATE(37)] = 1825,
  [SMALL_STATE(38)] = 1852,
  [SMALL_STATE(39)] = 1879,
  [SMALL_STATE(40)] = 1906,
  [SMALL_STATE(41)] = 1933,
  [SMALL_STATE(42)] = 1960,
  [SMALL_STATE(43)] = 1987,
  [SMALL_STATE(44)] = 2014,
  [SMALL_STATE(45)] = 2041,
  [SMALL_STATE(46)] = 2088,
  [SMALL_STATE(47)] = 2115,
  [SMALL_STATE(48)] = 2142,
  [SMALL_STATE(49)] = 2169,
  [SMALL_STATE(50)] = 2196,
  [SMALL_STATE(51)] = 2223,
  [SMALL_STATE(52)] = 2250,
  [SMALL_STATE(53)] = 2297,
  [SMALL_STATE(54)] = 2324,
  [SMALL_STATE(55)] = 2351,
  [SMALL_STATE(56)] = 2378,
  [SMALL_STATE(57)] = 2405,
  [SMALL_STATE(58)] = 2432,
  [SMALL_STATE(59)] = 2459,
  [SMALL_STATE(60)] = 2508,
  [SMALL_STATE(61)] = 2535,
  [SMALL_STATE(62)] = 2562,
  [SMALL_STATE(63)] = 2589,
  [SMALL_STATE(64)] = 2616,
  [SMALL_STATE(65)] = 2643,
  [SMALL_STATE(66)] = 2670,
  [SMALL_STATE(67)] = 2697,
  [SMALL_STATE(68)] = 2724,
  [SMALL_STATE(69)] = 2751,
  [SMALL_STATE(70)] = 2778,
  [SMALL_STATE(71)] = 2805,
  [SMALL_STATE(72)] = 2832,
  [SMALL_STATE(73)] = 2859,
  [SMALL_STATE(74)] = 2886,
  [SMALL_STATE(75)] = 2913,
  [SMALL_STATE(76)] = 2940,
  [SMALL_STATE(77)] = 2967,
  [SMALL_STATE(78)] = 3013,
  [SMALL_STATE(79)] = 3043,
  [SMALL_STATE(80)] = 3085,
  [SMALL_STATE(81)] = 3127,
  [SMALL_STATE(82)] = 3173,
  [SMALL_STATE(83)] = 3219,
  [SMALL_STATE(84)] = 3265,
  [SMALL_STATE(85)] = 3311,
  [SMALL_STATE(86)] = 3338,
  [SMALL_STATE(87)] = 3365,
  [SMALL_STATE(88)] = 3406,
  [SMALL_STATE(89)] = 3430,
  [SMALL_STATE(90)] = 3470,
  [SMALL_STATE(91)] = 3494,
  [SMALL_STATE(92)] = 3530,
  [SMALL_STATE(93)] = 3554,
  [SMALL_STATE(94)] = 3594,
  [SMALL_STATE(95)] = 3634,
  [SMALL_STATE(96)] = 3674,
  [SMALL_STATE(97)] = 3698,
  [SMALL_STATE(98)] = 3738,
  [SMALL_STATE(99)] = 3762,
  [SMALL_STATE(100)] = 3786,
  [SMALL_STATE(101)] = 3822,
  [SMALL_STATE(102)] = 3862,
  [SMALL_STATE(103)] = 3886,
  [SMALL_STATE(104)] = 3926,
  [SMALL_STATE(105)] = 3950,
  [SMALL_STATE(106)] = 3974,
  [SMALL_STATE(107)] = 4001,
  [SMALL_STATE(108)] = 4028,
  [SMALL_STATE(109)] = 4065,
  [SMALL_STATE(110)] = 4102,
  [SMALL_STATE(111)] = 4136,
  [SMALL_STATE(112)] = 4170,
  [SMALL_STATE(113)] = 4204,
  [SMALL_STATE(114)] = 4238,
  [SMALL_STATE(115)] = 4272,
  [SMALL_STATE(116)] = 4298,
  [SMALL_STATE(117)] = 4332,
  [SMALL_STATE(118)] = 4366,
  [SMALL_STATE(119)] = 4400,
  [SMALL_STATE(120)] = 4434,
  [SMALL_STATE(121)] = 4468,
  [SMALL_STATE(122)] = 4502,
  [SMALL_STATE(123)] = 4536,
  [SMALL_STATE(124)] = 4570,
  [SMALL_STATE(125)] = 4604,
  [SMALL_STATE(126)] = 4630,
  [SMALL_STATE(127)] = 4664,
  [SMALL_STATE(128)] = 4690,
  [SMALL_STATE(129)] = 4710,
  [SMALL_STATE(130)] = 4732,
  [SMALL_STATE(131)] = 4752,
  [SMALL_STATE(132)] = 4772,
  [SMALL_STATE(133)] = 4792,
  [SMALL_STATE(134)] = 4812,
  [SMALL_STATE(135)] = 4832,
  [SMALL_STATE(136)] = 4852,
  [SMALL_STATE(137)] = 4872,
  [SMALL_STATE(138)] = 4892,
  [SMALL_STATE(139)] = 4912,
  [SMALL_STATE(140)] = 4932,
  [SMALL_STATE(141)] = 4952,
  [SMALL_STATE(142)] = 4974,
  [SMALL_STATE(143)] = 4994,
  [SMALL_STATE(144)] = 5016,
  [SMALL_STATE(145)] = 5040,
  [SMALL_STATE(146)] = 5080,
  [SMALL_STATE(147)] = 5100,
  [SMALL_STATE(148)] = 5140,
  [SMALL_STATE(149)] = 5162,
  [SMALL_STATE(150)] = 5182,
  [SMALL_STATE(151)] = 5202,
  [SMALL_STATE(152)] = 5222,
  [SMALL_STATE(153)] = 5247,
  [SMALL_STATE(154)] = 5268,
  [SMALL_STATE(155)] = 5293,
  [SMALL_STATE(156)] = 5318,
  [SMALL_STATE(157)] = 5339,
  [SMALL_STATE(158)] = 5374,
  [SMALL_STATE(159)] = 5393,
  [SMALL_STATE(160)] = 5412,
  [SMALL_STATE(161)] = 5437,
  [SMALL_STATE(162)] = 5456,
  [SMALL_STATE(163)] = 5481,
  [SMALL_STATE(164)] = 5506,
  [SMALL_STATE(165)] = 5531,
  [SMALL_STATE(166)] = 5556,
  [SMALL_STATE(167)] = 5575,
  [SMALL_STATE(168)] = 5610,
  [SMALL_STATE(169)] = 5635,
  [SMALL_STATE(170)] = 5653,
  [SMALL_STATE(171)] = 5671,
  [SMALL_STATE(172)] = 5705,
  [SMALL_STATE(173)] = 5723,
  [SMALL_STATE(174)] = 5741,
  [SMALL_STATE(175)] = 5759,
  [SMALL_STATE(176)] = 5777,
  [SMALL_STATE(177)] = 5795,
  [SMALL_STATE(178)] = 5813,
  [SMALL_STATE(179)] = 5831,
  [SMALL_STATE(180)] = 5852,
  [SMALL_STATE(181)] = 5870,
  [SMALL_STATE(182)] = 5888,
  [SMALL_STATE(183)] = 5906,
  [SMALL_STATE(184)] = 5922,
  [SMALL_STATE(185)] = 5938,
  [SMALL_STATE(186)] = 5954,
  [SMALL_STATE(187)] = 5972,
  [SMALL_STATE(188)] = 5996,
  [SMALL_STATE(189)] = 6017,
  [SMALL_STATE(190)] = 6040,
  [SMALL_STATE(191)] = 6055,
  [SMALL_STATE(192)] = 6070,
  [SMALL_STATE(193)] = 6085,
  [SMALL_STATE(194)] = 6100,
  [SMALL_STATE(195)] = 6121,
  [SMALL_STATE(196)] = 6142,
  [SMALL_STATE(197)] = 6157,
  [SMALL_STATE(198)] = 6172,
  [SMALL_STATE(199)] = 6187,
  [SMALL_STATE(200)] = 6208,
  [SMALL_STATE(201)] = 6223,
  [SMALL_STATE(202)] = 6238,
  [SMALL_STATE(203)] = 6253,
  [SMALL_STATE(204)] = 6274,
  [SMALL_STATE(205)] = 6297,
  [SMALL_STATE(206)] = 6312,
  [SMALL_STATE(207)] = 6324,
  [SMALL_STATE(208)] = 6336,
  [SMALL_STATE(209)] = 6348,
  [SMALL_STATE(210)] = 6360,
  [SMALL_STATE(211)] = 6380,
  [SMALL_STATE(212)] = 6400,
  [SMALL_STATE(213)] = 6412,
  [SMALL_STATE(214)] = 6424,
  [SMALL_STATE(215)] = 6444,
  [SMALL_STATE(216)] = 6459,
  [SMALL_STATE(217)] = 6478,
  [SMALL_STATE(218)] = 6493,
  [SMALL_STATE(219)] = 6510,
  [SMALL_STATE(220)] = 6529,
  [SMALL_STATE(221)] = 6546,
  [SMALL_STATE(222)] = 6561,
  [SMALL_STATE(223)] = 6580,
  [SMALL_STATE(224)] = 6599,
  [SMALL_STATE(225)] = 6614,
  [SMALL_STATE(226)] = 6629,
  [SMALL_STATE(227)] = 6648,
  [SMALL_STATE(228)] = 6663,
  [SMALL_STATE(229)] = 6682,
  [SMALL_STATE(230)] = 6697,
  [SMALL_STATE(231)] = 6716,
  [SMALL_STATE(232)] = 6731,
  [SMALL_STATE(233)] = 6750,
  [SMALL_STATE(234)] = 6763,
  [SMALL_STATE(235)] = 6782,
  [SMALL_STATE(236)] = 6801,
  [SMALL_STATE(237)] = 6817,
  [SMALL_STATE(238)] = 6831,
  [SMALL_STATE(239)] = 6845,
  [SMALL_STATE(240)] = 6859,
  [SMALL_STATE(241)] = 6873,
  [SMALL_STATE(242)] = 6887,
  [SMALL_STATE(243)] = 6901,
  [SMALL_STATE(244)] = 6911,
  [SMALL_STATE(245)] = 6925,
  [SMALL_STATE(246)] = 6939,
  [SMALL_STATE(247)] = 6953,
  [SMALL_STATE(248)] = 6967,
  [SMALL_STATE(249)] = 6977,
  [SMALL_STATE(250)] = 6991,
  [SMALL_STATE(251)] = 7005,
  [SMALL_STATE(252)] = 7015,
  [SMALL_STATE(253)] = 7029,
  [SMALL_STATE(254)] = 7045,
  [SMALL_STATE(255)] = 7055,
  [SMALL_STATE(256)] = 7069,
  [SMALL_STATE(257)] = 7083,
  [SMALL_STATE(258)] = 7097,
  [SMALL_STATE(259)] = 7109,
  [SMALL_STATE(260)] = 7125,
  [SMALL_STATE(261)] = 7139,
  [SMALL_STATE(262)] = 7153,
  [SMALL_STATE(263)] = 7167,
  [SMALL_STATE(264)] = 7180,
  [SMALL_STATE(265)] = 7189,
  [SMALL_STATE(266)] = 7200,
  [SMALL_STATE(267)] = 7213,
  [SMALL_STATE(268)] = 7226,
  [SMALL_STATE(269)] = 7235,
  [SMALL_STATE(270)] = 7248,
  [SMALL_STATE(271)] = 7261,
  [SMALL_STATE(272)] = 7274,
  [SMALL_STATE(273)] = 7287,
  [SMALL_STATE(274)] = 7300,
  [SMALL_STATE(275)] = 7313,
  [SMALL_STATE(276)] = 7326,
  [SMALL_STATE(277)] = 7339,
  [SMALL_STATE(278)] = 7352,
  [SMALL_STATE(279)] = 7365,
  [SMALL_STATE(280)] = 7378,
  [SMALL_STATE(281)] = 7391,
  [SMALL_STATE(282)] = 7404,
  [SMALL_STATE(283)] = 7417,
  [SMALL_STATE(284)] = 7430,
  [SMALL_STATE(285)] = 7443,
  [SMALL_STATE(286)] = 7456,
  [SMALL_STATE(287)] = 7469,
  [SMALL_STATE(288)] = 7479,
  [SMALL_STATE(289)] = 7489,
  [SMALL_STATE(290)] = 7499,
  [SMALL_STATE(291)] = 7509,
  [SMALL_STATE(292)] = 7519,
  [SMALL_STATE(293)] = 7529,
  [SMALL_STATE(294)] = 7539,
  [SMALL_STATE(295)] = 7549,
  [SMALL_STATE(296)] = 7559,
  [SMALL_STATE(297)] = 7569,
  [SMALL_STATE(298)] = 7576,
  [SMALL_STATE(299)] = 7583,
  [SMALL_STATE(300)] = 7590,
  [SMALL_STATE(301)] = 7597,
  [SMALL_STATE(302)] = 7604,
  [SMALL_STATE(303)] = 7611,
  [SMALL_STATE(304)] = 7618,
  [SMALL_STATE(305)] = 7625,
  [SMALL_STATE(306)] = 7632,
  [SMALL_STATE(307)] = 7639,
  [SMALL_STATE(308)] = 7646,
  [SMALL_STATE(309)] = 7653,
  [SMALL_STATE(310)] = 7660,
  [SMALL_STATE(311)] = 7667,
  [SMALL_STATE(312)] = 7674,
  [SMALL_STATE(313)] = 7681,
  [SMALL_STATE(314)] = 7688,
  [SMALL_STATE(315)] = 7695,
  [SMALL_STATE(316)] = 7702,
  [SMALL_STATE(317)] = 7709,
  [SMALL_STATE(318)] = 7716,
  [SMALL_STATE(319)] = 7723,
  [SMALL_STATE(320)] = 7730,
  [SMALL_STATE(321)] = 7737,
  [SMALL_STATE(322)] = 7744,
  [SMALL_STATE(323)] = 7751,
  [SMALL_STATE(324)] = 7758,
  [SMALL_STATE(325)] = 7765,
  [SMALL_STATE(326)] = 7772,
  [SMALL_STATE(327)] = 7779,
  [SMALL_STATE(328)] = 7786,
  [SMALL_STATE(329)] = 7793,
  [SMALL_STATE(330)] = 7800,
  [SMALL_STATE(331)] = 7807,
  [SMALL_STATE(332)] = 7814,
  [SMALL_STATE(333)] = 7821,
  [SMALL_STATE(334)] = 7828,
  [SMALL_STATE(335)] = 7835,
  [SMALL_STATE(336)] = 7842,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(122),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(155),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(113),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(279),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(336),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(160),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(147),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(132),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(335),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(333),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(331),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(329),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(326),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(161),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(111),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(232),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(162),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(284),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(328),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(152),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(132),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(335),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(333),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(331),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(329),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(326),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(158),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(114),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(226),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 13),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_interpolation, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_interpolation, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 12),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 12),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(118),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(313),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(126),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(106),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(85),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(86),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(78),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(106),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 13),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 13),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 13),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 13),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 13),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(313),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(126),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(125),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(85),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(86),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(78),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(125),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 9),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 9),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 9),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 9),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 9),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 9),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 10),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 10),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 11),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 11),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(94),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [731] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(95),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 5),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 5),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 4),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 4),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(291),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(295),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 14),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_args, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_args_repeat1, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_fat_arrow_function, 5),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(108),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(154),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_params, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_params_repeat1, 2), SHIFT_REPEAT(286),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_params_repeat1, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_params, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_fat_arrow_function, 4),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_fat_arrow_function, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_args_repeat1, 2), SHIFT_REPEAT(272),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_param, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_args, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(18),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(12),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 13),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1036] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_css_in_js_external_scanner_create(void);
void tree_sitter_css_in_js_external_scanner_destroy(void *);
bool tree_sitter_css_in_js_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_css_in_js_external_scanner_serialize(void *, char *);
void tree_sitter_css_in_js_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_css_in_js(void) {
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
      tree_sitter_css_in_js_external_scanner_create,
      tree_sitter_css_in_js_external_scanner_destroy,
      tree_sitter_css_in_js_external_scanner_scan,
      tree_sitter_css_in_js_external_scanner_serialize,
      tree_sitter_css_in_js_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
