#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 416
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 9
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_COLON_COLON = 17,
  anon_sym_POUND = 18,
  anon_sym_LBRACK = 19,
  anon_sym_EQ = 20,
  anon_sym_TILDE_EQ = 21,
  anon_sym_CARET_EQ = 22,
  anon_sym_PIPE_EQ = 23,
  anon_sym_STAR_EQ = 24,
  anon_sym_DOLLAR_EQ = 25,
  anon_sym_RBRACK = 26,
  anon_sym_GT = 27,
  anon_sym_TILDE = 28,
  anon_sym_PLUS = 29,
  anon_sym_PIPE = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_COLON = 33,
  sym_important = 34,
  anon_sym_LPAREN2 = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  anon_sym_not = 38,
  anon_sym_only = 39,
  anon_sym_selector = 40,
  aux_sym_color_value_token1 = 41,
  anon_sym_SQUOTE = 42,
  aux_sym_string_value_token1 = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_string_value_token2 = 45,
  aux_sym_integer_value_token1 = 46,
  aux_sym_float_value_token1 = 47,
  sym_unit = 48,
  anon_sym_DASH = 49,
  anon_sym_SLASH = 50,
  sym_identifier = 51,
  sym_at_keyword = 52,
  sym_js_comment = 53,
  sym_comment = 54,
  sym_plain_value = 55,
  sym__js_identifier = 56,
  sym__js_string = 57,
  aux_sym__js_expr_token1 = 58,
  anon_sym_QMARK_QMARK = 59,
  anon_sym_QMARK = 60,
  aux_sym__js_expr_token2 = 61,
  anon_sym_EQ_GT = 62,
  anon_sym_DOLLAR_LBRACE = 63,
  sym__descendant_operator = 64,
  sym__pseudo_class_selector_colon = 65,
  sym___error_recovery = 66,
  sym_stylesheet = 67,
  sym_import_statement = 68,
  sym_media_statement = 69,
  sym_charset_statement = 70,
  sym_namespace_statement = 71,
  sym_keyframes_statement = 72,
  sym_keyframe_block_list = 73,
  sym_keyframe_block = 74,
  sym_supports_statement = 75,
  sym_postcss_statement = 76,
  sym_at_rule = 77,
  sym_rule_set = 78,
  sym_selectors = 79,
  sym_block = 80,
  sym__selector = 81,
  sym_universal_selector = 82,
  sym_class_selector = 83,
  sym_pseudo_class_selector = 84,
  sym_pseudo_element_selector = 85,
  sym_id_selector = 86,
  sym_attribute_selector = 87,
  sym_child_selector = 88,
  sym_descendant_selector = 89,
  sym_sibling_selector = 90,
  sym_adjacent_sibling_selector = 91,
  sym_namespace_selector = 92,
  sym_pseudo_class_arguments = 93,
  sym_pseudo_element_arguments = 94,
  sym_declaration = 95,
  sym_last_declaration = 96,
  sym__query = 97,
  sym_feature_query = 98,
  sym_parenthesized_query = 99,
  sym_binary_query = 100,
  sym_unary_query = 101,
  sym_selector_query = 102,
  sym__value = 103,
  sym_parenthesized_value = 104,
  sym_color_value = 105,
  sym_string_value = 106,
  sym_integer_value = 107,
  sym_float_value = 108,
  sym_grid_value = 109,
  sym_call_expression = 110,
  sym_binary_expression = 111,
  sym_arguments = 112,
  sym__js_expr = 113,
  sym__js_param = 114,
  sym__js_params = 115,
  sym__js_args = 116,
  sym__js_fat_arrow_function = 117,
  sym_js_interpolation = 118,
  aux_sym_stylesheet_repeat1 = 119,
  aux_sym_import_statement_repeat1 = 120,
  aux_sym_keyframe_block_list_repeat1 = 121,
  aux_sym_postcss_statement_repeat1 = 122,
  aux_sym_selectors_repeat1 = 123,
  aux_sym_block_repeat1 = 124,
  aux_sym_pseudo_class_arguments_repeat1 = 125,
  aux_sym_declaration_repeat1 = 126,
  aux_sym_grid_value_repeat1 = 127,
  aux_sym_arguments_repeat1 = 128,
  aux_sym__js_params_repeat1 = 129,
  aux_sym__js_args_repeat1 = 130,
  alias_sym_class_name = 131,
  alias_sym_feature_name = 132,
  alias_sym_function_name = 133,
  alias_sym_id_name = 134,
  alias_sym_keyframes_name = 135,
  alias_sym_keyword_query = 136,
  alias_sym_namespace_name = 137,
  alias_sym_property_name = 138,
  alias_sym_tag_name = 139,
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
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_value_token1] = "string_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_value_token2",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "attribute_name",
  [sym_at_keyword] = "at_keyword",
  [sym_js_comment] = "js_comment",
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
  [sym__pseudo_class_selector_colon] = ":",
  [sym___error_recovery] = "__error_recovery",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_postcss_statement] = "postcss_statement",
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
  [sym_namespace_selector] = "namespace_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_pseudo_element_arguments] = "arguments",
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
  [sym_string_value] = "string_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_grid_value] = "grid_value",
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
  [aux_sym_postcss_statement_repeat1] = "postcss_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
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
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_value_token1] = aux_sym_string_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_value_token2] = aux_sym_string_value_token2,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_js_comment] = sym_js_comment,
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
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
  [sym___error_recovery] = sym___error_recovery,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_postcss_statement] = sym_postcss_statement,
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
  [sym_namespace_selector] = sym_namespace_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_pseudo_element_arguments] = sym_arguments,
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
  [sym_string_value] = sym_string_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_grid_value] = sym_grid_value,
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
  [aux_sym_postcss_statement_repeat1] = aux_sym_postcss_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
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
  [anon_sym_PIPE] = {
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
  [anon_sym_COLON] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = false,
    .named = false,
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
  [sym_js_comment] = {
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
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
  },
  [sym___error_recovery] = {
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
  [sym_postcss_statement] = {
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
  [sym_namespace_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_arguments] = {
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
  [sym_string_value] = {
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
  [sym_grid_value] = {
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
  [aux_sym_postcss_statement_repeat1] = {
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
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grid_value_repeat1] = {
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
    [1] = alias_sym_class_name,
  },
  [3] = {
    [0] = sym_plain_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
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
    [1] = sym_identifier,
  },
  [10] = {
    [2] = alias_sym_class_name,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
  [15] = {
    [2] = sym_identifier,
  },
  [16] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    sym_identifier,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 45,
  [52] = 50,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 57,
  [60] = 60,
  [61] = 61,
  [62] = 55,
  [63] = 57,
  [64] = 64,
  [65] = 65,
  [66] = 54,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 68,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 86,
  [94] = 94,
  [95] = 95,
  [96] = 75,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 73,
  [108] = 108,
  [109] = 74,
  [110] = 77,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 40,
  [115] = 79,
  [116] = 116,
  [117] = 99,
  [118] = 81,
  [119] = 80,
  [120] = 95,
  [121] = 84,
  [122] = 69,
  [123] = 112,
  [124] = 106,
  [125] = 125,
  [126] = 103,
  [127] = 127,
  [128] = 85,
  [129] = 83,
  [130] = 130,
  [131] = 101,
  [132] = 70,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 105,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 108,
  [141] = 102,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 71,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 149,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 149,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 154,
  [161] = 155,
  [162] = 159,
  [163] = 158,
  [164] = 154,
  [165] = 155,
  [166] = 166,
  [167] = 167,
  [168] = 40,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 187,
  [190] = 190,
  [191] = 188,
  [192] = 190,
  [193] = 39,
  [194] = 40,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 196,
  [200] = 200,
  [201] = 201,
  [202] = 55,
  [203] = 127,
  [204] = 204,
  [205] = 205,
  [206] = 167,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 207,
  [211] = 209,
  [212] = 212,
  [213] = 213,
  [214] = 147,
  [215] = 215,
  [216] = 148,
  [217] = 217,
  [218] = 174,
  [219] = 176,
  [220] = 220,
  [221] = 127,
  [222] = 173,
  [223] = 172,
  [224] = 224,
  [225] = 40,
  [226] = 170,
  [227] = 169,
  [228] = 171,
  [229] = 166,
  [230] = 175,
  [231] = 177,
  [232] = 148,
  [233] = 147,
  [234] = 234,
  [235] = 235,
  [236] = 172,
  [237] = 175,
  [238] = 173,
  [239] = 176,
  [240] = 240,
  [241] = 174,
  [242] = 167,
  [243] = 177,
  [244] = 170,
  [245] = 169,
  [246] = 40,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 166,
  [251] = 171,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 253,
  [257] = 257,
  [258] = 255,
  [259] = 255,
  [260] = 257,
  [261] = 254,
  [262] = 252,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 266,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 277,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 284,
  [286] = 286,
  [287] = 275,
  [288] = 282,
  [289] = 282,
  [290] = 290,
  [291] = 290,
  [292] = 274,
  [293] = 274,
  [294] = 294,
  [295] = 295,
  [296] = 70,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 305,
  [307] = 307,
  [308] = 308,
  [309] = 303,
  [310] = 310,
  [311] = 295,
  [312] = 300,
  [313] = 313,
  [314] = 305,
  [315] = 79,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 295,
  [320] = 320,
  [321] = 69,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 325,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 326,
  [337] = 326,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 349,
  [352] = 352,
  [353] = 352,
  [354] = 354,
  [355] = 350,
  [356] = 147,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 366,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 373,
  [375] = 375,
  [376] = 370,
  [377] = 362,
  [378] = 378,
  [379] = 366,
  [380] = 380,
  [381] = 365,
  [382] = 368,
  [383] = 366,
  [384] = 370,
  [385] = 366,
  [386] = 370,
  [387] = 366,
  [388] = 370,
  [389] = 389,
  [390] = 371,
  [391] = 391,
  [392] = 392,
  [393] = 378,
  [394] = 394,
  [395] = 359,
  [396] = 367,
  [397] = 362,
  [398] = 398,
  [399] = 399,
  [400] = 365,
  [401] = 373,
  [402] = 402,
  [403] = 403,
  [404] = 359,
  [405] = 367,
  [406] = 406,
  [407] = 368,
  [408] = 380,
  [409] = 359,
  [410] = 367,
  [411] = 359,
  [412] = 367,
  [413] = 359,
  [414] = 367,
  [415] = 370,
};

static inline bool sym_js_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
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

static inline bool sym_plain_value_character_set_2(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(82);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(65);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == '|') ADVANCE(120);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == '|') ADVANCE(120);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == '|') ADVANCE(120);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == '|') ADVANCE(120);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(314);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(305);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(302);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '{') ADVANCE(319);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(318);
      END_STATE();
    case 46:
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'k') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(319);
      END_STATE();
    case 66:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 74:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(38);
      END_STATE();
    case 75:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(307);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(10);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(313);
      END_STATE();
    case 79:
      if (eof) ADVANCE(82);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '~') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 80:
      if (eof) ADVANCE(82);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(65);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(120);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '$') ADVANCE(65);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(120);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_from);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_to);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(318);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(103);
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
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(169);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(29);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(169);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(29);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(165);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(29);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(29);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(175);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == 'y') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(203);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '_') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(203);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(302);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(38);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '/') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'y') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(278);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(279);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(283);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(270);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(271);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(75);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(304);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__js_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__js_string);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__js_string);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__js_string);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__js_string);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__js_expr_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '?') ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__js_expr_token2);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 80, .external_lex_state = 2},
  [2] = {.lex_state = 80, .external_lex_state = 2},
  [3] = {.lex_state = 80, .external_lex_state = 2},
  [4] = {.lex_state = 80, .external_lex_state = 2},
  [5] = {.lex_state = 80, .external_lex_state = 2},
  [6] = {.lex_state = 80, .external_lex_state = 2},
  [7] = {.lex_state = 80, .external_lex_state = 2},
  [8] = {.lex_state = 80, .external_lex_state = 2},
  [9] = {.lex_state = 80, .external_lex_state = 2},
  [10] = {.lex_state = 80, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 3, .external_lex_state = 3},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 80, .external_lex_state = 2},
  [28] = {.lex_state = 80, .external_lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 80, .external_lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 80, .external_lex_state = 2},
  [33] = {.lex_state = 12, .external_lex_state = 3},
  [34] = {.lex_state = 80, .external_lex_state = 2},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 80, .external_lex_state = 2},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 5, .external_lex_state = 3},
  [40] = {.lex_state = 5, .external_lex_state = 3},
  [41] = {.lex_state = 80, .external_lex_state = 2},
  [42] = {.lex_state = 80, .external_lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 80, .external_lex_state = 2},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 11, .external_lex_state = 3},
  [48] = {.lex_state = 11, .external_lex_state = 3},
  [49] = {.lex_state = 11, .external_lex_state = 3},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 11, .external_lex_state = 3},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 80, .external_lex_state = 2},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 80, .external_lex_state = 2},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 80, .external_lex_state = 2},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 80, .external_lex_state = 2},
  [68] = {.lex_state = 80, .external_lex_state = 2},
  [69] = {.lex_state = 80, .external_lex_state = 2},
  [70] = {.lex_state = 80, .external_lex_state = 2},
  [71] = {.lex_state = 80, .external_lex_state = 2},
  [72] = {.lex_state = 80, .external_lex_state = 2},
  [73] = {.lex_state = 80, .external_lex_state = 2},
  [74] = {.lex_state = 80, .external_lex_state = 2},
  [75] = {.lex_state = 80, .external_lex_state = 2},
  [76] = {.lex_state = 11, .external_lex_state = 3},
  [77] = {.lex_state = 80, .external_lex_state = 2},
  [78] = {.lex_state = 11, .external_lex_state = 3},
  [79] = {.lex_state = 80, .external_lex_state = 2},
  [80] = {.lex_state = 80, .external_lex_state = 2},
  [81] = {.lex_state = 80, .external_lex_state = 2},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 80, .external_lex_state = 2},
  [84] = {.lex_state = 80, .external_lex_state = 2},
  [85] = {.lex_state = 80, .external_lex_state = 2},
  [86] = {.lex_state = 80, .external_lex_state = 2},
  [87] = {.lex_state = 80, .external_lex_state = 2},
  [88] = {.lex_state = 11, .external_lex_state = 3},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 11, .external_lex_state = 3},
  [91] = {.lex_state = 11, .external_lex_state = 3},
  [92] = {.lex_state = 11, .external_lex_state = 3},
  [93] = {.lex_state = 80, .external_lex_state = 2},
  [94] = {.lex_state = 11, .external_lex_state = 3},
  [95] = {.lex_state = 80, .external_lex_state = 2},
  [96] = {.lex_state = 80, .external_lex_state = 2},
  [97] = {.lex_state = 11, .external_lex_state = 3},
  [98] = {.lex_state = 11, .external_lex_state = 3},
  [99] = {.lex_state = 80, .external_lex_state = 2},
  [100] = {.lex_state = 11, .external_lex_state = 3},
  [101] = {.lex_state = 80, .external_lex_state = 2},
  [102] = {.lex_state = 80, .external_lex_state = 2},
  [103] = {.lex_state = 80, .external_lex_state = 2},
  [104] = {.lex_state = 11, .external_lex_state = 3},
  [105] = {.lex_state = 80, .external_lex_state = 2},
  [106] = {.lex_state = 80, .external_lex_state = 2},
  [107] = {.lex_state = 80, .external_lex_state = 2},
  [108] = {.lex_state = 80, .external_lex_state = 2},
  [109] = {.lex_state = 80, .external_lex_state = 2},
  [110] = {.lex_state = 80, .external_lex_state = 2},
  [111] = {.lex_state = 11, .external_lex_state = 3},
  [112] = {.lex_state = 80, .external_lex_state = 2},
  [113] = {.lex_state = 11, .external_lex_state = 3},
  [114] = {.lex_state = 11, .external_lex_state = 3},
  [115] = {.lex_state = 80, .external_lex_state = 2},
  [116] = {.lex_state = 80, .external_lex_state = 2},
  [117] = {.lex_state = 80, .external_lex_state = 2},
  [118] = {.lex_state = 80, .external_lex_state = 2},
  [119] = {.lex_state = 80, .external_lex_state = 2},
  [120] = {.lex_state = 80, .external_lex_state = 2},
  [121] = {.lex_state = 80, .external_lex_state = 2},
  [122] = {.lex_state = 80, .external_lex_state = 2},
  [123] = {.lex_state = 80, .external_lex_state = 2},
  [124] = {.lex_state = 80, .external_lex_state = 2},
  [125] = {.lex_state = 11, .external_lex_state = 3},
  [126] = {.lex_state = 80, .external_lex_state = 2},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 80, .external_lex_state = 2},
  [129] = {.lex_state = 80, .external_lex_state = 2},
  [130] = {.lex_state = 11, .external_lex_state = 3},
  [131] = {.lex_state = 80, .external_lex_state = 2},
  [132] = {.lex_state = 80, .external_lex_state = 2},
  [133] = {.lex_state = 11, .external_lex_state = 3},
  [134] = {.lex_state = 11, .external_lex_state = 3},
  [135] = {.lex_state = 11, .external_lex_state = 3},
  [136] = {.lex_state = 80, .external_lex_state = 2},
  [137] = {.lex_state = 11, .external_lex_state = 3},
  [138] = {.lex_state = 11, .external_lex_state = 3},
  [139] = {.lex_state = 11, .external_lex_state = 3},
  [140] = {.lex_state = 80, .external_lex_state = 2},
  [141] = {.lex_state = 80, .external_lex_state = 2},
  [142] = {.lex_state = 11, .external_lex_state = 3},
  [143] = {.lex_state = 11, .external_lex_state = 3},
  [144] = {.lex_state = 11, .external_lex_state = 3},
  [145] = {.lex_state = 11, .external_lex_state = 3},
  [146] = {.lex_state = 80, .external_lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 11, .external_lex_state = 3},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 11, .external_lex_state = 3},
  [184] = {.lex_state = 11, .external_lex_state = 3},
  [185] = {.lex_state = 11, .external_lex_state = 3},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 22},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 22},
  [193] = {.lex_state = 15, .external_lex_state = 3},
  [194] = {.lex_state = 15, .external_lex_state = 3},
  [195] = {.lex_state = 80, .external_lex_state = 3},
  [196] = {.lex_state = 80, .external_lex_state = 3},
  [197] = {.lex_state = 80, .external_lex_state = 3},
  [198] = {.lex_state = 80, .external_lex_state = 3},
  [199] = {.lex_state = 80, .external_lex_state = 3},
  [200] = {.lex_state = 80, .external_lex_state = 3},
  [201] = {.lex_state = 80, .external_lex_state = 3},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 20},
  [204] = {.lex_state = 80, .external_lex_state = 3},
  [205] = {.lex_state = 21},
  [206] = {.lex_state = 22},
  [207] = {.lex_state = 21},
  [208] = {.lex_state = 21},
  [209] = {.lex_state = 21},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 21},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 21},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 80, .external_lex_state = 3},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 22},
  [219] = {.lex_state = 22},
  [220] = {.lex_state = 15},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 22},
  [224] = {.lex_state = 80, .external_lex_state = 3},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 22},
  [227] = {.lex_state = 22},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 22},
  [230] = {.lex_state = 22},
  [231] = {.lex_state = 22},
  [232] = {.lex_state = 25},
  [233] = {.lex_state = 25},
  [234] = {.lex_state = 21},
  [235] = {.lex_state = 21},
  [236] = {.lex_state = 15},
  [237] = {.lex_state = 15},
  [238] = {.lex_state = 15},
  [239] = {.lex_state = 15},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 15},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 15},
  [244] = {.lex_state = 15},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 15},
  [247] = {.lex_state = 21},
  [248] = {.lex_state = 21},
  [249] = {.lex_state = 21},
  [250] = {.lex_state = 15},
  [251] = {.lex_state = 15},
  [252] = {.lex_state = 66},
  [253] = {.lex_state = 66},
  [254] = {.lex_state = 80},
  [255] = {.lex_state = 15},
  [256] = {.lex_state = 66},
  [257] = {.lex_state = 11},
  [258] = {.lex_state = 15},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 11},
  [261] = {.lex_state = 80},
  [262] = {.lex_state = 66},
  [263] = {.lex_state = 66},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 11},
  [268] = {.lex_state = 11},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 21},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 15},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 80},
  [276] = {.lex_state = 15},
  [277] = {.lex_state = 15},
  [278] = {.lex_state = 15},
  [279] = {.lex_state = 21},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 15},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 15},
  [287] = {.lex_state = 80},
  [288] = {.lex_state = 15},
  [289] = {.lex_state = 15},
  [290] = {.lex_state = 80},
  [291] = {.lex_state = 80},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 80},
  [296] = {.lex_state = 66},
  [297] = {.lex_state = 80},
  [298] = {.lex_state = 21},
  [299] = {.lex_state = 21},
  [300] = {.lex_state = 80},
  [301] = {.lex_state = 80},
  [302] = {.lex_state = 21},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 80},
  [305] = {.lex_state = 21},
  [306] = {.lex_state = 21},
  [307] = {.lex_state = 21},
  [308] = {.lex_state = 80},
  [309] = {.lex_state = 11},
  [310] = {.lex_state = 11},
  [311] = {.lex_state = 80},
  [312] = {.lex_state = 80},
  [313] = {.lex_state = 80},
  [314] = {.lex_state = 21},
  [315] = {.lex_state = 66},
  [316] = {.lex_state = 21},
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 66},
  [319] = {.lex_state = 80},
  [320] = {.lex_state = 21},
  [321] = {.lex_state = 66},
  [322] = {.lex_state = 9},
  [323] = {.lex_state = 80},
  [324] = {.lex_state = 80},
  [325] = {.lex_state = 80},
  [326] = {.lex_state = 80},
  [327] = {.lex_state = 80},
  [328] = {.lex_state = 80},
  [329] = {.lex_state = 11},
  [330] = {.lex_state = 9},
  [331] = {.lex_state = 80},
  [332] = {.lex_state = 80},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 80},
  [337] = {.lex_state = 80},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 9},
  [342] = {.lex_state = 80},
  [343] = {.lex_state = 9},
  [344] = {.lex_state = 9},
  [345] = {.lex_state = 80},
  [346] = {.lex_state = 80},
  [347] = {.lex_state = 80},
  [348] = {.lex_state = 80},
  [349] = {.lex_state = 80},
  [350] = {.lex_state = 31},
  [351] = {.lex_state = 80},
  [352] = {.lex_state = 80},
  [353] = {.lex_state = 80},
  [354] = {.lex_state = 80},
  [355] = {.lex_state = 31},
  [356] = {.lex_state = 37},
  [357] = {.lex_state = 80},
  [358] = {.lex_state = 80},
  [359] = {.lex_state = 166},
  [360] = {.lex_state = 80},
  [361] = {.lex_state = 80},
  [362] = {.lex_state = 80},
  [363] = {.lex_state = 80},
  [364] = {.lex_state = 80},
  [365] = {.lex_state = 80},
  [366] = {.lex_state = 80},
  [367] = {.lex_state = 176},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 80},
  [370] = {.lex_state = 80},
  [371] = {.lex_state = 80},
  [372] = {.lex_state = 80},
  [373] = {.lex_state = 80},
  [374] = {.lex_state = 80},
  [375] = {.lex_state = 80},
  [376] = {.lex_state = 80},
  [377] = {.lex_state = 80},
  [378] = {.lex_state = 80},
  [379] = {.lex_state = 80},
  [380] = {.lex_state = 80},
  [381] = {.lex_state = 80},
  [382] = {.lex_state = 11},
  [383] = {.lex_state = 80},
  [384] = {.lex_state = 80},
  [385] = {.lex_state = 80},
  [386] = {.lex_state = 80},
  [387] = {.lex_state = 80},
  [388] = {.lex_state = 80},
  [389] = {.lex_state = 80},
  [390] = {.lex_state = 80},
  [391] = {.lex_state = 80},
  [392] = {.lex_state = 21},
  [393] = {.lex_state = 80},
  [394] = {.lex_state = 80},
  [395] = {.lex_state = 166},
  [396] = {.lex_state = 176},
  [397] = {.lex_state = 80},
  [398] = {.lex_state = 80},
  [399] = {.lex_state = 80},
  [400] = {.lex_state = 80},
  [401] = {.lex_state = 80},
  [402] = {.lex_state = 80},
  [403] = {.lex_state = 80},
  [404] = {.lex_state = 166},
  [405] = {.lex_state = 176},
  [406] = {.lex_state = 80},
  [407] = {.lex_state = 11},
  [408] = {.lex_state = 80},
  [409] = {.lex_state = 166},
  [410] = {.lex_state = 176},
  [411] = {.lex_state = 166},
  [412] = {.lex_state = 176},
  [413] = {.lex_state = 166},
  [414] = {.lex_state = 176},
  [415] = {.lex_state = 80},
};

