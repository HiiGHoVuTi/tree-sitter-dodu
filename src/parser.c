#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 2
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  sym_identifier = 1,
  anon_sym_LT_DASH = 2,
  anon_sym_DOT = 3,
  anon_sym_LBRACK = 4,
  anon_sym_SEMI = 5,
  anon_sym_RBRACK = 6,
  aux_sym_literal_token1 = 7,
  aux_sym_literal_token2 = 8,
  anon_sym_BSLASH = 9,
  anon_sym_AT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym_source_file = 16,
  sym__declaration = 17,
  sym_list = 18,
  sym_literal = 19,
  sym__expression = 20,
  sym__application = 21,
  sym__abstraction = 22,
  sym__letbinding = 23,
  sym__composition = 24,
  sym__train = 25,
  sym__term = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_list_repeat1 = 28,
  aux_sym__application_repeat1 = 29,
  aux_sym__abstraction_repeat1 = 30,
  alias_sym_function = 31,
  alias_sym_name = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACK] = "]",
  [aux_sym_literal_token1] = "string",
  [aux_sym_literal_token2] = "number",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_list] = "list",
  [sym_literal] = "literal",
  [sym__expression] = "_expression",
  [sym__application] = "_application",
  [sym__abstraction] = "_abstraction",
  [sym__letbinding] = "_letbinding",
  [sym__composition] = "_composition",
  [sym__train] = "_train",
  [sym__term] = "_term",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym__application_repeat1] = "_application_repeat1",
  [aux_sym__abstraction_repeat1] = "_abstraction_repeat1",
  [alias_sym_function] = "function",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_list] = sym_list,
  [sym_literal] = sym_literal,
  [sym__expression] = sym__expression,
  [sym__application] = sym__application,
  [sym__abstraction] = sym__abstraction,
  [sym__letbinding] = sym__letbinding,
  [sym__composition] = sym__composition,
  [sym__train] = sym__train,
  [sym__term] = sym__term,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym__application_repeat1] = aux_sym__application_repeat1,
  [aux_sym__abstraction_repeat1] = aux_sym__abstraction_repeat1,
  [alias_sym_function] = alias_sym_function,
  [alias_sym_name] = alias_sym_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_literal_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__application] = {
    .visible = false,
    .named = true,
  },
  [sym__abstraction] = {
    .visible = false,
    .named = true,
  },
  [sym__letbinding] = {
    .visible = false,
    .named = true,
  },
  [sym__composition] = {
    .visible = false,
    .named = true,
  },
  [sym__train] = {
    .visible = false,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__application_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__abstraction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_function,
  },
  [2] = {
    [0] = alias_sym_name,
  },
  [3] = {
    [1] = alias_sym_function,
  },
  [4] = {
    [2] = alias_sym_function,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__term, 2,
    sym__term,
    alias_sym_function,
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= ' ' || (c >= '(' && c <= ')')))
    : (c <= ',' || (c < ';'
      ? (c < '0'
        ? c == '.'
        : c <= '9')
      : (c <= ';' || (c >= '[' && c <= ']')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ',' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(14);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(9);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '{') ADVANCE(29);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '{') ADVANCE(29);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(31);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(4);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_AT);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [aux_sym_literal_token2] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(88),
    [sym__declaration] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
  [2] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(77),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(77),
    [sym__letbinding] = STATE(77),
    [sym__composition] = STATE(77),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(10),
    [aux_sym_literal_token1] = ACTIONS(13),
    [aux_sym_literal_token2] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_LBRACE] = ACTIONS(25),
  },
  [3] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(60),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(60),
    [sym__letbinding] = STATE(60),
    [sym__composition] = STATE(60),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [4] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(68),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(68),
    [sym__letbinding] = STATE(68),
    [sym__composition] = STATE(68),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [aux_sym_list_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [5] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(61),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(61),
    [sym__letbinding] = STATE(61),
    [sym__composition] = STATE(61),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [6] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(67),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(67),
    [sym__letbinding] = STATE(67),
    [sym__composition] = STATE(67),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [7] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(64),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(64),
    [sym__letbinding] = STATE(64),
    [sym__composition] = STATE(64),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [8] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(62),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(62),
    [sym__letbinding] = STATE(62),
    [sym__composition] = STATE(62),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [9] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(84),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(84),
    [sym__letbinding] = STATE(84),
    [sym__composition] = STATE(84),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [10] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(70),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(70),
    [sym__letbinding] = STATE(70),
    [sym__composition] = STATE(70),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [11] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(52),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(52),
    [sym__letbinding] = STATE(52),
    [sym__composition] = STATE(52),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [12] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(81),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(81),
    [sym__letbinding] = STATE(81),
    [sym__composition] = STATE(81),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [13] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(75),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(75),
    [sym__letbinding] = STATE(75),
    [sym__composition] = STATE(75),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [14] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(47),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(47),
    [sym__letbinding] = STATE(47),
    [sym__composition] = STATE(47),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [15] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(50),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(50),
    [sym__letbinding] = STATE(50),
    [sym__composition] = STATE(50),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [16] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(48),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(48),
    [sym__letbinding] = STATE(48),
    [sym__composition] = STATE(48),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [17] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(69),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(69),
    [sym__letbinding] = STATE(69),
    [sym__composition] = STATE(69),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [18] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__expression] = STATE(51),
    [sym__application] = STATE(46),
    [sym__abstraction] = STATE(51),
    [sym__letbinding] = STATE(51),
    [sym__composition] = STATE(51),
    [sym__train] = STATE(30),
    [sym__term] = STATE(20),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [19] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__train] = STATE(30),
    [sym__term] = STATE(21),
    [aux_sym__application_repeat1] = STATE(21),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_DOT] = ACTIONS(42),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(42),
    [anon_sym_RBRACK] = ACTIONS(42),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [20] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__train] = STATE(30),
    [sym__term] = STATE(19),
    [aux_sym__application_repeat1] = STATE(19),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(44),
    [anon_sym_RBRACK] = ACTIONS(44),
    [aux_sym_literal_token1] = ACTIONS(32),
    [aux_sym_literal_token2] = ACTIONS(32),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(40),
  },
  [21] = {
    [sym_list] = STATE(31),
    [sym_literal] = STATE(30),
    [sym__train] = STATE(30),
    [sym__term] = STATE(21),
    [aux_sym__application_repeat1] = STATE(21),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [aux_sym_literal_token1] = ACTIONS(54),
    [aux_sym_literal_token2] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(60),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym__term,
    STATE(87), 1,
      sym_list,
    ACTIONS(67), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(78), 2,
      sym_literal,
      sym__train,
  [30] = 1,
    ACTIONS(75), 11,
      sym_identifier,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [44] = 1,
    ACTIONS(77), 11,
      sym_identifier,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [58] = 1,
    ACTIONS(79), 11,
      sym_identifier,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [72] = 9,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym__term,
    STATE(87), 1,
      sym_list,
    ACTIONS(67), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(78), 2,
      sym_literal,
      sym__train,
  [102] = 9,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym__term,
    STATE(87), 1,
      sym_list,
    ACTIONS(67), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(78), 2,
      sym_literal,
      sym__train,
  [132] = 1,
    ACTIONS(85), 11,
      sym_identifier,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [146] = 1,
    ACTIONS(87), 11,
      sym_identifier,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [160] = 1,
    ACTIONS(89), 11,
      sym_identifier,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [174] = 1,
    ACTIONS(91), 11,
      sym_identifier,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [188] = 8,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym__term,
    STATE(45), 1,
      sym_list,
    ACTIONS(97), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(44), 2,
      sym_literal,
      sym__train,
  [215] = 8,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_list,
    STATE(37), 1,
      sym__term,
    ACTIONS(32), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(30), 2,
      sym_literal,
      sym__train,
  [242] = 8,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym__term,
    STATE(45), 1,
      sym_list,
    ACTIONS(97), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(44), 2,
      sym_literal,
      sym__train,
  [269] = 8,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_list,
    STATE(34), 1,
      sym__term,
    ACTIONS(32), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(30), 2,
      sym_literal,
      sym__train,
  [296] = 8,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_list,
    STATE(32), 1,
      sym__term,
    ACTIONS(32), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(30), 2,
      sym_literal,
      sym__train,
  [323] = 8,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym__term,
    STATE(45), 1,
      sym_list,
    ACTIONS(97), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(44), 2,
      sym_literal,
      sym__train,
  [350] = 1,
    ACTIONS(103), 8,
      sym_identifier,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [361] = 1,
    ACTIONS(77), 7,
      sym_identifier,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [371] = 1,
    ACTIONS(79), 7,
      sym_identifier,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [381] = 1,
    ACTIONS(75), 7,
      sym_identifier,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [391] = 1,
    ACTIONS(85), 7,
      sym_identifier,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [401] = 1,
    ACTIONS(87), 7,
      sym_identifier,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [411] = 1,
    ACTIONS(89), 7,
      sym_identifier,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [421] = 1,
    ACTIONS(91), 7,
      sym_identifier,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [431] = 2,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(105), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [441] = 1,
    ACTIONS(109), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [448] = 1,
    ACTIONS(111), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [455] = 3,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(49), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [466] = 1,
    ACTIONS(118), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [473] = 1,
    ACTIONS(120), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [480] = 1,
    ACTIONS(122), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [487] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [498] = 3,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(55), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [509] = 3,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(49), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [520] = 3,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(56), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [531] = 3,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym__abstraction_repeat1,
  [541] = 3,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym__abstraction_repeat1,
  [551] = 3,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym__abstraction_repeat1,
  [561] = 2,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
  [568] = 2,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
  [575] = 2,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
  [582] = 2,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_DOT,
  [589] = 2,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
  [596] = 1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [601] = 2,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
  [608] = 2,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
  [615] = 2,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
  [622] = 1,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
  [626] = 1,
    ACTIONS(172), 1,
      anon_sym_DOT,
  [630] = 1,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
  [634] = 1,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
  [638] = 1,
    ACTIONS(178), 1,
      anon_sym_LT_DASH,
  [642] = 1,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
  [646] = 1,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
  [650] = 1,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
  [654] = 1,
    ACTIONS(148), 1,
      anon_sym_SEMI,
  [658] = 1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
  [662] = 1,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
  [666] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
  [670] = 1,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
  [674] = 1,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
  [678] = 1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
  [682] = 1,
    ACTIONS(198), 1,
      anon_sym_DOT,
  [686] = 1,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
  [690] = 1,
    ACTIONS(202), 1,
      anon_sym_LT_DASH,
  [694] = 1,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
  [698] = 1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 30,
  [SMALL_STATE(24)] = 44,
  [SMALL_STATE(25)] = 58,
  [SMALL_STATE(26)] = 72,
  [SMALL_STATE(27)] = 102,
  [SMALL_STATE(28)] = 132,
  [SMALL_STATE(29)] = 146,
  [SMALL_STATE(30)] = 160,
  [SMALL_STATE(31)] = 174,
  [SMALL_STATE(32)] = 188,
  [SMALL_STATE(33)] = 215,
  [SMALL_STATE(34)] = 242,
  [SMALL_STATE(35)] = 269,
  [SMALL_STATE(36)] = 296,
  [SMALL_STATE(37)] = 323,
  [SMALL_STATE(38)] = 350,
  [SMALL_STATE(39)] = 361,
  [SMALL_STATE(40)] = 371,
  [SMALL_STATE(41)] = 381,
  [SMALL_STATE(42)] = 391,
  [SMALL_STATE(43)] = 401,
  [SMALL_STATE(44)] = 411,
  [SMALL_STATE(45)] = 421,
  [SMALL_STATE(46)] = 431,
  [SMALL_STATE(47)] = 441,
  [SMALL_STATE(48)] = 448,
  [SMALL_STATE(49)] = 455,
  [SMALL_STATE(50)] = 466,
  [SMALL_STATE(51)] = 473,
  [SMALL_STATE(52)] = 480,
  [SMALL_STATE(53)] = 487,
  [SMALL_STATE(54)] = 498,
  [SMALL_STATE(55)] = 509,
  [SMALL_STATE(56)] = 520,
  [SMALL_STATE(57)] = 531,
  [SMALL_STATE(58)] = 541,
  [SMALL_STATE(59)] = 551,
  [SMALL_STATE(60)] = 561,
  [SMALL_STATE(61)] = 568,
  [SMALL_STATE(62)] = 575,
  [SMALL_STATE(63)] = 582,
  [SMALL_STATE(64)] = 589,
  [SMALL_STATE(65)] = 596,
  [SMALL_STATE(66)] = 601,
  [SMALL_STATE(67)] = 608,
  [SMALL_STATE(68)] = 615,
  [SMALL_STATE(69)] = 622,
  [SMALL_STATE(70)] = 626,
  [SMALL_STATE(71)] = 630,
  [SMALL_STATE(72)] = 634,
  [SMALL_STATE(73)] = 638,
  [SMALL_STATE(74)] = 642,
  [SMALL_STATE(75)] = 646,
  [SMALL_STATE(76)] = 650,
  [SMALL_STATE(77)] = 654,
  [SMALL_STATE(78)] = 658,
  [SMALL_STATE(79)] = 662,
  [SMALL_STATE(80)] = 666,
  [SMALL_STATE(81)] = 670,
  [SMALL_STATE(82)] = 674,
  [SMALL_STATE(83)] = 678,
  [SMALL_STATE(84)] = 682,
  [SMALL_STATE(85)] = 686,
  [SMALL_STATE(86)] = 690,
  [SMALL_STATE(87)] = 694,
  [SMALL_STATE(88)] = 698,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(30),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(31),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(59),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(85),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(33),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__application, 2, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__application, 1, .production_id = 1),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(8),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(31),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(12),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(33),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__train, 5, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__train, 4, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__composition, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__letbinding, 4),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__letbinding, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstraction, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstraction, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__abstraction_repeat1, 2), SHIFT_REPEAT(63),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__abstraction_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__abstraction_repeat1, 1, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__abstraction_repeat1, 1, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 4, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 4, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__train, 4, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__train, 5, .production_id = 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [206] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dodu(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
