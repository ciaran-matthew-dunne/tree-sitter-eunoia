#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 347
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_assume = 2,
  anon_sym_assume_DASHpush = 3,
  anon_sym_declare_DASHconsts = 4,
  anon_sym_declare_DASHparameterized_DASHconst = 5,
  anon_sym_RPAREN = 6,
  anon_sym_declare_DASHoracle_DASHfun = 7,
  anon_sym_declare_DASHrule = 8,
  anon_sym_COLONconclusion = 9,
  anon_sym_declare_DASHtype = 10,
  anon_sym_define = 11,
  anon_sym_define_DASHtype = 12,
  anon_sym_include = 13,
  anon_sym_program = 14,
  anon_sym_reference = 15,
  anon_sym_step = 16,
  anon_sym_COLONrule = 17,
  anon_sym_step_DASHpop = 18,
  anon_sym_declare_DASHconst = 19,
  anon_sym_declare_DASHdatatype = 20,
  anon_sym_declare_DASHdatatypes = 21,
  anon_sym_echo = 22,
  anon_sym_exit = 23,
  anon_sym_reset = 24,
  anon_sym_set_DASHoption = 25,
  anon_sym_assert = 26,
  anon_sym_check_DASHsat = 27,
  anon_sym_check_DASHsat_DASHassuming = 28,
  anon_sym_declare_DASHfun = 29,
  anon_sym_declare_DASHsort = 30,
  anon_sym_define_DASHconst = 31,
  anon_sym_define_DASHfun = 32,
  anon_sym_define_DASHsort = 33,
  anon_sym_set_DASHinfo = 34,
  anon_sym_set_DASHlogic = 35,
  sym_keyword = 36,
  sym_symbol = 37,
  sym_string = 38,
  sym_numeral = 39,
  sym_lit_category = 40,
  anon_sym_BANG = 41,
  anon_sym_eo_COLON_COLONmatch = 42,
  anon_sym_COLONassumption = 43,
  anon_sym_COLONpremise_DASHlist = 44,
  anon_sym_COLONpremises = 45,
  anon_sym_COLONargs = 46,
  anon_sym_COLONrequires = 47,
  sym_comment = 48,
  sym_source_file = 49,
  sym_command = 50,
  sym_eo_command = 51,
  sym_common_command = 52,
  sym_smtlib2_command = 53,
  sym_term = 54,
  sym_type = 55,
  sym_typed_param = 56,
  sym_sort_dec = 57,
  sym_sel_dec = 58,
  sym_cons_dec = 59,
  sym_datatype_dec = 60,
  sym_assumption = 61,
  sym_premises = 62,
  sym_simple_premises = 63,
  sym_arguments = 64,
  sym_reqs = 65,
  sym_sexpr = 66,
  sym_attr = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_eo_command_repeat1 = 69,
  aux_sym_eo_command_repeat2 = 70,
  aux_sym_eo_command_repeat3 = 71,
  aux_sym_eo_command_repeat4 = 72,
  aux_sym_eo_command_repeat5 = 73,
  aux_sym_common_command_repeat1 = 74,
  aux_sym_common_command_repeat2 = 75,
  aux_sym_smtlib2_command_repeat1 = 76,
  aux_sym_smtlib2_command_repeat2 = 77,
  aux_sym_cons_dec_repeat1 = 78,
  aux_sym_datatype_dec_repeat1 = 79,
  aux_sym_reqs_repeat1 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_assume] = "assume",
  [anon_sym_assume_DASHpush] = "assume-push",
  [anon_sym_declare_DASHconsts] = "declare-consts",
  [anon_sym_declare_DASHparameterized_DASHconst] = "declare-parameterized-const",
  [anon_sym_RPAREN] = ")",
  [anon_sym_declare_DASHoracle_DASHfun] = "declare-oracle-fun",
  [anon_sym_declare_DASHrule] = "declare-rule",
  [anon_sym_COLONconclusion] = ":conclusion",
  [anon_sym_declare_DASHtype] = "declare-type",
  [anon_sym_define] = "define",
  [anon_sym_define_DASHtype] = "define-type",
  [anon_sym_include] = "include",
  [anon_sym_program] = "program",
  [anon_sym_reference] = "reference",
  [anon_sym_step] = "step",
  [anon_sym_COLONrule] = ":rule",
  [anon_sym_step_DASHpop] = "step-pop",
  [anon_sym_declare_DASHconst] = "declare-const",
  [anon_sym_declare_DASHdatatype] = "declare-datatype",
  [anon_sym_declare_DASHdatatypes] = "declare-datatypes",
  [anon_sym_echo] = "echo",
  [anon_sym_exit] = "exit",
  [anon_sym_reset] = "reset",
  [anon_sym_set_DASHoption] = "set-option",
  [anon_sym_assert] = "assert",
  [anon_sym_check_DASHsat] = "check-sat",
  [anon_sym_check_DASHsat_DASHassuming] = "check-sat-assuming",
  [anon_sym_declare_DASHfun] = "declare-fun",
  [anon_sym_declare_DASHsort] = "declare-sort",
  [anon_sym_define_DASHconst] = "define-const",
  [anon_sym_define_DASHfun] = "define-fun",
  [anon_sym_define_DASHsort] = "define-sort",
  [anon_sym_set_DASHinfo] = "set-info",
  [anon_sym_set_DASHlogic] = "set-logic",
  [sym_keyword] = "keyword",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [sym_numeral] = "numeral",
  [sym_lit_category] = "lit_category",
  [anon_sym_BANG] = "!",
  [anon_sym_eo_COLON_COLONmatch] = "eo::match",
  [anon_sym_COLONassumption] = ":assumption",
  [anon_sym_COLONpremise_DASHlist] = ":premise-list",
  [anon_sym_COLONpremises] = ":premises",
  [anon_sym_COLONargs] = ":args",
  [anon_sym_COLONrequires] = ":requires",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_eo_command] = "eo_command",
  [sym_common_command] = "common_command",
  [sym_smtlib2_command] = "smtlib2_command",
  [sym_term] = "term",
  [sym_type] = "type",
  [sym_typed_param] = "typed_param",
  [sym_sort_dec] = "sort_dec",
  [sym_sel_dec] = "sel_dec",
  [sym_cons_dec] = "cons_dec",
  [sym_datatype_dec] = "datatype_dec",
  [sym_assumption] = "assumption",
  [sym_premises] = "premises",
  [sym_simple_premises] = "simple_premises",
  [sym_arguments] = "arguments",
  [sym_reqs] = "reqs",
  [sym_sexpr] = "sexpr",
  [sym_attr] = "attr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_eo_command_repeat1] = "eo_command_repeat1",
  [aux_sym_eo_command_repeat2] = "eo_command_repeat2",
  [aux_sym_eo_command_repeat3] = "eo_command_repeat3",
  [aux_sym_eo_command_repeat4] = "eo_command_repeat4",
  [aux_sym_eo_command_repeat5] = "eo_command_repeat5",
  [aux_sym_common_command_repeat1] = "common_command_repeat1",
  [aux_sym_common_command_repeat2] = "common_command_repeat2",
  [aux_sym_smtlib2_command_repeat1] = "smtlib2_command_repeat1",
  [aux_sym_smtlib2_command_repeat2] = "smtlib2_command_repeat2",
  [aux_sym_cons_dec_repeat1] = "cons_dec_repeat1",
  [aux_sym_datatype_dec_repeat1] = "datatype_dec_repeat1",
  [aux_sym_reqs_repeat1] = "reqs_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_assume] = anon_sym_assume,
  [anon_sym_assume_DASHpush] = anon_sym_assume_DASHpush,
  [anon_sym_declare_DASHconsts] = anon_sym_declare_DASHconsts,
  [anon_sym_declare_DASHparameterized_DASHconst] = anon_sym_declare_DASHparameterized_DASHconst,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_declare_DASHoracle_DASHfun] = anon_sym_declare_DASHoracle_DASHfun,
  [anon_sym_declare_DASHrule] = anon_sym_declare_DASHrule,
  [anon_sym_COLONconclusion] = anon_sym_COLONconclusion,
  [anon_sym_declare_DASHtype] = anon_sym_declare_DASHtype,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_define_DASHtype] = anon_sym_define_DASHtype,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_program] = anon_sym_program,
  [anon_sym_reference] = anon_sym_reference,
  [anon_sym_step] = anon_sym_step,
  [anon_sym_COLONrule] = anon_sym_COLONrule,
  [anon_sym_step_DASHpop] = anon_sym_step_DASHpop,
  [anon_sym_declare_DASHconst] = anon_sym_declare_DASHconst,
  [anon_sym_declare_DASHdatatype] = anon_sym_declare_DASHdatatype,
  [anon_sym_declare_DASHdatatypes] = anon_sym_declare_DASHdatatypes,
  [anon_sym_echo] = anon_sym_echo,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_reset] = anon_sym_reset,
  [anon_sym_set_DASHoption] = anon_sym_set_DASHoption,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_check_DASHsat] = anon_sym_check_DASHsat,
  [anon_sym_check_DASHsat_DASHassuming] = anon_sym_check_DASHsat_DASHassuming,
  [anon_sym_declare_DASHfun] = anon_sym_declare_DASHfun,
  [anon_sym_declare_DASHsort] = anon_sym_declare_DASHsort,
  [anon_sym_define_DASHconst] = anon_sym_define_DASHconst,
  [anon_sym_define_DASHfun] = anon_sym_define_DASHfun,
  [anon_sym_define_DASHsort] = anon_sym_define_DASHsort,
  [anon_sym_set_DASHinfo] = anon_sym_set_DASHinfo,
  [anon_sym_set_DASHlogic] = anon_sym_set_DASHlogic,
  [sym_keyword] = sym_keyword,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [sym_numeral] = sym_numeral,
  [sym_lit_category] = sym_lit_category,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_eo_COLON_COLONmatch] = anon_sym_eo_COLON_COLONmatch,
  [anon_sym_COLONassumption] = anon_sym_COLONassumption,
  [anon_sym_COLONpremise_DASHlist] = anon_sym_COLONpremise_DASHlist,
  [anon_sym_COLONpremises] = anon_sym_COLONpremises,
  [anon_sym_COLONargs] = anon_sym_COLONargs,
  [anon_sym_COLONrequires] = anon_sym_COLONrequires,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym_eo_command] = sym_eo_command,
  [sym_common_command] = sym_common_command,
  [sym_smtlib2_command] = sym_smtlib2_command,
  [sym_term] = sym_term,
  [sym_type] = sym_type,
  [sym_typed_param] = sym_typed_param,
  [sym_sort_dec] = sym_sort_dec,
  [sym_sel_dec] = sym_sel_dec,
  [sym_cons_dec] = sym_cons_dec,
  [sym_datatype_dec] = sym_datatype_dec,
  [sym_assumption] = sym_assumption,
  [sym_premises] = sym_premises,
  [sym_simple_premises] = sym_simple_premises,
  [sym_arguments] = sym_arguments,
  [sym_reqs] = sym_reqs,
  [sym_sexpr] = sym_sexpr,
  [sym_attr] = sym_attr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_eo_command_repeat1] = aux_sym_eo_command_repeat1,
  [aux_sym_eo_command_repeat2] = aux_sym_eo_command_repeat2,
  [aux_sym_eo_command_repeat3] = aux_sym_eo_command_repeat3,
  [aux_sym_eo_command_repeat4] = aux_sym_eo_command_repeat4,
  [aux_sym_eo_command_repeat5] = aux_sym_eo_command_repeat5,
  [aux_sym_common_command_repeat1] = aux_sym_common_command_repeat1,
  [aux_sym_common_command_repeat2] = aux_sym_common_command_repeat2,
  [aux_sym_smtlib2_command_repeat1] = aux_sym_smtlib2_command_repeat1,
  [aux_sym_smtlib2_command_repeat2] = aux_sym_smtlib2_command_repeat2,
  [aux_sym_cons_dec_repeat1] = aux_sym_cons_dec_repeat1,
  [aux_sym_datatype_dec_repeat1] = aux_sym_datatype_dec_repeat1,
  [aux_sym_reqs_repeat1] = aux_sym_reqs_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assume] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assume_DASHpush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHconsts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHparameterized_DASHconst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHoracle_DASHfun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHrule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONconclusion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_program] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_step] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONrule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_step_DASHpop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHconst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHdatatype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHdatatypes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHoption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHsat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHsat_DASHassuming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHfun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHsort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHconst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHfun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHsort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHinfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHlogic] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_numeral] = {
    .visible = true,
    .named = true,
  },
  [sym_lit_category] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eo_COLON_COLONmatch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONassumption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONpremise_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONpremises] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONargs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONrequires] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_eo_command] = {
    .visible = true,
    .named = true,
  },
  [sym_common_command] = {
    .visible = true,
    .named = true,
  },
  [sym_smtlib2_command] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_param] = {
    .visible = true,
    .named = true,
  },
  [sym_sort_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_sel_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_cons_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_assumption] = {
    .visible = true,
    .named = true,
  },
  [sym_premises] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_premises] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_reqs] = {
    .visible = true,
    .named = true,
  },
  [sym_sexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eo_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eo_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eo_command_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eo_command_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eo_command_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_common_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_common_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_smtlib2_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_smtlib2_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cons_dec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datatype_dec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reqs_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 31,
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
  [49] = 31,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 48,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
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
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 64,
  [119] = 119,
  [120] = 64,
  [121] = 58,
  [122] = 58,
  [123] = 75,
  [124] = 65,
  [125] = 75,
  [126] = 65,
  [127] = 127,
  [128] = 10,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 7,
  [177] = 139,
  [178] = 9,
  [179] = 8,
  [180] = 11,
  [181] = 181,
  [182] = 181,
  [183] = 167,
  [184] = 172,
  [185] = 181,
  [186] = 167,
  [187] = 172,
  [188] = 130,
  [189] = 149,
  [190] = 130,
  [191] = 149,
  [192] = 141,
  [193] = 150,
  [194] = 141,
  [195] = 150,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 7,
  [234] = 9,
  [235] = 10,
  [236] = 8,
  [237] = 11,
  [238] = 238,
  [239] = 239,
  [240] = 197,
  [241] = 216,
  [242] = 197,
  [243] = 216,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 272,
  [311] = 284,
  [312] = 312,
  [313] = 313,
  [314] = 272,
  [315] = 284,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 307,
  [334] = 332,
  [335] = 307,
  [336] = 332,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 330,
  [345] = 330,
  [346] = 346,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(238);
      ADVANCE_MAP(
        '!', 294,
        '"', 2,
        '\'', 16,
        '(', 239,
        ')', 244,
        ':', 18,
        ';', 303,
        'a', 187,
        'c', 90,
        'd', 50,
        'e', 36,
        'i', 126,
        'p', 171,
        'r', 51,
        's', 52,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(295);
      if (lookahead == ';') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(284);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(293);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == ';') ADVANCE(303);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == ';') ADVANCE(288);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == ';') ADVANCE(288);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == ';') ADVANCE(288);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(198);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        'c', 157,
        'd', 25,
        'f', 226,
        'o', 177,
        'p', 32,
        'r', 228,
        's', 155,
        't', 233,
      );
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 108:
      if (lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 168:
      if (lookahead == 'q') ADVANCE(224);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 230:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 231:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 232:
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 233:
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 234:
      if (lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 235:
      if (lookahead == 'z') ADVANCE(68);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(275);
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_assume);
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_assume_DASHpush);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_declare_DASHconsts);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_declare_DASHparameterized_DASHconst);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_declare_DASHoracle_DASHfun);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_declare_DASHrule);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COLONconclusion);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_declare_DASHtype);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_define_DASHtype);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_program);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_reference);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_step);
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_COLONrule);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COLONrule);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_step_DASHpop);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_declare_DASHconst);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_declare_DASHdatatype);
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_declare_DASHdatatypes);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_check_DASHsat);
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_check_DASHsat_DASHassuming);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_declare_DASHfun);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_declare_DASHsort);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_define_DASHconst);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_define_DASHfun);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_define_DASHsort);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_set_DASHinfo);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_set_DASHlogic);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(275);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_numeral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_lit_category);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_eo_COLON_COLONmatch);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_eo_COLON_COLONmatch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(289);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLONassumption);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_COLONpremise_DASHlist);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_COLONpremises);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_COLONargs);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_COLONrequires);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(303);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 6},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 6},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 6},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 6},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 6},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 6},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_assume] = ACTIONS(1),
    [anon_sym_assume_DASHpush] = ACTIONS(1),
    [anon_sym_declare_DASHconsts] = ACTIONS(1),
    [anon_sym_declare_DASHparameterized_DASHconst] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_declare_DASHoracle_DASHfun] = ACTIONS(1),
    [anon_sym_declare_DASHrule] = ACTIONS(1),
    [anon_sym_COLONconclusion] = ACTIONS(1),
    [anon_sym_declare_DASHtype] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_define_DASHtype] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_program] = ACTIONS(1),
    [anon_sym_reference] = ACTIONS(1),
    [anon_sym_step] = ACTIONS(1),
    [anon_sym_COLONrule] = ACTIONS(1),
    [anon_sym_step_DASHpop] = ACTIONS(1),
    [anon_sym_declare_DASHconst] = ACTIONS(1),
    [anon_sym_declare_DASHdatatype] = ACTIONS(1),
    [anon_sym_declare_DASHdatatypes] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_reset] = ACTIONS(1),
    [anon_sym_set_DASHoption] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check_DASHsat] = ACTIONS(1),
    [anon_sym_check_DASHsat_DASHassuming] = ACTIONS(1),
    [anon_sym_declare_DASHfun] = ACTIONS(1),
    [anon_sym_declare_DASHsort] = ACTIONS(1),
    [anon_sym_define_DASHconst] = ACTIONS(1),
    [anon_sym_define_DASHfun] = ACTIONS(1),
    [anon_sym_define_DASHsort] = ACTIONS(1),
    [anon_sym_set_DASHinfo] = ACTIONS(1),
    [anon_sym_set_DASHlogic] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_numeral] = ACTIONS(1),
    [sym_lit_category] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_eo_COLON_COLONmatch] = ACTIONS(1),
    [anon_sym_COLONassumption] = ACTIONS(1),
    [anon_sym_COLONpremise_DASHlist] = ACTIONS(1),
    [anon_sym_COLONpremises] = ACTIONS(1),
    [anon_sym_COLONargs] = ACTIONS(1),
    [anon_sym_COLONrequires] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(264),
    [sym_command] = STATE(13),
    [sym_eo_command] = STATE(213),
    [sym_common_command] = STATE(213),
    [sym_smtlib2_command] = STATE(213),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_assume,
    ACTIONS(11), 1,
      anon_sym_assume_DASHpush,
    ACTIONS(13), 1,
      anon_sym_declare_DASHconsts,
    ACTIONS(15), 1,
      anon_sym_declare_DASHparameterized_DASHconst,
    ACTIONS(17), 1,
      anon_sym_declare_DASHoracle_DASHfun,
    ACTIONS(19), 1,
      anon_sym_declare_DASHrule,
    ACTIONS(21), 1,
      anon_sym_declare_DASHtype,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_define_DASHtype,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_program,
    ACTIONS(31), 1,
      anon_sym_reference,
    ACTIONS(33), 1,
      anon_sym_step,
    ACTIONS(35), 1,
      anon_sym_step_DASHpop,
    ACTIONS(37), 1,
      anon_sym_declare_DASHconst,
    ACTIONS(39), 1,
      anon_sym_declare_DASHdatatype,
    ACTIONS(41), 1,
      anon_sym_declare_DASHdatatypes,
    ACTIONS(43), 1,
      anon_sym_echo,
    ACTIONS(47), 1,
      anon_sym_set_DASHoption,
    ACTIONS(49), 1,
      anon_sym_assert,
    ACTIONS(51), 1,
      anon_sym_check_DASHsat,
    ACTIONS(53), 1,
      anon_sym_check_DASHsat_DASHassuming,
    ACTIONS(55), 1,
      anon_sym_declare_DASHfun,
    ACTIONS(57), 1,
      anon_sym_declare_DASHsort,
    ACTIONS(59), 1,
      anon_sym_define_DASHconst,
    ACTIONS(61), 1,
      anon_sym_define_DASHfun,
    ACTIONS(63), 1,
      anon_sym_define_DASHsort,
    ACTIONS(65), 1,
      anon_sym_set_DASHinfo,
    ACTIONS(67), 1,
      anon_sym_set_DASHlogic,
    ACTIONS(45), 2,
      anon_sym_exit,
      anon_sym_reset,
  [95] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_COLONconclusion,
    ACTIONS(71), 1,
      anon_sym_COLONassumption,
    ACTIONS(73), 1,
      anon_sym_COLONpremise_DASHlist,
    ACTIONS(75), 1,
      anon_sym_COLONpremises,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    STATE(6), 1,
      sym_assumption,
    STATE(35), 1,
      sym_premises,
    STATE(134), 1,
      sym_simple_premises,
    STATE(135), 1,
      sym_arguments,
    STATE(323), 1,
      sym_reqs,
  [132] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COLONassumption,
    ACTIONS(73), 1,
      anon_sym_COLONpremise_DASHlist,
    ACTIONS(75), 1,
      anon_sym_COLONpremises,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    ACTIONS(81), 1,
      anon_sym_COLONconclusion,
    STATE(5), 1,
      sym_assumption,
    STATE(30), 1,
      sym_premises,
    STATE(134), 1,
      sym_simple_premises,
    STATE(147), 1,
      sym_arguments,
    STATE(328), 1,
      sym_reqs,
  [169] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_COLONpremise_DASHlist,
    ACTIONS(75), 1,
      anon_sym_COLONpremises,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    ACTIONS(83), 1,
      anon_sym_COLONconclusion,
    STATE(46), 1,
      sym_premises,
    STATE(134), 1,
      sym_simple_premises,
    STATE(158), 1,
      sym_arguments,
    STATE(289), 1,
      sym_reqs,
  [200] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_COLONpremise_DASHlist,
    ACTIONS(75), 1,
      anon_sym_COLONpremises,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    ACTIONS(81), 1,
      anon_sym_COLONconclusion,
    STATE(30), 1,
      sym_premises,
    STATE(134), 1,
      sym_simple_premises,
    STATE(147), 1,
      sym_arguments,
    STATE(328), 1,
      sym_reqs,
  [231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONconclusion,
      anon_sym_COLONrule,
      anon_sym_COLONpremise_DASHlist,
      anon_sym_COLONpremises,
      anon_sym_COLONargs,
      anon_sym_COLONrequires,
  [245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONconclusion,
      anon_sym_COLONrule,
      anon_sym_COLONpremise_DASHlist,
      anon_sym_COLONpremises,
      anon_sym_COLONargs,
      anon_sym_COLONrequires,
  [259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONconclusion,
      anon_sym_COLONrule,
      anon_sym_COLONpremise_DASHlist,
      anon_sym_COLONpremises,
      anon_sym_COLONargs,
      anon_sym_COLONrequires,
  [273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONconclusion,
      anon_sym_COLONrule,
      anon_sym_COLONpremise_DASHlist,
      anon_sym_COLONpremises,
      anon_sym_COLONargs,
      anon_sym_COLONrequires,
  [287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONconclusion,
      anon_sym_COLONrule,
      anon_sym_COLONpremise_DASHlist,
      anon_sym_COLONpremises,
      anon_sym_COLONargs,
      anon_sym_COLONrequires,
  [301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(12), 2,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(213), 3,
      sym_eo_command,
      sym_common_command,
      sym_smtlib2_command,
  [320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(213), 3,
      sym_eo_command,
      sym_common_command,
      sym_smtlib2_command,
  [339] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(159), 1,
      sym_term,
    STATE(20), 2,
      sym_sexpr,
      aux_sym_eo_command_repeat4,
  [359] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(21), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [379] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(18), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [399] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(22), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [419] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(29), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [439] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(23), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [459] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym_term,
    STATE(25), 2,
      sym_sexpr,
      aux_sym_eo_command_repeat4,
  [479] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(29), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [499] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(29), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [519] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(29), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [539] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(27), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [559] = 6,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      sym_symbol,
    STATE(159), 1,
      sym_term,
    STATE(25), 2,
      sym_sexpr,
      aux_sym_eo_command_repeat4,
  [579] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(28), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [599] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(29), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [619] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_term,
    STATE(29), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [639] = 6,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      sym_symbol,
    STATE(177), 1,
      sym_term,
    STATE(29), 2,
      sym_type,
      aux_sym_eo_command_repeat3,
  [659] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    ACTIONS(83), 1,
      anon_sym_COLONconclusion,
    STATE(158), 1,
      sym_arguments,
    STATE(289), 1,
      sym_reqs,
  [678] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [695] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLONpremises,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_simple_premises,
    STATE(261), 1,
      sym_arguments,
  [714] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [731] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      sym_symbol,
    STATE(34), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [748] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    ACTIONS(81), 1,
      anon_sym_COLONconclusion,
    STATE(147), 1,
      sym_arguments,
    STATE(328), 1,
      sym_reqs,
  [767] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLONpremises,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_simple_premises,
    STATE(251), 1,
      sym_arguments,
  [786] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 5,
      anon_sym_COLONconclusion,
      anon_sym_COLONpremise_DASHlist,
      anon_sym_COLONpremises,
      anon_sym_COLONargs,
      anon_sym_COLONrequires,
  [814] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(43), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [831] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(44), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [848] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_reqs_repeat1,
    STATE(156), 1,
      sym_term,
  [867] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(37), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [884] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [901] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [918] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_reqs_repeat1,
    STATE(156), 1,
      sym_term,
  [937] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    ACTIONS(182), 1,
      anon_sym_COLONconclusion,
    STATE(196), 1,
      sym_arguments,
    STATE(299), 1,
      sym_reqs,
  [956] = 6,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      sym_symbol,
    STATE(47), 1,
      aux_sym_reqs_repeat1,
    STATE(156), 1,
      sym_term,
  [975] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(245), 1,
      sym_term,
    ACTIONS(194), 2,
      anon_sym_RPAREN,
      sym_keyword,
  [992] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [1009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(98), 2,
      sym_sel_dec,
      aux_sym_cons_dec_repeat1,
  [1023] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(177), 1,
      sym_term,
    STATE(309), 1,
      sym_type,
  [1039] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(139), 1,
      sym_term,
    STATE(303), 1,
      sym_type,
  [1055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(76), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1069] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(139), 1,
      sym_term,
    STATE(261), 1,
      sym_type,
  [1085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(214), 1,
      sym_keyword,
    STATE(59), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(73), 2,
      sym_sort_dec,
      aux_sym_common_command_repeat1,
  [1113] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(139), 1,
      sym_term,
    STATE(251), 1,
      sym_type,
  [1129] = 4,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(33), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [1143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      sym_keyword,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(50), 2,
      sym_sel_dec,
      aux_sym_cons_dec_repeat1,
  [1185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(62), 2,
      sym_cons_dec,
      aux_sym_datatype_dec_repeat1,
  [1199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(62), 2,
      sym_cons_dec,
      aux_sym_datatype_dec_repeat1,
  [1213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(119), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(85), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1255] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(86), 1,
      sym_type,
    STATE(139), 1,
      sym_term,
  [1271] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(151), 1,
      sym_type,
    STATE(177), 1,
      sym_term,
  [1287] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(139), 1,
      sym_term,
    STATE(313), 1,
      sym_type,
  [1303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(87), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(73), 2,
      sym_sort_dec,
      aux_sym_common_command_repeat1,
  [1359] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(245), 1,
      sym_term,
  [1375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(65), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(119), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1403] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(66), 1,
      sym_type,
    STATE(139), 1,
      sym_term,
  [1419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1433] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(139), 1,
      sym_term,
    STATE(291), 1,
      sym_type,
  [1449] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(115), 1,
      sym_type,
    STATE(139), 1,
      sym_term,
  [1465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(119), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1479] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(55), 1,
      sym_type,
    STATE(139), 1,
      sym_term,
  [1495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_datatype_dec,
      aux_sym_common_command_repeat2,
  [1509] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(177), 1,
      sym_term,
    STATE(262), 1,
      sym_type,
  [1525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(100), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_RPAREN,
      anon_sym_COLONconclusion,
      anon_sym_COLONargs,
      anon_sym_COLONrequires,
  [1591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(119), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1605] = 5,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(142), 1,
      sym_type,
    STATE(177), 1,
      sym_term,
  [1621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(119), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(103), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1649] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(139), 1,
      sym_term,
    STATE(278), 1,
      sym_type,
  [1665] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(139), 1,
      sym_term,
    STATE(254), 1,
      sym_type,
  [1681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(81), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1695] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(139), 1,
      sym_term,
    STATE(256), 1,
      sym_type,
  [1711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(98), 2,
      sym_sel_dec,
      aux_sym_cons_dec_repeat1,
  [1725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_datatype_dec,
      aux_sym_common_command_repeat2,
  [1739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_RPAREN,
      anon_sym_COLONconclusion,
      anon_sym_COLONargs,
      anon_sym_COLONrequires,
  [1763] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(70), 1,
      sym_type,
    STATE(139), 1,
      sym_term,
  [1779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(106), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1807] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(139), 1,
      sym_term,
    STATE(269), 1,
      sym_type,
  [1823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(108), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1879] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    ACTIONS(299), 1,
      anon_sym_COLONrule,
    STATE(317), 1,
      sym_term,
  [1895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(114), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(119), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(214), 1,
      sym_keyword,
    STATE(71), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [1965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(113), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [1979] = 5,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(72), 1,
      sym_type,
    STATE(139), 1,
      sym_term,
  [1995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [2009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(119), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [2023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [2037] = 4,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(49), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [2051] = 4,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(31), 2,
      sym_term,
      aux_sym_smtlib2_command_repeat1,
  [2065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(124), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [2079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(119), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [2093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(126), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [2107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(119), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [2121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(90), 2,
      sym_typed_param,
      aux_sym_eo_command_repeat1,
  [2135] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_symbol,
    ACTIONS(91), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    STATE(56), 2,
      sym_sort_dec,
      aux_sym_common_command_repeat1,
  [2157] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_symbol,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_eo_COLON_COLONmatch,
  [2170] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(72), 1,
      sym_term,
  [2183] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(38), 1,
      sym_term,
  [2196] = 4,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(144), 1,
      sym_term,
  [2209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_COLONconclusion,
      anon_sym_COLONargs,
      anon_sym_COLONrequires,
  [2218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    ACTIONS(81), 1,
      anon_sym_COLONconclusion,
    STATE(328), 1,
      sym_reqs,
  [2231] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(251), 1,
      sym_term,
  [2244] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(298), 1,
      sym_term,
  [2257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_arguments,
  [2270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_keyword,
  [2279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(83), 2,
      sym_datatype_dec,
      aux_sym_common_command_repeat2,
  [2290] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(336), 1,
      sym_term,
  [2303] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(313), 1,
      sym_term,
  [2316] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 1,
      sym_symbol,
    STATE(143), 1,
      aux_sym_smtlib2_command_repeat2,
  [2329] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(153), 1,
      sym_term,
  [2342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(63), 2,
      sym_cons_dec,
      aux_sym_datatype_dec_repeat1,
  [2353] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(93), 1,
      sym_term,
  [2366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    ACTIONS(83), 1,
      anon_sym_COLONconclusion,
    STATE(289), 1,
      sym_reqs,
  [2379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COLONargs,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym_arguments,
  [2392] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(181), 1,
      sym_term,
  [2405] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(307), 1,
      sym_term,
  [2418] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(326), 1,
      sym_term,
  [2431] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(273), 1,
      sym_term,
  [2444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 3,
      anon_sym_COLONconclusion,
      anon_sym_COLONargs,
      anon_sym_COLONrequires,
  [2453] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      sym_symbol,
    STATE(164), 1,
      aux_sym_smtlib2_command_repeat2,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_RPAREN,
      anon_sym_COLONconclusion,
      anon_sym_COLONrequires,
  [2475] = 4,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(161), 1,
      sym_term,
  [2488] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(104), 1,
      sym_term,
  [2501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    ACTIONS(182), 1,
      anon_sym_COLONconclusion,
    STATE(299), 1,
      sym_reqs,
  [2514] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_symbol,
    ACTIONS(353), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_RPAREN,
      anon_sym_COLONconclusion,
      anon_sym_COLONrequires,
  [2534] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_symbol,
    ACTIONS(187), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2545] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(261), 1,
      sym_term,
  [2558] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(107), 1,
      sym_term,
  [2571] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      sym_symbol,
    STATE(143), 1,
      aux_sym_smtlib2_command_repeat2,
  [2584] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(303), 1,
      sym_term,
  [2597] = 4,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_symbol,
    ACTIONS(108), 1,
      sym_comment,
    STATE(170), 1,
      sym_term,
  [2610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_eo_command_repeat5,
  [2623] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(109), 1,
      sym_term,
  [2636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_eo_command_repeat5,
  [2649] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(282), 1,
      sym_term,
  [2662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_eo_command_repeat5,
  [2675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_eo_command_repeat5,
  [2688] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(112), 1,
      sym_term,
  [2701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_eo_command_repeat5,
  [2714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_eo_command_repeat5,
  [2727] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_symbol,
    ACTIONS(85), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2738] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_symbol,
    ACTIONS(338), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2749] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_symbol,
    ACTIONS(89), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2760] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_symbol,
    ACTIONS(87), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2771] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_symbol,
    ACTIONS(93), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    STATE(64), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [2793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    STATE(118), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [2804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_eo_command_repeat5,
  [2817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_eo_command_repeat5,
  [2830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_keyword,
    STATE(120), 2,
      sym_attr,
      aux_sym_eo_command_repeat2,
  [2841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_eo_command_repeat5,
  [2854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_eo_command_repeat5,
  [2867] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_symbol,
    ACTIONS(402), 1,
      anon_sym_BANG,
    ACTIONS(404), 1,
      anon_sym_eo_COLON_COLONmatch,
  [2880] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(182), 1,
      sym_term,
  [2893] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_symbol,
    ACTIONS(408), 1,
      anon_sym_BANG,
    ACTIONS(410), 1,
      anon_sym_eo_COLON_COLONmatch,
  [2906] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_symbol,
    STATE(185), 1,
      sym_term,
  [2919] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(332), 1,
      sym_term,
  [2932] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(333), 1,
      sym_term,
  [2945] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(334), 1,
      sym_term,
  [2958] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym_symbol,
    STATE(335), 1,
      sym_term,
  [2971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COLONrequires,
    ACTIONS(412), 1,
      anon_sym_COLONconclusion,
    STATE(266), 1,
      sym_reqs,
  [2984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      aux_sym_eo_command_repeat5,
  [2994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_keyword,
    STATE(327), 1,
      sym_attr,
  [3036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      sym_datatype_dec,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_keyword,
    STATE(273), 1,
      sym_attr,
  [3112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      aux_sym_eo_command_repeat5,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      aux_sym_eo_command_repeat5,
  [3156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      aux_sym_eo_command_repeat5,
  [3190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      aux_sym_eo_command_repeat5,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      sym_keyword,
  [3258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_RPAREN,
      sym_keyword,
  [3298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      sym_keyword,
  [3306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_RPAREN,
      sym_keyword,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      sym_keyword,
  [3322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      sym_keyword,
  [3330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      aux_sym_eo_command_repeat5,
  [3356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      aux_sym_eo_command_repeat5,
  [3366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      aux_sym_eo_command_repeat5,
  [3376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      aux_sym_eo_command_repeat5,
  [3386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_RPAREN,
      sym_keyword,
  [3402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    ACTIONS(489), 1,
      sym_string,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_keyword,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
  [3430] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    ACTIONS(497), 1,
      sym_symbol,
  [3440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
  [3455] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_symbol,
  [3462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [3469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
  [3476] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_symbol,
  [3483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [3490] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_symbol,
  [3497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
  [3504] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_symbol,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
  [3518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [3525] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_symbol,
  [3532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
  [3539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
  [3546] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_symbol,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COLONconclusion,
  [3560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_string,
  [3567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_COLONconclusion,
  [3574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
  [3581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
  [3588] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_symbol,
  [3595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [3602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [3609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_string,
  [3616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [3623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
  [3630] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_symbol,
  [3637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
  [3644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
  [3651] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_symbol,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [3672] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_symbol,
  [3679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [3686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
  [3693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
  [3700] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_symbol,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COLONconclusion,
  [3721] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_symbol,
  [3728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
  [3735] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym_symbol,
  [3742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_numeral,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
  [3756] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym_symbol,
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [3770] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_symbol,
  [3777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [3784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COLONconclusion,
  [3791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LPAREN,
  [3798] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_symbol,
  [3805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
  [3819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [3826] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym_symbol,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
  [3847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
  [3854] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_symbol,
  [3861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [3868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [3875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LPAREN,
  [3882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
  [3889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COLONrule,
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
  [3924] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_symbol,
  [3931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [3938] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_symbol,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COLONconclusion,
  [3959] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym_symbol,
  [3966] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_symbol,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
  [3980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
  [3987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COLONconclusion,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
  [4015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_LPAREN,
  [4029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
  [4036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_LPAREN,
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
  [4050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
  [4057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_COLONconclusion,
  [4064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [4071] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_symbol,
  [4078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_numeral,
  [4085] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_symbol,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_lit_category,
  [4099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
  [4113] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 169,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 245,
  [SMALL_STATE(9)] = 259,
  [SMALL_STATE(10)] = 273,
  [SMALL_STATE(11)] = 287,
  [SMALL_STATE(12)] = 301,
  [SMALL_STATE(13)] = 320,
  [SMALL_STATE(14)] = 339,
  [SMALL_STATE(15)] = 359,
  [SMALL_STATE(16)] = 379,
  [SMALL_STATE(17)] = 399,
  [SMALL_STATE(18)] = 419,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 459,
  [SMALL_STATE(21)] = 479,
  [SMALL_STATE(22)] = 499,
  [SMALL_STATE(23)] = 519,
  [SMALL_STATE(24)] = 539,
  [SMALL_STATE(25)] = 559,
  [SMALL_STATE(26)] = 579,
  [SMALL_STATE(27)] = 599,
  [SMALL_STATE(28)] = 619,
  [SMALL_STATE(29)] = 639,
  [SMALL_STATE(30)] = 659,
  [SMALL_STATE(31)] = 678,
  [SMALL_STATE(32)] = 695,
  [SMALL_STATE(33)] = 714,
  [SMALL_STATE(34)] = 731,
  [SMALL_STATE(35)] = 748,
  [SMALL_STATE(36)] = 767,
  [SMALL_STATE(37)] = 786,
  [SMALL_STATE(38)] = 803,
  [SMALL_STATE(39)] = 814,
  [SMALL_STATE(40)] = 831,
  [SMALL_STATE(41)] = 848,
  [SMALL_STATE(42)] = 867,
  [SMALL_STATE(43)] = 884,
  [SMALL_STATE(44)] = 901,
  [SMALL_STATE(45)] = 918,
  [SMALL_STATE(46)] = 937,
  [SMALL_STATE(47)] = 956,
  [SMALL_STATE(48)] = 975,
  [SMALL_STATE(49)] = 992,
  [SMALL_STATE(50)] = 1009,
  [SMALL_STATE(51)] = 1023,
  [SMALL_STATE(52)] = 1039,
  [SMALL_STATE(53)] = 1055,
  [SMALL_STATE(54)] = 1069,
  [SMALL_STATE(55)] = 1085,
  [SMALL_STATE(56)] = 1099,
  [SMALL_STATE(57)] = 1113,
  [SMALL_STATE(58)] = 1129,
  [SMALL_STATE(59)] = 1143,
  [SMALL_STATE(60)] = 1157,
  [SMALL_STATE(61)] = 1171,
  [SMALL_STATE(62)] = 1185,
  [SMALL_STATE(63)] = 1199,
  [SMALL_STATE(64)] = 1213,
  [SMALL_STATE(65)] = 1227,
  [SMALL_STATE(66)] = 1241,
  [SMALL_STATE(67)] = 1255,
  [SMALL_STATE(68)] = 1271,
  [SMALL_STATE(69)] = 1287,
  [SMALL_STATE(70)] = 1303,
  [SMALL_STATE(71)] = 1317,
  [SMALL_STATE(72)] = 1331,
  [SMALL_STATE(73)] = 1345,
  [SMALL_STATE(74)] = 1359,
  [SMALL_STATE(75)] = 1375,
  [SMALL_STATE(76)] = 1389,
  [SMALL_STATE(77)] = 1403,
  [SMALL_STATE(78)] = 1419,
  [SMALL_STATE(79)] = 1433,
  [SMALL_STATE(80)] = 1449,
  [SMALL_STATE(81)] = 1465,
  [SMALL_STATE(82)] = 1479,
  [SMALL_STATE(83)] = 1495,
  [SMALL_STATE(84)] = 1509,
  [SMALL_STATE(85)] = 1525,
  [SMALL_STATE(86)] = 1539,
  [SMALL_STATE(87)] = 1553,
  [SMALL_STATE(88)] = 1567,
  [SMALL_STATE(89)] = 1581,
  [SMALL_STATE(90)] = 1591,
  [SMALL_STATE(91)] = 1605,
  [SMALL_STATE(92)] = 1621,
  [SMALL_STATE(93)] = 1635,
  [SMALL_STATE(94)] = 1649,
  [SMALL_STATE(95)] = 1665,
  [SMALL_STATE(96)] = 1681,
  [SMALL_STATE(97)] = 1695,
  [SMALL_STATE(98)] = 1711,
  [SMALL_STATE(99)] = 1725,
  [SMALL_STATE(100)] = 1739,
  [SMALL_STATE(101)] = 1753,
  [SMALL_STATE(102)] = 1763,
  [SMALL_STATE(103)] = 1779,
  [SMALL_STATE(104)] = 1793,
  [SMALL_STATE(105)] = 1807,
  [SMALL_STATE(106)] = 1823,
  [SMALL_STATE(107)] = 1837,
  [SMALL_STATE(108)] = 1851,
  [SMALL_STATE(109)] = 1865,
  [SMALL_STATE(110)] = 1879,
  [SMALL_STATE(111)] = 1895,
  [SMALL_STATE(112)] = 1909,
  [SMALL_STATE(113)] = 1923,
  [SMALL_STATE(114)] = 1937,
  [SMALL_STATE(115)] = 1951,
  [SMALL_STATE(116)] = 1965,
  [SMALL_STATE(117)] = 1979,
  [SMALL_STATE(118)] = 1995,
  [SMALL_STATE(119)] = 2009,
  [SMALL_STATE(120)] = 2023,
  [SMALL_STATE(121)] = 2037,
  [SMALL_STATE(122)] = 2051,
  [SMALL_STATE(123)] = 2065,
  [SMALL_STATE(124)] = 2079,
  [SMALL_STATE(125)] = 2093,
  [SMALL_STATE(126)] = 2107,
  [SMALL_STATE(127)] = 2121,
  [SMALL_STATE(128)] = 2135,
  [SMALL_STATE(129)] = 2146,
  [SMALL_STATE(130)] = 2157,
  [SMALL_STATE(131)] = 2170,
  [SMALL_STATE(132)] = 2183,
  [SMALL_STATE(133)] = 2196,
  [SMALL_STATE(134)] = 2209,
  [SMALL_STATE(135)] = 2218,
  [SMALL_STATE(136)] = 2231,
  [SMALL_STATE(137)] = 2244,
  [SMALL_STATE(138)] = 2257,
  [SMALL_STATE(139)] = 2270,
  [SMALL_STATE(140)] = 2279,
  [SMALL_STATE(141)] = 2290,
  [SMALL_STATE(142)] = 2303,
  [SMALL_STATE(143)] = 2316,
  [SMALL_STATE(144)] = 2329,
  [SMALL_STATE(145)] = 2342,
  [SMALL_STATE(146)] = 2353,
  [SMALL_STATE(147)] = 2366,
  [SMALL_STATE(148)] = 2379,
  [SMALL_STATE(149)] = 2392,
  [SMALL_STATE(150)] = 2405,
  [SMALL_STATE(151)] = 2418,
  [SMALL_STATE(152)] = 2431,
  [SMALL_STATE(153)] = 2444,
  [SMALL_STATE(154)] = 2453,
  [SMALL_STATE(155)] = 2466,
  [SMALL_STATE(156)] = 2475,
  [SMALL_STATE(157)] = 2488,
  [SMALL_STATE(158)] = 2501,
  [SMALL_STATE(159)] = 2514,
  [SMALL_STATE(160)] = 2525,
  [SMALL_STATE(161)] = 2534,
  [SMALL_STATE(162)] = 2545,
  [SMALL_STATE(163)] = 2558,
  [SMALL_STATE(164)] = 2571,
  [SMALL_STATE(165)] = 2584,
  [SMALL_STATE(166)] = 2597,
  [SMALL_STATE(167)] = 2610,
  [SMALL_STATE(168)] = 2623,
  [SMALL_STATE(169)] = 2636,
  [SMALL_STATE(170)] = 2649,
  [SMALL_STATE(171)] = 2662,
  [SMALL_STATE(172)] = 2675,
  [SMALL_STATE(173)] = 2688,
  [SMALL_STATE(174)] = 2701,
  [SMALL_STATE(175)] = 2714,
  [SMALL_STATE(176)] = 2727,
  [SMALL_STATE(177)] = 2738,
  [SMALL_STATE(178)] = 2749,
  [SMALL_STATE(179)] = 2760,
  [SMALL_STATE(180)] = 2771,
  [SMALL_STATE(181)] = 2782,
  [SMALL_STATE(182)] = 2793,
  [SMALL_STATE(183)] = 2804,
  [SMALL_STATE(184)] = 2817,
  [SMALL_STATE(185)] = 2830,
  [SMALL_STATE(186)] = 2841,
  [SMALL_STATE(187)] = 2854,
  [SMALL_STATE(188)] = 2867,
  [SMALL_STATE(189)] = 2880,
  [SMALL_STATE(190)] = 2893,
  [SMALL_STATE(191)] = 2906,
  [SMALL_STATE(192)] = 2919,
  [SMALL_STATE(193)] = 2932,
  [SMALL_STATE(194)] = 2945,
  [SMALL_STATE(195)] = 2958,
  [SMALL_STATE(196)] = 2971,
  [SMALL_STATE(197)] = 2984,
  [SMALL_STATE(198)] = 2994,
  [SMALL_STATE(199)] = 3002,
  [SMALL_STATE(200)] = 3010,
  [SMALL_STATE(201)] = 3018,
  [SMALL_STATE(202)] = 3026,
  [SMALL_STATE(203)] = 3036,
  [SMALL_STATE(204)] = 3044,
  [SMALL_STATE(205)] = 3052,
  [SMALL_STATE(206)] = 3060,
  [SMALL_STATE(207)] = 3068,
  [SMALL_STATE(208)] = 3078,
  [SMALL_STATE(209)] = 3086,
  [SMALL_STATE(210)] = 3094,
  [SMALL_STATE(211)] = 3102,
  [SMALL_STATE(212)] = 3112,
  [SMALL_STATE(213)] = 3120,
  [SMALL_STATE(214)] = 3128,
  [SMALL_STATE(215)] = 3138,
  [SMALL_STATE(216)] = 3146,
  [SMALL_STATE(217)] = 3156,
  [SMALL_STATE(218)] = 3164,
  [SMALL_STATE(219)] = 3172,
  [SMALL_STATE(220)] = 3180,
  [SMALL_STATE(221)] = 3190,
  [SMALL_STATE(222)] = 3198,
  [SMALL_STATE(223)] = 3206,
  [SMALL_STATE(224)] = 3216,
  [SMALL_STATE(225)] = 3224,
  [SMALL_STATE(226)] = 3232,
  [SMALL_STATE(227)] = 3240,
  [SMALL_STATE(228)] = 3248,
  [SMALL_STATE(229)] = 3258,
  [SMALL_STATE(230)] = 3266,
  [SMALL_STATE(231)] = 3274,
  [SMALL_STATE(232)] = 3282,
  [SMALL_STATE(233)] = 3290,
  [SMALL_STATE(234)] = 3298,
  [SMALL_STATE(235)] = 3306,
  [SMALL_STATE(236)] = 3314,
  [SMALL_STATE(237)] = 3322,
  [SMALL_STATE(238)] = 3330,
  [SMALL_STATE(239)] = 3338,
  [SMALL_STATE(240)] = 3346,
  [SMALL_STATE(241)] = 3356,
  [SMALL_STATE(242)] = 3366,
  [SMALL_STATE(243)] = 3376,
  [SMALL_STATE(244)] = 3386,
  [SMALL_STATE(245)] = 3394,
  [SMALL_STATE(246)] = 3402,
  [SMALL_STATE(247)] = 3412,
  [SMALL_STATE(248)] = 3420,
  [SMALL_STATE(249)] = 3430,
  [SMALL_STATE(250)] = 3440,
  [SMALL_STATE(251)] = 3448,
  [SMALL_STATE(252)] = 3455,
  [SMALL_STATE(253)] = 3462,
  [SMALL_STATE(254)] = 3469,
  [SMALL_STATE(255)] = 3476,
  [SMALL_STATE(256)] = 3483,
  [SMALL_STATE(257)] = 3490,
  [SMALL_STATE(258)] = 3497,
  [SMALL_STATE(259)] = 3504,
  [SMALL_STATE(260)] = 3511,
  [SMALL_STATE(261)] = 3518,
  [SMALL_STATE(262)] = 3525,
  [SMALL_STATE(263)] = 3532,
  [SMALL_STATE(264)] = 3539,
  [SMALL_STATE(265)] = 3546,
  [SMALL_STATE(266)] = 3553,
  [SMALL_STATE(267)] = 3560,
  [SMALL_STATE(268)] = 3567,
  [SMALL_STATE(269)] = 3574,
  [SMALL_STATE(270)] = 3581,
  [SMALL_STATE(271)] = 3588,
  [SMALL_STATE(272)] = 3595,
  [SMALL_STATE(273)] = 3602,
  [SMALL_STATE(274)] = 3609,
  [SMALL_STATE(275)] = 3616,
  [SMALL_STATE(276)] = 3623,
  [SMALL_STATE(277)] = 3630,
  [SMALL_STATE(278)] = 3637,
  [SMALL_STATE(279)] = 3644,
  [SMALL_STATE(280)] = 3651,
  [SMALL_STATE(281)] = 3658,
  [SMALL_STATE(282)] = 3665,
  [SMALL_STATE(283)] = 3672,
  [SMALL_STATE(284)] = 3679,
  [SMALL_STATE(285)] = 3686,
  [SMALL_STATE(286)] = 3693,
  [SMALL_STATE(287)] = 3700,
  [SMALL_STATE(288)] = 3707,
  [SMALL_STATE(289)] = 3714,
  [SMALL_STATE(290)] = 3721,
  [SMALL_STATE(291)] = 3728,
  [SMALL_STATE(292)] = 3735,
  [SMALL_STATE(293)] = 3742,
  [SMALL_STATE(294)] = 3749,
  [SMALL_STATE(295)] = 3756,
  [SMALL_STATE(296)] = 3763,
  [SMALL_STATE(297)] = 3770,
  [SMALL_STATE(298)] = 3777,
  [SMALL_STATE(299)] = 3784,
  [SMALL_STATE(300)] = 3791,
  [SMALL_STATE(301)] = 3798,
  [SMALL_STATE(302)] = 3805,
  [SMALL_STATE(303)] = 3812,
  [SMALL_STATE(304)] = 3819,
  [SMALL_STATE(305)] = 3826,
  [SMALL_STATE(306)] = 3833,
  [SMALL_STATE(307)] = 3840,
  [SMALL_STATE(308)] = 3847,
  [SMALL_STATE(309)] = 3854,
  [SMALL_STATE(310)] = 3861,
  [SMALL_STATE(311)] = 3868,
  [SMALL_STATE(312)] = 3875,
  [SMALL_STATE(313)] = 3882,
  [SMALL_STATE(314)] = 3889,
  [SMALL_STATE(315)] = 3896,
  [SMALL_STATE(316)] = 3903,
  [SMALL_STATE(317)] = 3910,
  [SMALL_STATE(318)] = 3917,
  [SMALL_STATE(319)] = 3924,
  [SMALL_STATE(320)] = 3931,
  [SMALL_STATE(321)] = 3938,
  [SMALL_STATE(322)] = 3945,
  [SMALL_STATE(323)] = 3952,
  [SMALL_STATE(324)] = 3959,
  [SMALL_STATE(325)] = 3966,
  [SMALL_STATE(326)] = 3973,
  [SMALL_STATE(327)] = 3980,
  [SMALL_STATE(328)] = 3987,
  [SMALL_STATE(329)] = 3994,
  [SMALL_STATE(330)] = 4001,
  [SMALL_STATE(331)] = 4008,
  [SMALL_STATE(332)] = 4015,
  [SMALL_STATE(333)] = 4022,
  [SMALL_STATE(334)] = 4029,
  [SMALL_STATE(335)] = 4036,
  [SMALL_STATE(336)] = 4043,
  [SMALL_STATE(337)] = 4050,
  [SMALL_STATE(338)] = 4057,
  [SMALL_STATE(339)] = 4064,
  [SMALL_STATE(340)] = 4071,
  [SMALL_STATE(341)] = 4078,
  [SMALL_STATE(342)] = 4085,
  [SMALL_STATE(343)] = 4092,
  [SMALL_STATE(344)] = 4099,
  [SMALL_STATE(345)] = 4106,
  [SMALL_STATE(346)] = 4113,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 9, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 10, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat4, 2, 0, 0), SHIFT_REPEAT(190),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat4, 2, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_eo_command_repeat4, 2, 0, 0), SHIFT_REPEAT(176),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat3, 2, 0, 0), SHIFT_REPEAT(190),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat3, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_eo_command_repeat3, 2, 0, 0), SHIFT_REPEAT(176),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_smtlib2_command_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_smtlib2_command_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_smtlib2_command_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assumption, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reqs_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reqs_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reqs_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat2, 2, 0, 0),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat2, 2, 0, 0), SHIFT_REPEAT(48),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_dec_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_dec_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_command_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_common_command_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_premises, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cons_dec_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cons_dec_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_command_repeat2, 2, 0, 0), SHIFT_REPEAT(145),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_common_command_repeat2, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_premises, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat1, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 5, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_premises, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_smtlib2_command_repeat2, 2, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_smtlib2_command_repeat2, 2, 0, 0), SHIFT_REPEAT(143),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_premises, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexpr, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexpr, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reqs_repeat1, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat5, 2, 0, 0), SHIFT_REPEAT(166),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat5, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 4, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 9, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 10, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons_dec, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_dec, 4, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smtlib2_command, 4, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_param, 4, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 8, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 5, 0, 0),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_common_command, 6, 0, 0), REDUCE(sym_smtlib2_command, 6, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons_dec, 4, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smtlib2_command, 8, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_param, 5, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 9, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_dec, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_common_command, 9, 0, 0), REDUCE(sym_smtlib2_command, 9, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smtlib2_command, 9, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 10, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smtlib2_command, 6, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sel_dec, 4, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 11, 0, 0),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_common_command, 5, 0, 0), REDUCE(sym_smtlib2_command, 5, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 12, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smtlib2_command, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eo_command_repeat5, 4, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 13, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 14, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 4, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 7, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smtlib2_command, 5, 0, 0),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_common_command, 3, 0, 0), REDUCE(sym_smtlib2_command, 3, 0, 0),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_common_command, 4, 0, 0), REDUCE(sym_smtlib2_command, 4, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eo_command, 6, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smtlib2_command, 7, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [521] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reqs, 3, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reqs, 4, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_eunoia(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