enum {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
  ts_external_token___error_recovery = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
  [ts_external_token___error_recovery] = sym___error_recovery,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
    [ts_external_token___error_recovery] = true,
  },
  [2] = {
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [3] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
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
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_js_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym__js_expr_token2] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(375),
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(353),
    [sym__selector] = STATE(197),
    [sym_universal_selector] = STATE(197),
    [sym_class_selector] = STATE(197),
    [sym_pseudo_class_selector] = STATE(197),
    [sym_pseudo_element_selector] = STATE(197),
    [sym_id_selector] = STATE(197),
    [sym_attribute_selector] = STATE(197),
    [sym_child_selector] = STATE(197),
    [sym_descendant_selector] = STATE(197),
    [sym_sibling_selector] = STATE(197),
    [sym_adjacent_sibling_selector] = STATE(197),
    [sym_namespace_selector] = STATE(197),
    [sym_declaration] = STATE(8),
    [sym_string_value] = STATE(197),
    [sym_js_interpolation] = STATE(65),
    [aux_sym_stylesheet_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATmedia] = ACTIONS(11),
    [anon_sym_ATcharset] = ACTIONS(13),
    [anon_sym_ATnamespace] = ACTIONS(15),
    [anon_sym_ATkeyframes] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_at_keyword] = ACTIONS(39),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym__pseudo_class_selector_colon] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(67), 1,
      sym_js_interpolation,
    STATE(352), 1,
      sym_selectors,
    STATE(362), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(7), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(197), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [100] = 25,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_js_interpolation,
    STATE(352), 1,
      sym_selectors,
    STATE(381), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(197), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [200] = 25,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_js_interpolation,
    STATE(352), 1,
      sym_selectors,
    STATE(400), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(197), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [300] = 25,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_js_interpolation,
    STATE(352), 1,
      sym_selectors,
    STATE(377), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(3), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(197), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [400] = 25,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_js_interpolation,
    STATE(352), 1,
      sym_selectors,
    STATE(397), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(4), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(197), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [500] = 25,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_js_interpolation,
    STATE(352), 1,
      sym_selectors,
    STATE(365), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(197), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [600] = 24,
    ACTIONS(9), 1,
      anon_sym_ATimport,
    ACTIONS(11), 1,
      anon_sym_ATmedia,
    ACTIONS(13), 1,
      anon_sym_ATcharset,
    ACTIONS(15), 1,
      anon_sym_ATnamespace,
    ACTIONS(19), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_at_keyword,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_js_interpolation,
    STATE(353), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(197), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [697] = 24,
    ACTIONS(77), 1,
      anon_sym_ATimport,
    ACTIONS(80), 1,
      anon_sym_ATmedia,
    ACTIONS(83), 1,
      anon_sym_ATcharset,
    ACTIONS(86), 1,
      anon_sym_ATnamespace,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      anon_sym_ATsupports,
    ACTIONS(97), 1,
      sym_nesting_selector,
    ACTIONS(100), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(124), 1,
      sym_at_keyword,
    ACTIONS(127), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(130), 1,
      sym__pseudo_class_selector_colon,
    STATE(67), 1,
      sym_js_interpolation,
    STATE(352), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(197), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [794] = 24,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      anon_sym_ATimport,
    ACTIONS(138), 1,
      anon_sym_ATmedia,
    ACTIONS(141), 1,
      anon_sym_ATcharset,
    ACTIONS(144), 1,
      anon_sym_ATnamespace,
    ACTIONS(150), 1,
      anon_sym_ATsupports,
    ACTIONS(153), 1,
      sym_nesting_selector,
    ACTIONS(156), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_COLON_COLON,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(180), 1,
      sym_at_keyword,
    ACTIONS(183), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(186), 1,
      sym__pseudo_class_selector_colon,
    STATE(65), 1,
      sym_js_interpolation,
    STATE(353), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(197), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [891] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(189), 1,
      sym_nesting_selector,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    STATE(36), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(39), 1,
      sym_string_value,
    STATE(180), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(200), 12,
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
      sym_namespace_selector,
  [976] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      sym_nesting_selector,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(39), 1,
      sym_string_value,
    STATE(180), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(198), 12,
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
      sym_namespace_selector,
  [1061] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(219), 1,
      sym_nesting_selector,
    STATE(39), 1,
      sym_string_value,
    STATE(46), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(180), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(201), 12,
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
      sym_namespace_selector,
  [1143] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      sym_nesting_selector,
    ACTIONS(223), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_important,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_plain_value,
    STATE(184), 1,
      sym_namespace_selector,
    STATE(193), 1,
      sym_string_value,
    STATE(255), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(224), 11,
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
  [1224] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      sym_nesting_selector,
    ACTIONS(223), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_important,
    ACTIONS(245), 1,
      sym_plain_value,
    STATE(184), 1,
      sym_namespace_selector,
    STATE(193), 1,
      sym_string_value,
    STATE(259), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(224), 11,
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
  [1305] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LPAREN2,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(74), 1,
      sym_block,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(260), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1380] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LPAREN2,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(109), 1,
      sym_block,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(257), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1455] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      sym_important,
    ACTIONS(277), 1,
      anon_sym_LPAREN2,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      sym_plain_value,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(329), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(282), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1518] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_LPAREN2,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(287), 1,
      sym_important,
    ACTIONS(289), 1,
      sym_plain_value,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(329), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(289), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1581] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(301), 1,
      sym_important,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    STATE(43), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(181), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1649] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(307), 1,
      sym_important,
    STATE(51), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(181), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1714] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym_important,
    STATE(45), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(181), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1779] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_arguments,
    ACTIONS(317), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(315), 4,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(321), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(313), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1823] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(311), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1884] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(295), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [1945] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(319), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2006] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(331), 1,
      sym_nesting_selector,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(144), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [2056] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(335), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(142), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [2106] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(337), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2162] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(339), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(204), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [2212] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_POUND,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      sym_important,
    ACTIONS(355), 1,
      anon_sym_LPAREN2,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      aux_sym_integer_value_token1,
    ACTIONS(367), 1,
      aux_sym_float_value_token1,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(373), 1,
      sym_plain_value,
    STATE(31), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(181), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2270] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(376), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(134), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [2320] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    STATE(237), 1,
      sym_arguments,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(378), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(313), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [2366] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(221), 1,
      sym_nesting_selector,
    ACTIONS(384), 1,
      sym_identifier,
    STATE(184), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(224), 12,
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
      sym_string_value,
  [2418] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(394), 1,
      sym_important,
    ACTIONS(397), 1,
      anon_sym_LPAREN2,
    ACTIONS(400), 1,
      anon_sym_SQUOTE,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      aux_sym_integer_value_token1,
    ACTIONS(409), 1,
      aux_sym_float_value_token1,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(415), 1,
      sym_plain_value,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(386), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2474] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(346), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2534] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(422), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(145), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [2584] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(348), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2644] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(428), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(432), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(426), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2682] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(436), 8,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(434), 15,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [2716] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(438), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(215), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [2766] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(440), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(143), 13,
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
      sym_namespace_selector,
      sym_string_value,
  [2816] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    ACTIONS(446), 1,
      sym_important,
    STATE(31), 1,
      aux_sym_declaration_repeat1,
    STATE(181), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2876] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(221), 1,
      sym_nesting_selector,
    ACTIONS(448), 1,
      sym_identifier,
    STATE(179), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(224), 12,
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
      sym_string_value,
  [2928] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(452), 1,
      sym_important,
    STATE(31), 1,
      aux_sym_declaration_repeat1,
    STATE(181), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2985] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3040] = 5,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(456), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3075] = 5,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(462), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3110] = 5,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(468), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3145] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym_important,
    STATE(45), 1,
      aux_sym_declaration_repeat1,
    STATE(181), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3202] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(472), 1,
      sym_important,
    STATE(31), 1,
      aux_sym_declaration_repeat1,
    STATE(181), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3259] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(307), 1,
      sym_important,
    STATE(51), 1,
      aux_sym_declaration_repeat1,
    STATE(181), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3316] = 5,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(474), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3351] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(478), 1,
      sym_important,
    ACTIONS(480), 1,
      sym_plain_value,
    ACTIONS(482), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(52), 1,
      sym_js_interpolation,
    STATE(21), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3405] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(486), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(484), 13,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3435] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(488), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3489] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3543] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(492), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3597] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3651] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(496), 1,
      sym_important,
    ACTIONS(498), 1,
      sym_plain_value,
    STATE(52), 1,
      sym_js_interpolation,
    STATE(20), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3705] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_arguments,
    ACTIONS(502), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(500), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(315), 6,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(321), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [3745] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(486), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(484), 13,
      sym__pseudo_class_selector_colon,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3775] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3829] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3883] = 4,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(510), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(508), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3915] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(514), 1,
      sym_important,
    ACTIONS(516), 1,
      sym_plain_value,
    STATE(50), 1,
      sym_js_interpolation,
    STATE(22), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3969] = 4,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(518), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(522), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4001] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(526), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(524), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4030] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(530), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(528), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4059] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(534), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(532), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4088] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(538), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(536), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4117] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(526), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(524), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4146] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(542), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(540), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4175] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(542), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(540), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4204] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(546), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(544), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4233] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(548), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4262] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(552), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(554), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4291] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(558), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(556), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4320] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(560), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(562), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4349] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(564), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(566), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4378] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(570), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(568), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4407] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4458] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(574), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(572), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4487] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(576), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(578), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4516] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(582), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(580), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4545] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(586), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(584), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4574] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(588), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(133), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4603] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(592), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(590), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4632] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(180), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4683] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(594), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4712] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(598), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4741] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(604), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(602), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4770] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(586), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(584), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4799] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(608), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(606), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4828] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(612), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(610), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4857] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(546), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(544), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4886] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(616), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(614), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4915] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(618), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4944] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(622), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(624), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4973] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(628), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(626), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5002] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(632), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(630), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5031] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(634), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(636), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5060] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(640), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(638), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5089] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(642), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5118] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(648), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(646), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5147] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(652), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(650), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5176] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(542), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(540), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5205] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(656), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(654), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5234] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(542), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(540), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5263] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(552), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(554), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5292] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(658), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5321] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(662), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(664), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5350] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(666), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5379] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(434), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5408] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(560), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(562), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5437] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(670), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(92), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5466] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(622), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(624), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5495] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(570), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(568), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5524] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(564), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(566), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5553] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(612), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(610), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5582] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(576), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(578), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5611] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(530), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(528), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5640] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(662), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(664), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5669] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(652), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(650), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5698] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(674), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(672), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5727] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(640), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(638), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5756] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_arguments,
    ACTIONS(321), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(315), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5791] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(582), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(580), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5820] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(574), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(572), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5849] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(678), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(676), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5878] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(632), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(630), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5907] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(534), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(532), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5936] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(313), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5965] = 4,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(680), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5996] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(686), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6025] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(648), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(646), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6054] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(690), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6083] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(694), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6112] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(698), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6141] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(656), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(654), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6170] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(634), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(636), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6199] = 4,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(702), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6230] = 4,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(706), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6261] = 4,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(710), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6292] = 4,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(714), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6323] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(538), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(536), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6352] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_unit,
    ACTIONS(720), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(718), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6384] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_unit,
    ACTIONS(726), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(724), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6416] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(730), 1,
      sym_important,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(734), 1,
      sym_plain_value,
    STATE(251), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6464] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(736), 1,
      sym_important,
    ACTIONS(738), 1,
      sym_plain_value,
    STATE(182), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6512] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(251), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(740), 1,
      sym_important,
    ACTIONS(742), 1,
      sym_plain_value,
    STATE(171), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6560] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(744), 1,
      sym_important,
    ACTIONS(746), 1,
      sym_plain_value,
    STATE(276), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6608] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(748), 1,
      sym_important,
    ACTIONS(750), 1,
      sym_plain_value,
    STATE(273), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6656] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(752), 1,
      sym_important,
    ACTIONS(754), 1,
      sym_plain_value,
    STATE(258), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6704] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(756), 1,
      sym_important,
    ACTIONS(758), 1,
      sym_plain_value,
    STATE(288), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6752] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_POUND,
    ACTIONS(762), 1,
      anon_sym_LBRACK,
    ACTIONS(764), 1,
      sym_important,
    ACTIONS(766), 1,
      anon_sym_LPAREN2,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    ACTIONS(772), 1,
      aux_sym_integer_value_token1,
    ACTIONS(774), 1,
      aux_sym_float_value_token1,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(778), 1,
      sym_plain_value,
    STATE(228), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6800] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(780), 1,
      sym_important,
    ACTIONS(782), 1,
      sym_plain_value,
    STATE(286), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6848] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_POUND,
    ACTIONS(762), 1,
      anon_sym_LBRACK,
    ACTIONS(766), 1,
      anon_sym_LPAREN2,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    ACTIONS(772), 1,
      aux_sym_integer_value_token1,
    ACTIONS(774), 1,
      aux_sym_float_value_token1,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(784), 1,
      sym_important,
    ACTIONS(786), 1,
      sym_plain_value,
    STATE(190), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6896] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(788), 1,
      sym_important,
    ACTIONS(790), 1,
      sym_plain_value,
    STATE(278), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6944] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_important,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      sym_plain_value,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_identifier,
    STATE(255), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6992] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      sym_important,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      sym_plain_value,
    ACTIONS(732), 1,
      sym_identifier,
    STATE(282), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7040] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(792), 1,
      sym_important,
    ACTIONS(794), 1,
      sym_plain_value,
    STATE(277), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7088] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_POUND,
    ACTIONS(762), 1,
      anon_sym_LBRACK,
    ACTIONS(766), 1,
      anon_sym_LPAREN2,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    ACTIONS(772), 1,
      aux_sym_integer_value_token1,
    ACTIONS(774), 1,
      aux_sym_float_value_token1,
    ACTIONS(776), 1,
      sym_identifier,
    ACTIONS(796), 1,
      sym_important,
    ACTIONS(798), 1,
      sym_plain_value,
    STATE(192), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7136] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      sym_important,
    ACTIONS(245), 1,
      sym_plain_value,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_identifier,
    STATE(259), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7184] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      aux_sym_integer_value_token1,
    ACTIONS(237), 1,
      aux_sym_float_value_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_important,
    ACTIONS(289), 1,
      sym_plain_value,
    ACTIONS(732), 1,
      sym_identifier,
    STATE(289), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7232] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(802), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(800), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7261] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(806), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(804), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7290] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(436), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(434), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7319] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(810), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(808), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7348] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(814), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(812), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7377] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(818), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(816), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7406] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(822), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(820), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7435] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(826), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(824), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7464] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(830), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(828), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7493] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(834), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(832), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7522] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(838), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(836), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7551] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(842), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(840), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7580] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    ACTIONS(432), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(428), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7612] = 5,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(844), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(426), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7642] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(850), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(848), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7674] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(854), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(852), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7706] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(856), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(344), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7738] = 5,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(378), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(313), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7768] = 5,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(378), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(426), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7798] = 5,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(844), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(313), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7828] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SEMI,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    ACTIONS(432), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(428), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7860] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SEMI,
    ACTIONS(432), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(428), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7889] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(432), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(428), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7918] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    ACTIONS(432), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(428), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [7947] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(864), 1,
      anon_sym_SEMI,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(866), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(870), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(285), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7986] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(432), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(428), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [8015] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(874), 1,
      anon_sym_SEMI,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(866), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(870), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(284), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8054] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(428), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_DASH,
    ACTIONS(426), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8082] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(434), 14,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_DASH,
  [8108] = 3,
    ACTIONS(876), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(313), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8130] = 3,
    ACTIONS(878), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(313), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8152] = 14,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_LBRACE,
    ACTIONS(884), 1,
      anon_sym_COLON_COLON,
    ACTIONS(886), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      anon_sym_LBRACK,
    ACTIONS(890), 1,
      anon_sym_GT,
    ACTIONS(892), 1,
      anon_sym_TILDE,
    ACTIONS(894), 1,
      anon_sym_PLUS,
    ACTIONS(896), 1,
      anon_sym_PIPE,
    ACTIONS(898), 1,
      sym__descendant_operator,
    ACTIONS(900), 1,
      sym__pseudo_class_selector_colon,
    STATE(324), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8196] = 14,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(884), 1,
      anon_sym_COLON_COLON,
    ACTIONS(886), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      anon_sym_LBRACK,
    ACTIONS(890), 1,
      anon_sym_GT,
    ACTIONS(892), 1,
      anon_sym_TILDE,
    ACTIONS(894), 1,
      anon_sym_PLUS,
    ACTIONS(896), 1,
      anon_sym_PIPE,
    ACTIONS(898), 1,
      sym__descendant_operator,
    ACTIONS(900), 1,
      sym__pseudo_class_selector_colon,
    STATE(348), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8240] = 3,
    ACTIONS(902), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(313), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8262] = 14,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(884), 1,
      anon_sym_COLON_COLON,
    ACTIONS(886), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      anon_sym_LBRACK,
    ACTIONS(890), 1,
      anon_sym_GT,
    ACTIONS(892), 1,
      anon_sym_TILDE,
    ACTIONS(894), 1,
      anon_sym_PLUS,
    ACTIONS(896), 1,
      anon_sym_PIPE,
    ACTIONS(898), 1,
      sym__descendant_operator,
    ACTIONS(900), 1,
      sym__pseudo_class_selector_colon,
    STATE(346), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8306] = 12,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(884), 1,
      anon_sym_COLON_COLON,
    ACTIONS(886), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      anon_sym_LBRACK,
    ACTIONS(890), 1,
      anon_sym_GT,
    ACTIONS(892), 1,
      anon_sym_TILDE,
    ACTIONS(894), 1,
      anon_sym_PLUS,
    ACTIONS(896), 1,
      anon_sym_PIPE,
    ACTIONS(898), 1,
      sym__descendant_operator,
    ACTIONS(900), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8345] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(486), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(484), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [8368] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_arguments,
    ACTIONS(315), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(321), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8395] = 12,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(884), 1,
      anon_sym_COLON_COLON,
    ACTIONS(886), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      anon_sym_LBRACK,
    ACTIONS(890), 1,
      anon_sym_GT,
    ACTIONS(892), 1,
      anon_sym_TILDE,
    ACTIONS(894), 1,
      anon_sym_PLUS,
    ACTIONS(896), 1,
      anon_sym_PIPE,
    ACTIONS(898), 1,
      sym__descendant_operator,
    ACTIONS(900), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(906), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [8434] = 6,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(283), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8460] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(804), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(806), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8482] = 6,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(303), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8508] = 6,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(265), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8534] = 6,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(266), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8560] = 6,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(309), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8586] = 6,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(272), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8612] = 6,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    ACTIONS(908), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(329), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8638] = 6,
    ACTIONS(259), 1,
      anon_sym_selector,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(264), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8664] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_unit,
    ACTIONS(718), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(720), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8688] = 12,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(884), 1,
      anon_sym_COLON_COLON,
    ACTIONS(886), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      anon_sym_LBRACK,
    ACTIONS(890), 1,
      anon_sym_GT,
    ACTIONS(892), 1,
      anon_sym_TILDE,
    ACTIONS(894), 1,
      anon_sym_PLUS,
    ACTIONS(896), 1,
      anon_sym_PIPE,
    ACTIONS(898), 1,
      sym__descendant_operator,
    ACTIONS(900), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8726] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_unit,
    ACTIONS(724), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(726), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8750] = 6,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(920), 1,
      anon_sym_LPAREN2,
    ACTIONS(922), 1,
      anon_sym_QMARK,
    ACTIONS(924), 1,
      aux_sym__js_expr_token2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(916), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [8776] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(828), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(830), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8797] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(836), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(838), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8818] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(926), 1,
      anon_sym_COLON,
    STATE(237), 1,
      sym_arguments,
    ACTIONS(315), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(500), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8847] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    STATE(237), 1,
      sym_arguments,
    ACTIONS(315), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8872] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(824), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(826), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8893] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(820), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(822), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8914] = 11,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(884), 1,
      anon_sym_COLON_COLON,
    ACTIONS(886), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      anon_sym_LBRACK,
    ACTIONS(890), 1,
      anon_sym_GT,
    ACTIONS(892), 1,
      anon_sym_TILDE,
    ACTIONS(894), 1,
      anon_sym_PLUS,
    ACTIONS(896), 1,
      anon_sym_PIPE,
    ACTIONS(898), 1,
      sym__descendant_operator,
    ACTIONS(900), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8949] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
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
  [8970] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(812), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(814), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8991] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(808), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(810), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9012] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(816), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(818), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9033] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(800), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(802), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9054] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(832), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(834), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9075] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(840), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(842), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9096] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_SLASH,
    ACTIONS(928), 1,
      sym_unit,
    ACTIONS(724), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9118] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_SLASH,
    ACTIONS(930), 1,
      sym_unit,
    ACTIONS(718), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9140] = 4,
    ACTIONS(936), 1,
      anon_sym_QMARK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
    ACTIONS(932), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [9159] = 3,
    ACTIONS(936), 1,
      anon_sym_QMARK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(932), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [9176] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_SLASH,
    ACTIONS(820), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9195] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SLASH,
    ACTIONS(832), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9214] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_SLASH,
    ACTIONS(824), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9233] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SLASH,
    ACTIONS(836), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9252] = 3,
    ACTIONS(940), 1,
      anon_sym_QMARK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(938), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [9269] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_SLASH,
    ACTIONS(828), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9288] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SLASH,
    ACTIONS(804), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9307] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_SLASH,
    ACTIONS(840), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9326] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SLASH,
    ACTIONS(812), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9345] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SLASH,
    ACTIONS(808), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9364] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(434), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9383] = 7,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(920), 1,
      anon_sym_LPAREN2,
    ACTIONS(922), 1,
      anon_sym_QMARK,
    ACTIONS(924), 1,
      aux_sym__js_expr_token2,
    ACTIONS(942), 1,
      anon_sym_EQ_GT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(916), 3,
      anon_sym_RBRACE,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [9408] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
    ACTIONS(944), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [9427] = 3,
    ACTIONS(948), 1,
      anon_sym_QMARK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(944), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [9444] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SLASH,
    ACTIONS(800), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9463] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(816), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9482] = 6,
    ACTIONS(950), 1,
      anon_sym_RBRACE,
    ACTIONS(954), 1,
      aux_sym_integer_value_token1,
    STATE(354), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      sym_from,
      sym_to,
    STATE(253), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9504] = 6,
    ACTIONS(954), 1,
      aux_sym_integer_value_token1,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      sym_from,
      sym_to,
    STATE(263), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9526] = 7,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    ACTIONS(958), 1,
      sym_identifier,
    STATE(230), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(371), 2,
      sym_string_value,
      sym_call_expression,
  [9550] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(964), 1,
      anon_sym_RBRACK,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    STATE(326), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9574] = 6,
    ACTIONS(954), 1,
      aux_sym_integer_value_token1,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      sym_from,
      sym_to,
    STATE(263), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9596] = 7,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    ACTIONS(972), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_block,
    STATE(287), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_and,
      anon_sym_or,
  [9620] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
    STATE(337), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9644] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(978), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9668] = 7,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      sym_block,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_and,
      anon_sym_or,
  [9692] = 7,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    ACTIONS(958), 1,
      sym_identifier,
    STATE(230), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(390), 2,
      sym_string_value,
      sym_call_expression,
  [9716] = 6,
    ACTIONS(954), 1,
      aux_sym_integer_value_token1,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      sym_from,
      sym_to,
    STATE(256), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9738] = 6,
    ACTIONS(984), 1,
      anon_sym_RBRACE,
    ACTIONS(989), 1,
      aux_sym_integer_value_token1,
    STATE(354), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(986), 2,
      sym_from,
      sym_to,
    STATE(263), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9760] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(992), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9773] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(994), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9786] = 6,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      sym_block,
    STATE(300), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_and,
      anon_sym_or,
  [9807] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(996), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9820] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(998), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9833] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1000), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9846] = 6,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym__js_args_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [9867] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9880] = 6,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      sym_block,
    STATE(312), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_and,
      anon_sym_or,
  [9901] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(1006), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9920] = 6,
    ACTIONS(1008), 1,
      anon_sym_LPAREN2,
    ACTIONS(1010), 1,
      sym__js_identifier,
    ACTIONS(1012), 1,
      sym__js_string,
    STATE(314), 1,
      sym__js_expr,
    STATE(401), 1,
      sym__js_fat_arrow_function,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9940] = 6,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_block,
    STATE(297), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9960] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9978] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(1018), 1,
      anon_sym_SEMI,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9996] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(1020), 1,
      anon_sym_SEMI,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10014] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
    ACTIONS(1022), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10030] = 6,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1028), 1,
      sym__js_string,
    STATE(270), 1,
      sym__js_expr,
    STATE(361), 1,
      sym__js_args,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10050] = 6,
    ACTIONS(1030), 1,
      anon_sym_LBRACE,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    ACTIONS(1034), 1,
      sym__js_identifier,
    STATE(313), 1,
      sym__js_param,
    STATE(406), 1,
      sym__js_params,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10070] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10088] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1038), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10102] = 5,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_SEMI,
    STATE(327), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_and,
      anon_sym_or,
  [10120] = 5,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_SEMI,
    STATE(325), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_and,
      anon_sym_or,
  [10138] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(1044), 1,
      anon_sym_RBRACK,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10156] = 6,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
    STATE(124), 1,
      sym_block,
    STATE(297), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10176] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10194] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    ACTIONS(962), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10212] = 5,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    ACTIONS(1052), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(408), 2,
      sym_string_value,
      sym_call_expression,
  [10230] = 5,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    ACTIONS(1054), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(380), 2,
      sym_string_value,
      sym_call_expression,
  [10248] = 6,
    ACTIONS(1008), 1,
      anon_sym_LPAREN2,
    ACTIONS(1010), 1,
      sym__js_identifier,
    ACTIONS(1056), 1,
      sym__js_string,
    STATE(306), 1,
      sym__js_expr,
    STATE(374), 1,
      sym__js_fat_arrow_function,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10268] = 6,
    ACTIONS(1008), 1,
      anon_sym_LPAREN2,
    ACTIONS(1010), 1,
      sym__js_identifier,
    ACTIONS(1058), 1,
      sym__js_string,
    STATE(305), 1,
      sym__js_expr,
    STATE(373), 1,
      sym__js_fat_arrow_function,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10288] = 6,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1028), 1,
      sym__js_string,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      sym__js_expr,
    STATE(363), 1,
      sym__js_args,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10308] = 4,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10323] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(532), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10334] = 4,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1038), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10349] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(1067), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [10364] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(1069), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [10379] = 5,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_block,
    STATE(297), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10396] = 4,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1071), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10411] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(1060), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [10426] = 4,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_and,
      anon_sym_or,
  [10441] = 4,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym__js_params_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1076), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [10456] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [10471] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(1080), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [10486] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(1082), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [10501] = 4,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym__js_params_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1087), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [10516] = 4,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_and,
      anon_sym_or,
  [10531] = 3,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10544] = 4,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10559] = 5,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      sym_block,
    STATE(297), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10576] = 4,
    ACTIONS(1074), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym__js_params_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1091), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [10591] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(1093), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [10606] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(562), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10617] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(1095), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [10632] = 5,
    ACTIONS(1030), 1,
      anon_sym_LBRACE,
    ACTIONS(1034), 1,
      sym__js_identifier,
    STATE(313), 1,
      sym__js_param,
    STATE(389), 1,
      sym__js_params,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10649] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1097), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10660] = 4,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10675] = 4,
    ACTIONS(946), 1,
      anon_sym_QMARK,
    ACTIONS(1101), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(934), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [10690] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(528), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10701] = 4,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1103), 1,
      sym__js_string,
    STATE(279), 1,
      sym__js_expr,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10715] = 4,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      aux_sym__js_args_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10729] = 4,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_LBRACE,
    STATE(345), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10743] = 4,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_SEMI,
    STATE(297), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10757] = 4,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RBRACK,
    STATE(328), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10771] = 4,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_SEMI,
    STATE(297), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10785] = 4,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10799] = 3,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_and,
      anon_sym_or,
  [10811] = 4,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1120), 1,
      sym__js_string,
    STATE(299), 1,
      sym__js_expr,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10825] = 4,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10839] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1087), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [10849] = 4,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1125), 1,
      sym__js_string,
    STATE(302), 1,
      sym__js_expr,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10863] = 4,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1127), 1,
      sym__js_string,
    STATE(320), 1,
      sym__js_expr,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10877] = 4,
    ACTIONS(1030), 1,
      anon_sym_LBRACE,
    ACTIONS(1129), 1,
      sym__js_identifier,
    STATE(332), 1,
      sym__js_param,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10891] = 4,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_RBRACK,
    STATE(328), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10905] = 4,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RBRACK,
    STATE(328), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10919] = 4,
    ACTIONS(1024), 1,
      sym__js_identifier,
    ACTIONS(1135), 1,
      anon_sym_LBRACK,
    ACTIONS(1137), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10933] = 4,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1139), 1,
      sym__js_string,
    STATE(316), 1,
      sym__js_expr,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10947] = 4,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1141), 1,
      sym__js_string,
    STATE(307), 1,
      sym__js_expr,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10961] = 4,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1143), 1,
      sym__js_string,
    STATE(248), 1,
      sym__js_expr,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10975] = 4,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      aux_sym__js_args_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10989] = 4,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1148), 1,
      sym__js_string,
    STATE(234), 1,
      sym__js_expr,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11003] = 4,
    ACTIONS(1026), 1,
      sym__js_identifier,
    ACTIONS(1150), 1,
      sym__js_string,
    STATE(298), 1,
      sym__js_expr,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11017] = 4,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11031] = 4,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11045] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1157), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [11055] = 4,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11069] = 3,
    ACTIONS(1161), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11080] = 3,
    ACTIONS(1163), 1,
      aux_sym_color_value_token1,
    ACTIONS(1165), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11091] = 3,
    ACTIONS(1167), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11102] = 3,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11113] = 3,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11124] = 3,
    ACTIONS(1169), 1,
      anon_sym_LBRACE,
    STATE(318), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11135] = 3,
    ACTIONS(1165), 1,
      sym_identifier,
    ACTIONS(1171), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11146] = 3,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
    ACTIONS(1173), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11157] = 3,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11168] = 2,
    ACTIONS(1175), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11176] = 2,
    ACTIONS(1177), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11184] = 2,
    ACTIONS(1179), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11192] = 2,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11200] = 2,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11208] = 2,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11216] = 2,
    ACTIONS(1181), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11224] = 2,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11232] = 2,
    ACTIONS(1185), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11240] = 2,
    ACTIONS(1187), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11248] = 2,
    ACTIONS(1189), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11256] = 2,
    ACTIONS(1191), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11264] = 2,
    ACTIONS(1191), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11272] = 2,
    ACTIONS(1193), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11280] = 2,
    ACTIONS(1195), 1,
      anon_sym_EQ_GT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11288] = 2,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11296] = 2,
    ACTIONS(1080), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11304] = 2,
    ACTIONS(1197), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11312] = 2,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11320] = 2,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11328] = 2,
    ACTIONS(1201), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11336] = 2,
    ACTIONS(1199), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11344] = 2,
    ACTIONS(1203), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11352] = 2,
    ACTIONS(1205), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11360] = 2,
    ACTIONS(1207), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11368] = 2,
    ACTIONS(1209), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11376] = 2,
    ACTIONS(1209), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11384] = 2,
    ACTIONS(1211), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11392] = 2,
    ACTIONS(1211), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11400] = 2,
    ACTIONS(1213), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11408] = 2,
    ACTIONS(1213), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11416] = 2,
    ACTIONS(1215), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11424] = 2,
    ACTIONS(1217), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11432] = 2,
    ACTIONS(1219), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11440] = 2,
    ACTIONS(1221), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11448] = 2,
    ACTIONS(1223), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11456] = 2,
    ACTIONS(1225), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11464] = 2,
    ACTIONS(1227), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11472] = 2,
    ACTIONS(1229), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11480] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11488] = 2,
    ACTIONS(1231), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11496] = 2,
    ACTIONS(1233), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11504] = 2,
    ACTIONS(1235), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11512] = 2,
    ACTIONS(1093), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11520] = 2,
    ACTIONS(1237), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11528] = 2,
    ACTIONS(1239), 1,
      anon_sym_EQ_GT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11536] = 2,
    ACTIONS(1241), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11544] = 2,
    ACTIONS(1243), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11552] = 2,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11560] = 2,
    ACTIONS(1247), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11568] = 2,
    ACTIONS(1249), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11576] = 2,
    ACTIONS(1251), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11584] = 2,
    ACTIONS(1253), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11592] = 2,
    ACTIONS(1255), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11600] = 2,
    ACTIONS(1257), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11608] = 2,
    ACTIONS(1259), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11616] = 2,
    ACTIONS(1261), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11624] = 2,
    ACTIONS(1185), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 100,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 300,
  [SMALL_STATE(6)] = 400,
  [SMALL_STATE(7)] = 500,
  [SMALL_STATE(8)] = 600,
  [SMALL_STATE(9)] = 697,
  [SMALL_STATE(10)] = 794,
  [SMALL_STATE(11)] = 891,
  [SMALL_STATE(12)] = 976,
  [SMALL_STATE(13)] = 1061,
  [SMALL_STATE(14)] = 1143,
  [SMALL_STATE(15)] = 1224,
  [SMALL_STATE(16)] = 1305,
  [SMALL_STATE(17)] = 1380,
  [SMALL_STATE(18)] = 1455,
  [SMALL_STATE(19)] = 1518,
  [SMALL_STATE(20)] = 1581,
  [SMALL_STATE(21)] = 1649,
  [SMALL_STATE(22)] = 1714,
  [SMALL_STATE(23)] = 1779,
  [SMALL_STATE(24)] = 1823,
  [SMALL_STATE(25)] = 1884,
  [SMALL_STATE(26)] = 1945,
  [SMALL_STATE(27)] = 2006,
  [SMALL_STATE(28)] = 2056,
  [SMALL_STATE(29)] = 2106,
  [SMALL_STATE(30)] = 2162,
  [SMALL_STATE(31)] = 2212,
  [SMALL_STATE(32)] = 2270,
  [SMALL_STATE(33)] = 2320,
  [SMALL_STATE(34)] = 2366,
  [SMALL_STATE(35)] = 2418,
  [SMALL_STATE(36)] = 2474,
  [SMALL_STATE(37)] = 2534,
  [SMALL_STATE(38)] = 2584,
  [SMALL_STATE(39)] = 2644,
  [SMALL_STATE(40)] = 2682,
  [SMALL_STATE(41)] = 2716,
  [SMALL_STATE(42)] = 2766,
  [SMALL_STATE(43)] = 2816,
  [SMALL_STATE(44)] = 2876,
  [SMALL_STATE(45)] = 2928,
  [SMALL_STATE(46)] = 2985,
  [SMALL_STATE(47)] = 3040,
  [SMALL_STATE(48)] = 3075,
  [SMALL_STATE(49)] = 3110,
  [SMALL_STATE(50)] = 3145,
  [SMALL_STATE(51)] = 3202,
  [SMALL_STATE(52)] = 3259,
  [SMALL_STATE(53)] = 3316,
  [SMALL_STATE(54)] = 3351,
  [SMALL_STATE(55)] = 3405,
  [SMALL_STATE(56)] = 3435,
  [SMALL_STATE(57)] = 3489,
  [SMALL_STATE(58)] = 3543,
  [SMALL_STATE(59)] = 3597,
  [SMALL_STATE(60)] = 3651,
  [SMALL_STATE(61)] = 3705,
  [SMALL_STATE(62)] = 3745,
  [SMALL_STATE(63)] = 3775,
  [SMALL_STATE(64)] = 3829,
  [SMALL_STATE(65)] = 3883,
  [SMALL_STATE(66)] = 3915,
  [SMALL_STATE(67)] = 3969,
  [SMALL_STATE(68)] = 4001,
  [SMALL_STATE(69)] = 4030,
  [SMALL_STATE(70)] = 4059,
  [SMALL_STATE(71)] = 4088,
  [SMALL_STATE(72)] = 4117,
  [SMALL_STATE(73)] = 4146,
  [SMALL_STATE(74)] = 4175,
  [SMALL_STATE(75)] = 4204,
  [SMALL_STATE(76)] = 4233,
  [SMALL_STATE(77)] = 4262,
  [SMALL_STATE(78)] = 4291,
  [SMALL_STATE(79)] = 4320,
  [SMALL_STATE(80)] = 4349,
  [SMALL_STATE(81)] = 4378,
  [SMALL_STATE(82)] = 4407,
  [SMALL_STATE(83)] = 4458,
  [SMALL_STATE(84)] = 4487,
  [SMALL_STATE(85)] = 4516,
  [SMALL_STATE(86)] = 4545,
  [SMALL_STATE(87)] = 4574,
  [SMALL_STATE(88)] = 4603,
  [SMALL_STATE(89)] = 4632,
  [SMALL_STATE(90)] = 4683,
  [SMALL_STATE(91)] = 4712,
  [SMALL_STATE(92)] = 4741,
  [SMALL_STATE(93)] = 4770,
  [SMALL_STATE(94)] = 4799,
  [SMALL_STATE(95)] = 4828,
  [SMALL_STATE(96)] = 4857,
  [SMALL_STATE(97)] = 4886,
  [SMALL_STATE(98)] = 4915,
  [SMALL_STATE(99)] = 4944,
  [SMALL_STATE(100)] = 4973,
  [SMALL_STATE(101)] = 5002,
  [SMALL_STATE(102)] = 5031,
  [SMALL_STATE(103)] = 5060,
  [SMALL_STATE(104)] = 5089,
  [SMALL_STATE(105)] = 5118,
  [SMALL_STATE(106)] = 5147,
  [SMALL_STATE(107)] = 5176,
  [SMALL_STATE(108)] = 5205,
  [SMALL_STATE(109)] = 5234,
  [SMALL_STATE(110)] = 5263,
  [SMALL_STATE(111)] = 5292,
  [SMALL_STATE(112)] = 5321,
  [SMALL_STATE(113)] = 5350,
  [SMALL_STATE(114)] = 5379,
  [SMALL_STATE(115)] = 5408,
  [SMALL_STATE(116)] = 5437,
  [SMALL_STATE(117)] = 5466,
  [SMALL_STATE(118)] = 5495,
  [SMALL_STATE(119)] = 5524,
  [SMALL_STATE(120)] = 5553,
  [SMALL_STATE(121)] = 5582,
  [SMALL_STATE(122)] = 5611,
  [SMALL_STATE(123)] = 5640,
  [SMALL_STATE(124)] = 5669,
  [SMALL_STATE(125)] = 5698,
  [SMALL_STATE(126)] = 5727,
  [SMALL_STATE(127)] = 5756,
  [SMALL_STATE(128)] = 5791,
  [SMALL_STATE(129)] = 5820,
  [SMALL_STATE(130)] = 5849,
  [SMALL_STATE(131)] = 5878,
  [SMALL_STATE(132)] = 5907,
  [SMALL_STATE(133)] = 5936,
  [SMALL_STATE(134)] = 5965,
  [SMALL_STATE(135)] = 5996,
  [SMALL_STATE(136)] = 6025,
  [SMALL_STATE(137)] = 6054,
  [SMALL_STATE(138)] = 6083,
  [SMALL_STATE(139)] = 6112,
  [SMALL_STATE(140)] = 6141,
  [SMALL_STATE(141)] = 6170,
  [SMALL_STATE(142)] = 6199,
  [SMALL_STATE(143)] = 6230,
  [SMALL_STATE(144)] = 6261,
  [SMALL_STATE(145)] = 6292,
  [SMALL_STATE(146)] = 6323,
  [SMALL_STATE(147)] = 6352,
  [SMALL_STATE(148)] = 6384,
  [SMALL_STATE(149)] = 6416,
  [SMALL_STATE(150)] = 6464,
  [SMALL_STATE(151)] = 6512,
  [SMALL_STATE(152)] = 6560,
  [SMALL_STATE(153)] = 6608,
  [SMALL_STATE(154)] = 6656,
  [SMALL_STATE(155)] = 6704,
  [SMALL_STATE(156)] = 6752,
  [SMALL_STATE(157)] = 6800,
  [SMALL_STATE(158)] = 6848,
  [SMALL_STATE(159)] = 6896,
  [SMALL_STATE(160)] = 6944,
  [SMALL_STATE(161)] = 6992,
  [SMALL_STATE(162)] = 7040,
  [SMALL_STATE(163)] = 7088,
  [SMALL_STATE(164)] = 7136,
  [SMALL_STATE(165)] = 7184,
  [SMALL_STATE(166)] = 7232,
  [SMALL_STATE(167)] = 7261,
  [SMALL_STATE(168)] = 7290,
  [SMALL_STATE(169)] = 7319,
  [SMALL_STATE(170)] = 7348,
  [SMALL_STATE(171)] = 7377,
  [SMALL_STATE(172)] = 7406,
  [SMALL_STATE(173)] = 7435,
  [SMALL_STATE(174)] = 7464,
  [SMALL_STATE(175)] = 7493,
  [SMALL_STATE(176)] = 7522,
  [SMALL_STATE(177)] = 7551,
  [SMALL_STATE(178)] = 7580,
  [SMALL_STATE(179)] = 7612,
  [SMALL_STATE(180)] = 7642,
  [SMALL_STATE(181)] = 7674,
  [SMALL_STATE(182)] = 7706,
  [SMALL_STATE(183)] = 7738,
  [SMALL_STATE(184)] = 7768,
  [SMALL_STATE(185)] = 7798,
  [SMALL_STATE(186)] = 7828,
  [SMALL_STATE(187)] = 7860,
  [SMALL_STATE(188)] = 7889,
  [SMALL_STATE(189)] = 7918,
  [SMALL_STATE(190)] = 7947,
  [SMALL_STATE(191)] = 7986,
  [SMALL_STATE(192)] = 8015,
  [SMALL_STATE(193)] = 8054,
  [SMALL_STATE(194)] = 8082,
  [SMALL_STATE(195)] = 8108,
  [SMALL_STATE(196)] = 8130,
  [SMALL_STATE(197)] = 8152,
  [SMALL_STATE(198)] = 8196,
  [SMALL_STATE(199)] = 8240,
  [SMALL_STATE(200)] = 8262,
  [SMALL_STATE(201)] = 8306,
  [SMALL_STATE(202)] = 8345,
  [SMALL_STATE(203)] = 8368,
  [SMALL_STATE(204)] = 8395,
  [SMALL_STATE(205)] = 8434,
  [SMALL_STATE(206)] = 8460,
  [SMALL_STATE(207)] = 8482,
  [SMALL_STATE(208)] = 8508,
  [SMALL_STATE(209)] = 8534,
  [SMALL_STATE(210)] = 8560,
  [SMALL_STATE(211)] = 8586,
  [SMALL_STATE(212)] = 8612,
  [SMALL_STATE(213)] = 8638,
  [SMALL_STATE(214)] = 8664,
  [SMALL_STATE(215)] = 8688,
  [SMALL_STATE(216)] = 8726,
  [SMALL_STATE(217)] = 8750,
  [SMALL_STATE(218)] = 8776,
  [SMALL_STATE(219)] = 8797,
  [SMALL_STATE(220)] = 8818,
  [SMALL_STATE(221)] = 8847,
  [SMALL_STATE(222)] = 8872,
  [SMALL_STATE(223)] = 8893,
  [SMALL_STATE(224)] = 8914,
  [SMALL_STATE(225)] = 8949,
  [SMALL_STATE(226)] = 8970,
  [SMALL_STATE(227)] = 8991,
  [SMALL_STATE(228)] = 9012,
  [SMALL_STATE(229)] = 9033,
  [SMALL_STATE(230)] = 9054,
  [SMALL_STATE(231)] = 9075,
  [SMALL_STATE(232)] = 9096,
  [SMALL_STATE(233)] = 9118,
  [SMALL_STATE(234)] = 9140,
  [SMALL_STATE(235)] = 9159,
  [SMALL_STATE(236)] = 9176,
  [SMALL_STATE(237)] = 9195,
  [SMALL_STATE(238)] = 9214,
  [SMALL_STATE(239)] = 9233,
  [SMALL_STATE(240)] = 9252,
  [SMALL_STATE(241)] = 9269,
  [SMALL_STATE(242)] = 9288,
  [SMALL_STATE(243)] = 9307,
  [SMALL_STATE(244)] = 9326,
  [SMALL_STATE(245)] = 9345,
  [SMALL_STATE(246)] = 9364,
  [SMALL_STATE(247)] = 9383,
  [SMALL_STATE(248)] = 9408,
  [SMALL_STATE(249)] = 9427,
  [SMALL_STATE(250)] = 9444,
  [SMALL_STATE(251)] = 9463,
  [SMALL_STATE(252)] = 9482,
  [SMALL_STATE(253)] = 9504,
  [SMALL_STATE(254)] = 9526,
  [SMALL_STATE(255)] = 9550,
  [SMALL_STATE(256)] = 9574,
  [SMALL_STATE(257)] = 9596,
  [SMALL_STATE(258)] = 9620,
  [SMALL_STATE(259)] = 9644,
  [SMALL_STATE(260)] = 9668,
  [SMALL_STATE(261)] = 9692,
  [SMALL_STATE(262)] = 9716,
  [SMALL_STATE(263)] = 9738,
  [SMALL_STATE(264)] = 9760,
  [SMALL_STATE(265)] = 9773,
  [SMALL_STATE(266)] = 9786,
  [SMALL_STATE(267)] = 9807,
  [SMALL_STATE(268)] = 9820,
  [SMALL_STATE(269)] = 9833,
  [SMALL_STATE(270)] = 9846,
  [SMALL_STATE(271)] = 9867,
  [SMALL_STATE(272)] = 9880,
  [SMALL_STATE(273)] = 9901,
  [SMALL_STATE(274)] = 9920,
  [SMALL_STATE(275)] = 9940,
  [SMALL_STATE(276)] = 9960,
  [SMALL_STATE(277)] = 9978,
  [SMALL_STATE(278)] = 9996,
  [SMALL_STATE(279)] = 10014,
  [SMALL_STATE(280)] = 10030,
  [SMALL_STATE(281)] = 10050,
  [SMALL_STATE(282)] = 10070,
  [SMALL_STATE(283)] = 10088,
  [SMALL_STATE(284)] = 10102,
  [SMALL_STATE(285)] = 10120,
  [SMALL_STATE(286)] = 10138,
  [SMALL_STATE(287)] = 10156,
  [SMALL_STATE(288)] = 10176,
  [SMALL_STATE(289)] = 10194,
  [SMALL_STATE(290)] = 10212,
  [SMALL_STATE(291)] = 10230,
  [SMALL_STATE(292)] = 10248,
  [SMALL_STATE(293)] = 10268,
  [SMALL_STATE(294)] = 10288,
  [SMALL_STATE(295)] = 10308,
  [SMALL_STATE(296)] = 10323,
  [SMALL_STATE(297)] = 10334,
  [SMALL_STATE(298)] = 10349,
  [SMALL_STATE(299)] = 10364,
  [SMALL_STATE(300)] = 10379,
  [SMALL_STATE(301)] = 10396,
  [SMALL_STATE(302)] = 10411,
  [SMALL_STATE(303)] = 10426,
  [SMALL_STATE(304)] = 10441,
  [SMALL_STATE(305)] = 10456,
  [SMALL_STATE(306)] = 10471,
  [SMALL_STATE(307)] = 10486,
  [SMALL_STATE(308)] = 10501,
  [SMALL_STATE(309)] = 10516,
  [SMALL_STATE(310)] = 10531,
  [SMALL_STATE(311)] = 10544,
  [SMALL_STATE(312)] = 10559,
  [SMALL_STATE(313)] = 10576,
  [SMALL_STATE(314)] = 10591,
  [SMALL_STATE(315)] = 10606,
  [SMALL_STATE(316)] = 10617,
  [SMALL_STATE(317)] = 10632,
  [SMALL_STATE(318)] = 10649,
  [SMALL_STATE(319)] = 10660,
  [SMALL_STATE(320)] = 10675,
  [SMALL_STATE(321)] = 10690,
  [SMALL_STATE(322)] = 10701,
  [SMALL_STATE(323)] = 10715,
  [SMALL_STATE(324)] = 10729,
  [SMALL_STATE(325)] = 10743,
  [SMALL_STATE(326)] = 10757,
  [SMALL_STATE(327)] = 10771,
  [SMALL_STATE(328)] = 10785,
  [SMALL_STATE(329)] = 10799,
  [SMALL_STATE(330)] = 10811,
  [SMALL_STATE(331)] = 10825,
  [SMALL_STATE(332)] = 10839,
  [SMALL_STATE(333)] = 10849,
  [SMALL_STATE(334)] = 10863,
  [SMALL_STATE(335)] = 10877,
  [SMALL_STATE(336)] = 10891,
  [SMALL_STATE(337)] = 10905,
  [SMALL_STATE(338)] = 10919,
  [SMALL_STATE(339)] = 10933,
  [SMALL_STATE(340)] = 10947,
  [SMALL_STATE(341)] = 10961,
  [SMALL_STATE(342)] = 10975,
  [SMALL_STATE(343)] = 10989,
  [SMALL_STATE(344)] = 11003,
  [SMALL_STATE(345)] = 11017,
  [SMALL_STATE(346)] = 11031,
  [SMALL_STATE(347)] = 11045,
  [SMALL_STATE(348)] = 11055,
  [SMALL_STATE(349)] = 11069,
  [SMALL_STATE(350)] = 11080,
  [SMALL_STATE(351)] = 11091,
  [SMALL_STATE(352)] = 11102,
  [SMALL_STATE(353)] = 11113,
  [SMALL_STATE(354)] = 11124,
  [SMALL_STATE(355)] = 11135,
  [SMALL_STATE(356)] = 11146,
  [SMALL_STATE(357)] = 11157,
  [SMALL_STATE(358)] = 11168,
  [SMALL_STATE(359)] = 11176,
  [SMALL_STATE(360)] = 11184,
  [SMALL_STATE(361)] = 11192,
  [SMALL_STATE(362)] = 11200,
  [SMALL_STATE(363)] = 11208,
  [SMALL_STATE(364)] = 11216,
  [SMALL_STATE(365)] = 11224,
  [SMALL_STATE(366)] = 11232,
  [SMALL_STATE(367)] = 11240,
  [SMALL_STATE(368)] = 11248,
  [SMALL_STATE(369)] = 11256,
  [SMALL_STATE(370)] = 11264,
  [SMALL_STATE(371)] = 11272,
  [SMALL_STATE(372)] = 11280,
  [SMALL_STATE(373)] = 11288,
  [SMALL_STATE(374)] = 11296,
  [SMALL_STATE(375)] = 11304,
  [SMALL_STATE(376)] = 11312,
  [SMALL_STATE(377)] = 11320,
  [SMALL_STATE(378)] = 11328,
  [SMALL_STATE(379)] = 11336,
  [SMALL_STATE(380)] = 11344,
  [SMALL_STATE(381)] = 11352,
  [SMALL_STATE(382)] = 11360,
  [SMALL_STATE(383)] = 11368,
  [SMALL_STATE(384)] = 11376,
  [SMALL_STATE(385)] = 11384,
  [SMALL_STATE(386)] = 11392,
  [SMALL_STATE(387)] = 11400,
  [SMALL_STATE(388)] = 11408,
  [SMALL_STATE(389)] = 11416,
  [SMALL_STATE(390)] = 11424,
  [SMALL_STATE(391)] = 11432,
  [SMALL_STATE(392)] = 11440,
  [SMALL_STATE(393)] = 11448,
  [SMALL_STATE(394)] = 11456,
  [SMALL_STATE(395)] = 11464,
  [SMALL_STATE(396)] = 11472,
  [SMALL_STATE(397)] = 11480,
  [SMALL_STATE(398)] = 11488,
  [SMALL_STATE(399)] = 11496,
  [SMALL_STATE(400)] = 11504,
  [SMALL_STATE(401)] = 11512,
  [SMALL_STATE(402)] = 11520,
  [SMALL_STATE(403)] = 11528,
  [SMALL_STATE(404)] = 11536,
  [SMALL_STATE(405)] = 11544,
  [SMALL_STATE(406)] = 11552,
  [SMALL_STATE(407)] = 11560,
  [SMALL_STATE(408)] = 11568,
  [SMALL_STATE(409)] = 11576,
  [SMALL_STATE(410)] = 11584,
  [SMALL_STATE(411)] = 11592,
  [SMALL_STATE(412)] = 11600,
  [SMALL_STATE(413)] = 11608,
  [SMALL_STATE(414)] = 11616,
  [SMALL_STATE(415)] = 11624,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(158),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(209),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(159),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(291),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(393),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(210),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(197),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(364),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(360),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(358),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(359),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(367),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(196),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(293),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(402),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(163),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(211),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(162),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(290),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(378),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(207),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(197),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(90),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(364),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(360),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(358),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(34),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(359),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(367),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(199),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(16),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(274),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(402),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(150),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(368),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(164),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(181),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(165),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(409),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(410),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(147),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(148),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(127),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(181),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(368),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(164),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(180),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(165),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(409),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(410),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(147),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(148),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(127),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(180),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_interpolation, 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_interpolation, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, .production_id = 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 1),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 3),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 4),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 4),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 5),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 5),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(354),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(356),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_args, 1),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_args_repeat1, 2),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(205),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(89),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_params, 2),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_fat_arrow_function, 5),
  [1084] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_params_repeat1, 2), SHIFT_REPEAT(335),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_params_repeat1, 2),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_params, 1),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_fat_arrow_function, 3),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_fat_arrow_function, 4),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_args, 2),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(153),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_args_repeat1, 2), SHIFT_REPEAT(322),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(30),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_param, 3),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1197] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
