#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 339
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
  [21] = {.lex_state = 1, .external_lex_state = 1},
  [22] = {.lex_state = 84},
  [23] = {.lex_state = 84},
  [24] = {.lex_state = 84},
  [25] = {.lex_state = 84},
  [26] = {.lex_state = 84},
  [27] = {.lex_state = 84},
  [28] = {.lex_state = 84},
  [29] = {.lex_state = 84},
  [30] = {.lex_state = 84},
  [31] = {.lex_state = 84},
  [32] = {.lex_state = 84},
  [33] = {.lex_state = 84},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 84},
  [36] = {.lex_state = 84},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 84},
  [39] = {.lex_state = 84},
  [40] = {.lex_state = 84},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 84},
  [43] = {.lex_state = 84},
  [44] = {.lex_state = 84},
  [45] = {.lex_state = 84},
  [46] = {.lex_state = 84},
  [47] = {.lex_state = 84},
  [48] = {.lex_state = 84},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 84},
  [51] = {.lex_state = 84},
  [52] = {.lex_state = 84},
  [53] = {.lex_state = 84},
  [54] = {.lex_state = 84},
  [55] = {.lex_state = 84},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 84},
  [58] = {.lex_state = 84},
  [59] = {.lex_state = 84},
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
  [77] = {.lex_state = 84},
  [78] = {.lex_state = 84},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 84, .external_lex_state = 1},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 84, .external_lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 18},
  [129] = {.lex_state = 1},
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
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 84, .external_lex_state = 1},
  [145] = {.lex_state = 84, .external_lex_state = 1},
  [146] = {.lex_state = 84, .external_lex_state = 1},
  [147] = {.lex_state = 84, .external_lex_state = 1},
  [148] = {.lex_state = 84, .external_lex_state = 1},
  [149] = {.lex_state = 84, .external_lex_state = 1},
  [150] = {.lex_state = 84, .external_lex_state = 1},
  [151] = {.lex_state = 84, .external_lex_state = 1},
  [152] = {.lex_state = 84, .external_lex_state = 1},
  [153] = {.lex_state = 84, .external_lex_state = 1},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 84, .external_lex_state = 1},
  [158] = {.lex_state = 18},
  [159] = {.lex_state = 18},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 18},
  [162] = {.lex_state = 84, .external_lex_state = 1},
  [163] = {.lex_state = 18},
  [164] = {.lex_state = 18},
  [165] = {.lex_state = 84, .external_lex_state = 1},
  [166] = {.lex_state = 17},
  [167] = {.lex_state = 84, .external_lex_state = 1},
  [168] = {.lex_state = 18},
  [169] = {.lex_state = 84, .external_lex_state = 1},
  [170] = {.lex_state = 18},
  [171] = {.lex_state = 18},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 18},
  [174] = {.lex_state = 18},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 18},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 84, .external_lex_state = 1},
  [179] = {.lex_state = 18},
  [180] = {.lex_state = 18},
  [181] = {.lex_state = 15},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 17},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 17},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 15},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 17},
  [199] = {.lex_state = 17},
  [200] = {.lex_state = 17},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 15},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 17},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 15},
  [220] = {.lex_state = 15},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 84},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 15},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 15},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 84},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 15},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 17},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 17},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 17},
  [257] = {.lex_state = 17},
  [258] = {.lex_state = 17},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 17},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 84},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 84},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 15},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 28},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 84},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 84},
  [306] = {.lex_state = 84},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 28},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 84},
  [318] = {.lex_state = 84},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 28},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 84},
  [328] = {.lex_state = 84},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 84},
  [331] = {.lex_state = 84},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 84},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 84},
  [336] = {.lex_state = 84},
  [337] = {.lex_state = 84},
  [338] = {.lex_state = 84},
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
    [sym_stylesheet] = STATE(326),
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(293),
    [sym__selector] = STATE(131),
    [sym_universal_selector] = STATE(131),
    [sym_class_selector] = STATE(131),
    [sym_pseudo_class_selector] = STATE(131),
    [sym_pseudo_element_selector] = STATE(131),
    [sym_id_selector] = STATE(131),
    [sym_attribute_selector] = STATE(131),
    [sym_child_selector] = STATE(131),
    [sym_descendant_selector] = STATE(131),
    [sym_sibling_selector] = STATE(131),
    [sym_adjacent_sibling_selector] = STATE(131),
    [sym_declaration] = STATE(8),
    [sym_js_interpolation] = STATE(23),
    [aux_sym_stylesheet_repeat1] = STATE(8),
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
    STATE(27), 1,
      sym_js_interpolation,
    STATE(290), 1,
      sym_selectors,
    STATE(321), 1,
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
    STATE(131), 11,
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
    STATE(27), 1,
      sym_js_interpolation,
    STATE(290), 1,
      sym_selectors,
    STATE(316), 1,
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
    STATE(131), 11,
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
    STATE(27), 1,
      sym_js_interpolation,
    STATE(290), 1,
      sym_selectors,
    STATE(324), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 10,
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
    STATE(131), 11,
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
    STATE(27), 1,
      sym_js_interpolation,
    STATE(290), 1,
      sym_selectors,
    STATE(304), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(6), 10,
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
    STATE(131), 11,
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
    STATE(27), 1,
      sym_js_interpolation,
    STATE(290), 1,
      sym_selectors,
    STATE(312), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 10,
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
    STATE(131), 11,
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
    STATE(27), 1,
      sym_js_interpolation,
    STATE(290), 1,
      sym_selectors,
    STATE(332), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 10,
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
    STATE(131), 11,
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
  [546] = 22,
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
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_js_interpolation,
    STATE(293), 1,
      sym_selectors,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(19), 2,
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
      aux_sym_stylesheet_repeat1,
    STATE(131), 11,
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
  [634] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_ATimport,
    ACTIONS(74), 1,
      anon_sym_ATmedia,
    ACTIONS(77), 1,
      anon_sym_ATcharset,
    ACTIONS(80), 1,
      anon_sym_ATnamespace,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_ATsupports,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      anon_sym_COLON,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(115), 1,
      sym_at_keyword,
    ACTIONS(118), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(27), 1,
      sym_js_interpolation,
    STATE(290), 1,
      sym_selectors,
    ACTIONS(83), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(91), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(9), 10,
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
    STATE(131), 11,
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
  [722] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_ATimport,
    ACTIONS(126), 1,
      anon_sym_ATmedia,
    ACTIONS(129), 1,
      anon_sym_ATcharset,
    ACTIONS(132), 1,
      anon_sym_ATnamespace,
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
    STATE(23), 1,
      sym_js_interpolation,
    STATE(293), 1,
      sym_selectors,
    ACTIONS(135), 2,
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
      aux_sym_stylesheet_repeat1,
    STATE(131), 11,
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
  [810] = 18,
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
    STATE(86), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
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
  [881] = 17,
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
    STATE(88), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(162), 11,
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
  [949] = 16,
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
    STATE(34), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(109), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1006] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
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
  [1044] = 15,
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
    ACTIONS(223), 1,
      sym_important,
    STATE(79), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(109), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1098] = 15,
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
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      sym_important,
    STATE(80), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(109), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(229), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [1180] = 10,
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
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(233), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(149), 11,
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
  [1222] = 10,
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
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 2,
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
  [1264] = 10,
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
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(132), 11,
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
  [1306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
    ACTIONS(245), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(247), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(241), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1338] = 10,
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
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(249), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(152), 11,
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
  [1380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    ACTIONS(253), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(251), 10,
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
  [1410] = 10,
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
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(257), 2,
      sym_nesting_selector,
      sym_string_value,
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
  [1452] = 10,
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
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(259), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(178), 11,
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
  [1494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(229), 11,
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
  [1522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_SEMI,
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
    ACTIONS(265), 10,
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
  [1552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(269), 10,
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
  [1579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(271), 10,
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
  [1606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(277), 10,
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
  [1633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(281), 10,
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
  [1660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(283), 10,
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
  [1687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(287), 10,
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
  [1714] = 14,
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
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 1,
      sym_important,
    STATE(41), 1,
      aux_sym_declaration_repeat1,
    STATE(109), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(297), 10,
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
  [1790] = 3,
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
    ACTIONS(301), 10,
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
  [1817] = 13,
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
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 1,
      sym_string_value,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(253), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1864] = 3,
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
  [1891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(317), 10,
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
  [1918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(271), 10,
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
  [1945] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LPAREN2,
    ACTIONS(330), 1,
      sym_string_value,
    ACTIONS(333), 1,
      aux_sym_integer_value_token1,
    ACTIONS(336), 1,
      aux_sym_float_value_token1,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_plain_value,
    STATE(41), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(322), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(109), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(269), 10,
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
  [2017] = 3,
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
    ACTIONS(301), 10,
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
  [2044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(347), 10,
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
  [2071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(297), 10,
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
  [2098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(347), 10,
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
  [2125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(351), 10,
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
  [2152] = 3,
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
  [2179] = 13,
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
    ACTIONS(309), 1,
      sym_string_value,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(261), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(287), 10,
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
  [2253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(317), 10,
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
  [2280] = 3,
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
  [2307] = 3,
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
  [2334] = 3,
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
    ACTIONS(363), 10,
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
  [2361] = 3,
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
    ACTIONS(363), 10,
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
  [2388] = 13,
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
    ACTIONS(309), 1,
      sym_string_value,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(240), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(369), 10,
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
  [2462] = 3,
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
  [2489] = 3,
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
    ACTIONS(375), 10,
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
  [2516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(277), 10,
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
  [2543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(379), 10,
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
  [2570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(283), 10,
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
  [2597] = 3,
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
    ACTIONS(375), 10,
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
  [2624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(86), 10,
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
  [2651] = 3,
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
    ACTIONS(383), 10,
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
  [2678] = 3,
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
  [2705] = 3,
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
    ACTIONS(383), 10,
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
  [2732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 9,
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
  [2759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(121), 10,
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
  [2786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(399), 10,
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
  [2813] = 3,
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
  [2840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 9,
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
  [2867] = 3,
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
  [2894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(379), 10,
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
  [2921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(351), 10,
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
  [2948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(369), 10,
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
  [2975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(281), 10,
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
  [3002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(399), 10,
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
  [3029] = 13,
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
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(401), 1,
      sym_important,
    STATE(41), 1,
      aux_sym_declaration_repeat1,
    STATE(109), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3075] = 13,
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
    ACTIONS(403), 1,
      anon_sym_SEMI,
    ACTIONS(405), 1,
      sym_important,
    STATE(41), 1,
      aux_sym_declaration_repeat1,
    STATE(109), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3121] = 11,
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
    ACTIONS(309), 1,
      sym_string_value,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(407), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3163] = 13,
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
    ACTIONS(223), 1,
      sym_important,
    STATE(79), 1,
      aux_sym_declaration_repeat1,
    STATE(109), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3209] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      anon_sym_LPAREN2,
    ACTIONS(417), 1,
      sym_string_value,
    ACTIONS(420), 1,
      aux_sym_integer_value_token1,
    ACTIONS(423), 1,
      aux_sym_float_value_token1,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(429), 1,
      sym_plain_value,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(409), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3251] = 13,
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
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      sym_important,
    STATE(80), 1,
      aux_sym_declaration_repeat1,
    STATE(109), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
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
  [3327] = 13,
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
    ACTIONS(309), 1,
      sym_string_value,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(276), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_unit,
    ACTIONS(438), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(436), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3400] = 11,
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
    ACTIONS(309), 1,
      sym_string_value,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_unit,
    ACTIONS(446), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(444), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3468] = 11,
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
    ACTIONS(450), 1,
      sym_string_value,
    ACTIONS(452), 1,
      sym_plain_value,
    ACTIONS(454), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(82), 1,
      sym_js_interpolation,
    STATE(15), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(456), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(460), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(464), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3580] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(478), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(225), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3616] = 3,
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
  [3640] = 11,
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
    ACTIONS(309), 1,
      sym_string_value,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3680] = 11,
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
    ACTIONS(454), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(488), 1,
      sym_string_value,
    ACTIONS(490), 1,
      sym_plain_value,
    STATE(82), 1,
      sym_js_interpolation,
    STATE(13), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3720] = 11,
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
    ACTIONS(454), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(492), 1,
      sym_string_value,
    ACTIONS(494), 1,
      sym_plain_value,
    STATE(84), 1,
      sym_js_interpolation,
    STATE(16), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(496), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3784] = 11,
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
    ACTIONS(309), 1,
      sym_string_value,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(502), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(506), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(510), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3896] = 11,
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
    ACTIONS(309), 1,
      sym_string_value,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3936] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(516), 1,
      anon_sym_SEMI,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(478), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(230), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3972] = 11,
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
    ACTIONS(309), 1,
      sym_string_value,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(520), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4036] = 10,
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
    ACTIONS(309), 1,
      sym_string_value,
    STATE(81), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4073] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(526), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(524), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4100] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(528), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(322), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [4127] = 10,
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
    ACTIONS(309), 1,
      sym_string_value,
    STATE(104), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(112), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(532), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(530), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
  [4190] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_LPAREN2,
    ACTIONS(538), 1,
      sym_string_value,
    ACTIONS(540), 1,
      aux_sym_integer_value_token1,
    ACTIONS(542), 1,
      aux_sym_float_value_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(546), 1,
      sym_plain_value,
    STATE(226), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4224] = 9,
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
    ACTIONS(548), 1,
      sym_string_value,
    ACTIONS(550), 1,
      sym_plain_value,
    STATE(107), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4258] = 9,
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
    ACTIONS(552), 1,
      sym_string_value,
    ACTIONS(554), 1,
      sym_plain_value,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4292] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_POUND,
    ACTIONS(558), 1,
      anon_sym_LPAREN2,
    ACTIONS(560), 1,
      sym_string_value,
    ACTIONS(562), 1,
      aux_sym_integer_value_token1,
    ACTIONS(564), 1,
      aux_sym_float_value_token1,
    ACTIONS(566), 1,
      sym_identifier,
    ACTIONS(568), 1,
      sym_plain_value,
    STATE(171), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COLON,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_pseudo_class_arguments,
    ACTIONS(570), 11,
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
  [4352] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(197), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4386] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_LPAREN2,
    ACTIONS(540), 1,
      aux_sym_integer_value_token1,
    ACTIONS(542), 1,
      aux_sym_float_value_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(580), 1,
      sym_string_value,
    ACTIONS(582), 1,
      sym_plain_value,
    STATE(234), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4420] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_LPAREN2,
    ACTIONS(540), 1,
      aux_sym_integer_value_token1,
    ACTIONS(542), 1,
      aux_sym_float_value_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(584), 1,
      sym_string_value,
    ACTIONS(586), 1,
      sym_plain_value,
    STATE(194), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4454] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_LPAREN2,
    ACTIONS(540), 1,
      aux_sym_integer_value_token1,
    ACTIONS(542), 1,
      aux_sym_float_value_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(588), 1,
      sym_string_value,
    ACTIONS(590), 1,
      sym_plain_value,
    STATE(223), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      anon_sym_COLON,
    STATE(150), 1,
      sym_pseudo_class_arguments,
    ACTIONS(592), 11,
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
  [4514] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_POUND,
    ACTIONS(558), 1,
      anon_sym_LPAREN2,
    ACTIONS(562), 1,
      aux_sym_integer_value_token1,
    ACTIONS(564), 1,
      aux_sym_float_value_token1,
    ACTIONS(566), 1,
      sym_identifier,
    ACTIONS(596), 1,
      sym_string_value,
    ACTIONS(598), 1,
      sym_plain_value,
    STATE(105), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4548] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_LPAREN2,
    ACTIONS(540), 1,
      aux_sym_integer_value_token1,
    ACTIONS(542), 1,
      aux_sym_float_value_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(600), 1,
      sym_string_value,
    ACTIONS(602), 1,
      sym_plain_value,
    STATE(220), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4582] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_LPAREN2,
    ACTIONS(540), 1,
      aux_sym_integer_value_token1,
    ACTIONS(542), 1,
      aux_sym_float_value_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(604), 1,
      sym_string_value,
    ACTIONS(606), 1,
      sym_plain_value,
    STATE(219), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4616] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_LPAREN2,
    ACTIONS(540), 1,
      aux_sym_integer_value_token1,
    ACTIONS(542), 1,
      aux_sym_float_value_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(608), 1,
      sym_string_value,
    ACTIONS(610), 1,
      sym_plain_value,
    STATE(229), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4650] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_POUND,
    ACTIONS(558), 1,
      anon_sym_LPAREN2,
    ACTIONS(562), 1,
      aux_sym_integer_value_token1,
    ACTIONS(564), 1,
      aux_sym_float_value_token1,
    ACTIONS(566), 1,
      sym_identifier,
    ACTIONS(612), 1,
      sym_string_value,
    ACTIONS(614), 1,
      sym_plain_value,
    STATE(94), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4684] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(195), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4718] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_LPAREN2,
    ACTIONS(540), 1,
      aux_sym_integer_value_token1,
    ACTIONS(542), 1,
      aux_sym_float_value_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(620), 1,
      sym_string_value,
    ACTIONS(622), 1,
      sym_plain_value,
    STATE(227), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(624), 11,
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
  [4772] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_COLON_COLON,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_GT,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_PLUS,
    ACTIONS(648), 1,
      sym__descendant_operator,
    STATE(277), 1,
      aux_sym_selectors_repeat1,
  [4812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(652), 1,
      anon_sym_COLON,
    ACTIONS(650), 10,
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
  [4834] = 3,
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
  [4854] = 3,
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
  [4874] = 3,
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
  [4894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(666), 11,
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
  [4914] = 3,
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
  [4934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(674), 11,
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
  [4954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(678), 11,
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
  [4974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COLON,
    ACTIONS(682), 11,
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
  [4994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_COLON,
    ACTIONS(686), 11,
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
  [5014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COLON,
    ACTIONS(690), 11,
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
  [5034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
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
  [5058] = 3,
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
  [5078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_COLON,
    ACTIONS(700), 11,
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
  [5098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COLON,
    ACTIONS(704), 11,
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
  [5118] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_COLON_COLON,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_GT,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_PLUS,
    ACTIONS(648), 1,
      sym__descendant_operator,
    STATE(276), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [5158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(708), 10,
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
  [5180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(714), 1,
      anon_sym_COLON,
    ACTIONS(712), 10,
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
  [5222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(720), 11,
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
  [5242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(726), 1,
      anon_sym_COLON,
    ACTIONS(724), 10,
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
  [5264] = 3,
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
  [5284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_unit,
    ACTIONS(444), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(446), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_unit,
    ACTIONS(436), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(438), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5326] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(732), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(272), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
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
  [5370] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(215), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5395] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(209), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(212), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5445] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(233), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5470] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_COLON_COLON,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_GT,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_PLUS,
    ACTIONS(648), 1,
      sym__descendant_operator,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5505] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(213), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
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
  [5549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
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
  [5568] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    ACTIONS(743), 1,
      anon_sym_LPAREN2,
    ACTIONS(745), 1,
      anon_sym_QMARK,
    ACTIONS(747), 1,
      aux_sym__js_expr_token2,
    ACTIONS(739), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [5593] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_COLON_COLON,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_GT,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_PLUS,
    ACTIONS(648), 1,
      sym__descendant_operator,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5628] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(243), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
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
  [5672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN2,
    ACTIONS(476), 1,
      anon_sym_selector,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(252), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(522), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(229), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [5733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(466), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(458), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(512), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(504), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(498), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5823] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_COLON_COLON,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_GT,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_PLUS,
    ACTIONS(648), 1,
      sym__descendant_operator,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
  [5857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(462), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(508), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_SLASH,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym_arguments,
    ACTIONS(215), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_QMARK,
    ACTIONS(758), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [5930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_QMARK,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
    ACTIONS(758), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [5948] = 3,
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
  [5964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_QMARK,
    ACTIONS(768), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [5980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_SLASH,
    ACTIONS(772), 1,
      sym_unit,
    ACTIONS(436), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
    ACTIONS(768), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [6016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(776), 1,
      sym_unit,
    ACTIONS(444), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6034] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    ACTIONS(743), 1,
      anon_sym_LPAREN2,
    ACTIONS(745), 1,
      anon_sym_QMARK,
    ACTIONS(747), 1,
      aux_sym__js_expr_token2,
    ACTIONS(778), 1,
      anon_sym_EQ_GT,
    ACTIONS(739), 3,
      anon_sym_RBRACE,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_SLASH,
    ACTIONS(510), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    ACTIONS(785), 1,
      aux_sym_integer_value_token1,
    STATE(292), 1,
      sym_integer_value,
    ACTIONS(782), 2,
      sym_from,
      sym_to,
    STATE(191), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
    ACTIONS(788), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [6109] = 3,
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
  [6124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SLASH,
    ACTIONS(520), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6139] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_block,
    STATE(235), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(796), 2,
      anon_sym_and,
      anon_sym_or,
  [6162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(502), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6177] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_block,
    STATE(221), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(796), 2,
      anon_sym_and,
      anon_sym_or,
  [6200] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    ACTIONS(804), 1,
      aux_sym_integer_value_token1,
    STATE(292), 1,
      sym_integer_value,
    ACTIONS(802), 2,
      sym_from,
      sym_to,
    STATE(203), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6221] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_integer_value_token1,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_integer_value,
    ACTIONS(802), 2,
      sym_from,
      sym_to,
    STATE(200), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_integer_value_token1,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_integer_value,
    ACTIONS(802), 2,
      sym_from,
      sym_to,
    STATE(191), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_SLASH,
    ACTIONS(460), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SLASH,
    ACTIONS(456), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_integer_value_token1,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_integer_value,
    ACTIONS(802), 2,
      sym_from,
      sym_to,
    STATE(191), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(464), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_SLASH,
    ACTIONS(506), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RBRACK,
    ACTIONS(812), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [6359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_SLASH,
    ACTIONS(496), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym__js_args_repeat1,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      sym_block,
    STATE(259), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(796), 2,
      anon_sym_and,
      anon_sym_or,
  [6414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6450] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      sym_block,
    STATE(239), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(796), 2,
      anon_sym_and,
      anon_sym_or,
  [6470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
    ACTIONS(832), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6521] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_LPAREN2,
    ACTIONS(836), 1,
      sym__js_identifier,
    ACTIONS(838), 1,
      sym__js_string,
    STATE(249), 1,
      sym__js_expr,
    STATE(325), 1,
      sym__js_fat_arrow_function,
  [6540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    ACTIONS(844), 1,
      anon_sym_SLASH,
    ACTIONS(840), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SLASH,
    ACTIONS(846), 1,
      anon_sym_SEMI,
    ACTIONS(840), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6570] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(848), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_block,
    STATE(255), 1,
      aux_sym_import_statement_repeat1,
  [6589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(850), 1,
      sym_string_value,
    ACTIONS(852), 1,
      sym_identifier,
    STATE(176), 1,
      sym_arguments,
    STATE(309), 1,
      sym_call_expression,
  [6608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SLASH,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
    ACTIONS(840), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6623] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    ACTIONS(860), 1,
      sym__js_identifier,
    STATE(251), 1,
      sym__js_param,
    STATE(319), 1,
      sym__js_params,
  [6642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    STATE(270), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(796), 2,
      anon_sym_and,
      anon_sym_or,
  [6659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SLASH,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    ACTIONS(840), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SLASH,
    ACTIONS(866), 1,
      anon_sym_SEMI,
    ACTIONS(840), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6689] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_LPAREN2,
    ACTIONS(836), 1,
      sym__js_identifier,
    ACTIONS(868), 1,
      sym__js_string,
    STATE(248), 1,
      sym__js_expr,
    STATE(323), 1,
      sym__js_fat_arrow_function,
  [6708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SLASH,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    ACTIONS(840), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    STATE(278), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(796), 2,
      anon_sym_and,
      anon_sym_or,
  [6740] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(852), 1,
      sym_identifier,
    ACTIONS(874), 1,
      sym_string_value,
    STATE(176), 1,
      sym_arguments,
    STATE(302), 1,
      sym_call_expression,
  [6759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_LPAREN2,
    ACTIONS(836), 1,
      sym__js_identifier,
    ACTIONS(876), 1,
      sym__js_string,
    STATE(264), 1,
      sym__js_expr,
    STATE(300), 1,
      sym__js_fat_arrow_function,
  [6778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(878), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SLASH,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
    ACTIONS(840), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6806] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_block,
    STATE(255), 1,
      aux_sym_import_statement_repeat1,
  [6825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(888), 1,
      sym__js_string,
    STATE(208), 1,
      sym__js_expr,
    STATE(308), 1,
      sym__js_args,
  [6844] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(888), 1,
      sym__js_string,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym__js_expr,
    STATE(314), 1,
      sym__js_args,
  [6863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_COLON,
    ACTIONS(830), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      sym_block,
    STATE(255), 1,
      aux_sym_import_statement_repeat1,
  [6891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(896), 1,
      anon_sym_COLON,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    ACTIONS(796), 2,
      anon_sym_and,
      anon_sym_or,
  [6947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(900), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [6989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym__js_params_repeat1,
    ACTIONS(907), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [7017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [7031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [7045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__js_params_repeat1,
    ACTIONS(915), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_block,
    ACTIONS(796), 2,
      anon_sym_and,
      anon_sym_or,
  [7073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(878), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [7111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [7135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7145] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      sym_block,
    STATE(255), 1,
      aux_sym_import_statement_repeat1,
  [7161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym__js_params_repeat1,
    ACTIONS(927), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(860), 1,
      sym__js_identifier,
    STATE(251), 1,
      sym__js_param,
    STATE(334), 1,
      sym__js_params,
  [7215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_QMARK,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 2,
      aux_sym__js_expr_token1,
      anon_sym_QMARK_QMARK,
  [7229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym__js_identifier,
    ACTIONS(935), 1,
      anon_sym_LBRACK,
    ACTIONS(937), 1,
      anon_sym_LPAREN2,
  [7242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(939), 1,
      sym__js_string,
    STATE(257), 1,
      sym__js_expr,
  [7255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(941), 1,
      sym__js_string,
    STATE(246), 1,
      sym__js_expr,
  [7268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(943), 1,
      sym__js_string,
    STATE(245), 1,
      sym__js_expr,
  [7281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(945), 1,
      sym__js_string,
    STATE(242), 1,
      sym__js_expr,
  [7294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_SEMI,
    STATE(255), 1,
      aux_sym_import_statement_repeat1,
  [7307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(949), 1,
      sym__js_string,
    STATE(183), 1,
      sym__js_expr,
  [7320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    ACTIONS(796), 2,
      anon_sym_and,
      anon_sym_or,
  [7331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(953), 1,
      sym__js_string,
    STATE(241), 1,
      sym__js_expr,
  [7344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(955), 1,
      sym__js_string,
    STATE(187), 1,
      sym__js_expr,
  [7357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_LBRACE,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_selectors_repeat1,
  [7370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(962), 1,
      anon_sym_LBRACE,
    STATE(275), 1,
      aux_sym_selectors_repeat1,
  [7396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(964), 1,
      anon_sym_SEMI,
    STATE(255), 1,
      aux_sym_import_statement_repeat1,
  [7409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym__js_args_repeat1,
  [7422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_string_value,
    ACTIONS(971), 1,
      sym_identifier,
    STATE(307), 1,
      sym_call_expression,
  [7435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(976), 1,
      sym__js_string,
    STATE(217), 1,
      sym__js_expr,
  [7470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      sym_string_value,
    ACTIONS(980), 1,
      sym_identifier,
    STATE(311), 1,
      sym_call_expression,
  [7483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym__js_args_repeat1,
  [7496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__js_identifier,
    ACTIONS(986), 1,
      sym__js_string,
    STATE(250), 1,
      sym__js_expr,
  [7518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(988), 1,
      sym__js_identifier,
    STATE(282), 1,
      sym__js_param,
  [7531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_keyframe_block_list,
  [7541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
  [7551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      aux_sym_color_value_token1,
    ACTIONS(994), 1,
      sym_identifier,
  [7561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_block,
  [7571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
  [7581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_SEMI,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
  [7591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_arguments,
  [7601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
  [7611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      sym_unit,
  [7621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_keyframe_block_list,
  [7631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_SEMI,
  [7638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
  [7645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      aux_sym_color_value_token1,
  [7652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
  [7659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym_identifier,
  [7666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
  [7673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      sym_identifier,
  [7680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym_identifier,
  [7687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_SEMI,
  [7694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
  [7701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_SEMI,
  [7708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_SEMI,
  [7715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_SEMI,
  [7722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
  [7729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
  [7736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
  [7743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      aux_sym_color_value_token1,
  [7750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
  [7757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_EQ_GT,
  [7764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym_identifier,
  [7771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
  [7778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_LPAREN2,
  [7785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [7792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      aux_sym_color_value_token1,
  [7799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
  [7806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_RBRACE,
  [7813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
  [7820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      ts_builtin_sym_end,
  [7827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_identifier,
  [7834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_identifier,
  [7841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_SEMI,
  [7848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym_identifier,
  [7855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      sym_identifier,
  [7862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_RBRACE,
  [7869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym_identifier,
  [7876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
  [7883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      sym_identifier,
  [7890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_EQ_GT,
  [7897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym_identifier,
  [7904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
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
  [SMALL_STATE(9)] = 634,
  [SMALL_STATE(10)] = 722,
  [SMALL_STATE(11)] = 810,
  [SMALL_STATE(12)] = 881,
  [SMALL_STATE(13)] = 949,
  [SMALL_STATE(14)] = 1006,
  [SMALL_STATE(15)] = 1044,
  [SMALL_STATE(16)] = 1098,
  [SMALL_STATE(17)] = 1152,
  [SMALL_STATE(18)] = 1180,
  [SMALL_STATE(19)] = 1222,
  [SMALL_STATE(20)] = 1264,
  [SMALL_STATE(21)] = 1306,
  [SMALL_STATE(22)] = 1338,
  [SMALL_STATE(23)] = 1380,
  [SMALL_STATE(24)] = 1410,
  [SMALL_STATE(25)] = 1452,
  [SMALL_STATE(26)] = 1494,
  [SMALL_STATE(27)] = 1522,
  [SMALL_STATE(28)] = 1552,
  [SMALL_STATE(29)] = 1579,
  [SMALL_STATE(30)] = 1606,
  [SMALL_STATE(31)] = 1633,
  [SMALL_STATE(32)] = 1660,
  [SMALL_STATE(33)] = 1687,
  [SMALL_STATE(34)] = 1714,
  [SMALL_STATE(35)] = 1763,
  [SMALL_STATE(36)] = 1790,
  [SMALL_STATE(37)] = 1817,
  [SMALL_STATE(38)] = 1864,
  [SMALL_STATE(39)] = 1891,
  [SMALL_STATE(40)] = 1918,
  [SMALL_STATE(41)] = 1945,
  [SMALL_STATE(42)] = 1990,
  [SMALL_STATE(43)] = 2017,
  [SMALL_STATE(44)] = 2044,
  [SMALL_STATE(45)] = 2071,
  [SMALL_STATE(46)] = 2098,
  [SMALL_STATE(47)] = 2125,
  [SMALL_STATE(48)] = 2152,
  [SMALL_STATE(49)] = 2179,
  [SMALL_STATE(50)] = 2226,
  [SMALL_STATE(51)] = 2253,
  [SMALL_STATE(52)] = 2280,
  [SMALL_STATE(53)] = 2307,
  [SMALL_STATE(54)] = 2334,
  [SMALL_STATE(55)] = 2361,
  [SMALL_STATE(56)] = 2388,
  [SMALL_STATE(57)] = 2435,
  [SMALL_STATE(58)] = 2462,
  [SMALL_STATE(59)] = 2489,
  [SMALL_STATE(60)] = 2516,
  [SMALL_STATE(61)] = 2543,
  [SMALL_STATE(62)] = 2570,
  [SMALL_STATE(63)] = 2597,
  [SMALL_STATE(64)] = 2624,
  [SMALL_STATE(65)] = 2651,
  [SMALL_STATE(66)] = 2678,
  [SMALL_STATE(67)] = 2705,
  [SMALL_STATE(68)] = 2732,
  [SMALL_STATE(69)] = 2759,
  [SMALL_STATE(70)] = 2786,
  [SMALL_STATE(71)] = 2813,
  [SMALL_STATE(72)] = 2840,
  [SMALL_STATE(73)] = 2867,
  [SMALL_STATE(74)] = 2894,
  [SMALL_STATE(75)] = 2921,
  [SMALL_STATE(76)] = 2948,
  [SMALL_STATE(77)] = 2975,
  [SMALL_STATE(78)] = 3002,
  [SMALL_STATE(79)] = 3029,
  [SMALL_STATE(80)] = 3075,
  [SMALL_STATE(81)] = 3121,
  [SMALL_STATE(82)] = 3163,
  [SMALL_STATE(83)] = 3209,
  [SMALL_STATE(84)] = 3251,
  [SMALL_STATE(85)] = 3297,
  [SMALL_STATE(86)] = 3327,
  [SMALL_STATE(87)] = 3373,
  [SMALL_STATE(88)] = 3400,
  [SMALL_STATE(89)] = 3441,
  [SMALL_STATE(90)] = 3468,
  [SMALL_STATE(91)] = 3508,
  [SMALL_STATE(92)] = 3532,
  [SMALL_STATE(93)] = 3556,
  [SMALL_STATE(94)] = 3580,
  [SMALL_STATE(95)] = 3616,
  [SMALL_STATE(96)] = 3640,
  [SMALL_STATE(97)] = 3680,
  [SMALL_STATE(98)] = 3720,
  [SMALL_STATE(99)] = 3760,
  [SMALL_STATE(100)] = 3784,
  [SMALL_STATE(101)] = 3824,
  [SMALL_STATE(102)] = 3848,
  [SMALL_STATE(103)] = 3872,
  [SMALL_STATE(104)] = 3896,
  [SMALL_STATE(105)] = 3936,
  [SMALL_STATE(106)] = 3972,
  [SMALL_STATE(107)] = 4012,
  [SMALL_STATE(108)] = 4036,
  [SMALL_STATE(109)] = 4073,
  [SMALL_STATE(110)] = 4100,
  [SMALL_STATE(111)] = 4127,
  [SMALL_STATE(112)] = 4164,
  [SMALL_STATE(113)] = 4190,
  [SMALL_STATE(114)] = 4224,
  [SMALL_STATE(115)] = 4258,
  [SMALL_STATE(116)] = 4292,
  [SMALL_STATE(117)] = 4326,
  [SMALL_STATE(118)] = 4352,
  [SMALL_STATE(119)] = 4386,
  [SMALL_STATE(120)] = 4420,
  [SMALL_STATE(121)] = 4454,
  [SMALL_STATE(122)] = 4488,
  [SMALL_STATE(123)] = 4514,
  [SMALL_STATE(124)] = 4548,
  [SMALL_STATE(125)] = 4582,
  [SMALL_STATE(126)] = 4616,
  [SMALL_STATE(127)] = 4650,
  [SMALL_STATE(128)] = 4684,
  [SMALL_STATE(129)] = 4718,
  [SMALL_STATE(130)] = 4752,
  [SMALL_STATE(131)] = 4772,
  [SMALL_STATE(132)] = 4812,
  [SMALL_STATE(133)] = 4834,
  [SMALL_STATE(134)] = 4854,
  [SMALL_STATE(135)] = 4874,
  [SMALL_STATE(136)] = 4894,
  [SMALL_STATE(137)] = 4914,
  [SMALL_STATE(138)] = 4934,
  [SMALL_STATE(139)] = 4954,
  [SMALL_STATE(140)] = 4974,
  [SMALL_STATE(141)] = 4994,
  [SMALL_STATE(142)] = 5014,
  [SMALL_STATE(143)] = 5034,
  [SMALL_STATE(144)] = 5058,
  [SMALL_STATE(145)] = 5078,
  [SMALL_STATE(146)] = 5098,
  [SMALL_STATE(147)] = 5118,
  [SMALL_STATE(148)] = 5158,
  [SMALL_STATE(149)] = 5180,
  [SMALL_STATE(150)] = 5202,
  [SMALL_STATE(151)] = 5222,
  [SMALL_STATE(152)] = 5242,
  [SMALL_STATE(153)] = 5264,
  [SMALL_STATE(154)] = 5284,
  [SMALL_STATE(155)] = 5305,
  [SMALL_STATE(156)] = 5326,
  [SMALL_STATE(157)] = 5351,
  [SMALL_STATE(158)] = 5370,
  [SMALL_STATE(159)] = 5395,
  [SMALL_STATE(160)] = 5420,
  [SMALL_STATE(161)] = 5445,
  [SMALL_STATE(162)] = 5470,
  [SMALL_STATE(163)] = 5505,
  [SMALL_STATE(164)] = 5530,
  [SMALL_STATE(165)] = 5549,
  [SMALL_STATE(166)] = 5568,
  [SMALL_STATE(167)] = 5593,
  [SMALL_STATE(168)] = 5628,
  [SMALL_STATE(169)] = 5653,
  [SMALL_STATE(170)] = 5672,
  [SMALL_STATE(171)] = 5697,
  [SMALL_STATE(172)] = 5715,
  [SMALL_STATE(173)] = 5733,
  [SMALL_STATE(174)] = 5751,
  [SMALL_STATE(175)] = 5769,
  [SMALL_STATE(176)] = 5787,
  [SMALL_STATE(177)] = 5805,
  [SMALL_STATE(178)] = 5823,
  [SMALL_STATE(179)] = 5857,
  [SMALL_STATE(180)] = 5875,
  [SMALL_STATE(181)] = 5893,
  [SMALL_STATE(182)] = 5914,
  [SMALL_STATE(183)] = 5930,
  [SMALL_STATE(184)] = 5948,
  [SMALL_STATE(185)] = 5964,
  [SMALL_STATE(186)] = 5980,
  [SMALL_STATE(187)] = 5998,
  [SMALL_STATE(188)] = 6016,
  [SMALL_STATE(189)] = 6034,
  [SMALL_STATE(190)] = 6058,
  [SMALL_STATE(191)] = 6073,
  [SMALL_STATE(192)] = 6094,
  [SMALL_STATE(193)] = 6109,
  [SMALL_STATE(194)] = 6124,
  [SMALL_STATE(195)] = 6139,
  [SMALL_STATE(196)] = 6162,
  [SMALL_STATE(197)] = 6177,
  [SMALL_STATE(198)] = 6200,
  [SMALL_STATE(199)] = 6221,
  [SMALL_STATE(200)] = 6242,
  [SMALL_STATE(201)] = 6263,
  [SMALL_STATE(202)] = 6278,
  [SMALL_STATE(203)] = 6293,
  [SMALL_STATE(204)] = 6314,
  [SMALL_STATE(205)] = 6329,
  [SMALL_STATE(206)] = 6344,
  [SMALL_STATE(207)] = 6359,
  [SMALL_STATE(208)] = 6374,
  [SMALL_STATE(209)] = 6394,
  [SMALL_STATE(210)] = 6414,
  [SMALL_STATE(211)] = 6426,
  [SMALL_STATE(212)] = 6438,
  [SMALL_STATE(213)] = 6450,
  [SMALL_STATE(214)] = 6470,
  [SMALL_STATE(215)] = 6482,
  [SMALL_STATE(216)] = 6494,
  [SMALL_STATE(217)] = 6506,
  [SMALL_STATE(218)] = 6521,
  [SMALL_STATE(219)] = 6540,
  [SMALL_STATE(220)] = 6555,
  [SMALL_STATE(221)] = 6570,
  [SMALL_STATE(222)] = 6589,
  [SMALL_STATE(223)] = 6608,
  [SMALL_STATE(224)] = 6623,
  [SMALL_STATE(225)] = 6642,
  [SMALL_STATE(226)] = 6659,
  [SMALL_STATE(227)] = 6674,
  [SMALL_STATE(228)] = 6689,
  [SMALL_STATE(229)] = 6708,
  [SMALL_STATE(230)] = 6723,
  [SMALL_STATE(231)] = 6740,
  [SMALL_STATE(232)] = 6759,
  [SMALL_STATE(233)] = 6778,
  [SMALL_STATE(234)] = 6791,
  [SMALL_STATE(235)] = 6806,
  [SMALL_STATE(236)] = 6825,
  [SMALL_STATE(237)] = 6844,
  [SMALL_STATE(238)] = 6863,
  [SMALL_STATE(239)] = 6875,
  [SMALL_STATE(240)] = 6891,
  [SMALL_STATE(241)] = 6905,
  [SMALL_STATE(242)] = 6919,
  [SMALL_STATE(243)] = 6933,
  [SMALL_STATE(244)] = 6947,
  [SMALL_STATE(245)] = 6961,
  [SMALL_STATE(246)] = 6975,
  [SMALL_STATE(247)] = 6989,
  [SMALL_STATE(248)] = 7003,
  [SMALL_STATE(249)] = 7017,
  [SMALL_STATE(250)] = 7031,
  [SMALL_STATE(251)] = 7045,
  [SMALL_STATE(252)] = 7059,
  [SMALL_STATE(253)] = 7073,
  [SMALL_STATE(254)] = 7087,
  [SMALL_STATE(255)] = 7097,
  [SMALL_STATE(256)] = 7111,
  [SMALL_STATE(257)] = 7121,
  [SMALL_STATE(258)] = 7135,
  [SMALL_STATE(259)] = 7145,
  [SMALL_STATE(260)] = 7161,
  [SMALL_STATE(261)] = 7175,
  [SMALL_STATE(262)] = 7189,
  [SMALL_STATE(263)] = 7199,
  [SMALL_STATE(264)] = 7215,
  [SMALL_STATE(265)] = 7229,
  [SMALL_STATE(266)] = 7242,
  [SMALL_STATE(267)] = 7255,
  [SMALL_STATE(268)] = 7268,
  [SMALL_STATE(269)] = 7281,
  [SMALL_STATE(270)] = 7294,
  [SMALL_STATE(271)] = 7307,
  [SMALL_STATE(272)] = 7320,
  [SMALL_STATE(273)] = 7331,
  [SMALL_STATE(274)] = 7344,
  [SMALL_STATE(275)] = 7357,
  [SMALL_STATE(276)] = 7370,
  [SMALL_STATE(277)] = 7383,
  [SMALL_STATE(278)] = 7396,
  [SMALL_STATE(279)] = 7409,
  [SMALL_STATE(280)] = 7422,
  [SMALL_STATE(281)] = 7435,
  [SMALL_STATE(282)] = 7448,
  [SMALL_STATE(283)] = 7457,
  [SMALL_STATE(284)] = 7470,
  [SMALL_STATE(285)] = 7483,
  [SMALL_STATE(286)] = 7496,
  [SMALL_STATE(287)] = 7505,
  [SMALL_STATE(288)] = 7518,
  [SMALL_STATE(289)] = 7531,
  [SMALL_STATE(290)] = 7541,
  [SMALL_STATE(291)] = 7551,
  [SMALL_STATE(292)] = 7561,
  [SMALL_STATE(293)] = 7571,
  [SMALL_STATE(294)] = 7581,
  [SMALL_STATE(295)] = 7591,
  [SMALL_STATE(296)] = 7601,
  [SMALL_STATE(297)] = 7611,
  [SMALL_STATE(298)] = 7621,
  [SMALL_STATE(299)] = 7631,
  [SMALL_STATE(300)] = 7638,
  [SMALL_STATE(301)] = 7645,
  [SMALL_STATE(302)] = 7652,
  [SMALL_STATE(303)] = 7659,
  [SMALL_STATE(304)] = 7666,
  [SMALL_STATE(305)] = 7673,
  [SMALL_STATE(306)] = 7680,
  [SMALL_STATE(307)] = 7687,
  [SMALL_STATE(308)] = 7694,
  [SMALL_STATE(309)] = 7701,
  [SMALL_STATE(310)] = 7708,
  [SMALL_STATE(311)] = 7715,
  [SMALL_STATE(312)] = 7722,
  [SMALL_STATE(313)] = 7729,
  [SMALL_STATE(314)] = 7736,
  [SMALL_STATE(315)] = 7743,
  [SMALL_STATE(316)] = 7750,
  [SMALL_STATE(317)] = 7757,
  [SMALL_STATE(318)] = 7764,
  [SMALL_STATE(319)] = 7771,
  [SMALL_STATE(320)] = 7778,
  [SMALL_STATE(321)] = 7785,
  [SMALL_STATE(322)] = 7792,
  [SMALL_STATE(323)] = 7799,
  [SMALL_STATE(324)] = 7806,
  [SMALL_STATE(325)] = 7813,
  [SMALL_STATE(326)] = 7820,
  [SMALL_STATE(327)] = 7827,
  [SMALL_STATE(328)] = 7834,
  [SMALL_STATE(329)] = 7841,
  [SMALL_STATE(330)] = 7848,
  [SMALL_STATE(331)] = 7855,
  [SMALL_STATE(332)] = 7862,
  [SMALL_STATE(333)] = 7869,
  [SMALL_STATE(334)] = 7876,
  [SMALL_STATE(335)] = 7883,
  [SMALL_STATE(336)] = 7890,
  [SMALL_STATE(337)] = 7897,
  [SMALL_STATE(338)] = 7904,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(127),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(163),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(129),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(284),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(330),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(168),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(131),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(145),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(337),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(335),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(333),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(331),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(328),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(169),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(118),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(232),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(123),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(159),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(124),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(280),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(338),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(170),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(131),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(145),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(337),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(335),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(333),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(331),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(328),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(165),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(128),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(218),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 13),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_interpolation, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_interpolation, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 13),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 13),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 13),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 13),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 13),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 12),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 12),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(115),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(315),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(125),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(109),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(89),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(87),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(85),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(109),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(315),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(125),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(112),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(89),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(87),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(85),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(112),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 9),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 9),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 9),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 9),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 10),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 10),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 11),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 11),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 9),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 9),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [736] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(98),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(90),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 3),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 4),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 4),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_expr, 5),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_expr, 5),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(292),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(297),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_args, 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 14),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_args_repeat1, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_fat_arrow_function, 3),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(108),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_params, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_fat_arrow_function, 4),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_params, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(161),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_fat_arrow_function, 5),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_params_repeat1, 2), SHIFT_REPEAT(288),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_params_repeat1, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(24),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_args_repeat1, 2), SHIFT_REPEAT(283),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(12),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_args, 2),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_param, 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 13),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1040] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
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
