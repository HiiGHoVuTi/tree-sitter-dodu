#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 2
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

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
  sym_train = 25,
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
  [sym_train] = "train",
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
  [sym_train] = sym_train,
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
  [sym_train] = {
    .visible = true,
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__term, 2,
    sym__term,
    alias_sym_function,
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= ' ' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= '.' || (c < '['
      ? (c < ';'
        ? (c >= '0' && c <= '9')
        : c <= ';')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_literal_token1_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '('
      ? (c < ' '
        ? (c >= '\t' && c <= '\n')
        : c <= ' ')
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= '.')))
    : (c <= '9' || (c < '{'
      ? (c < '['
        ? c == ';'
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ',' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(8);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '@') ADVANCE(22);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(11);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(5);
      if (aux_sym_literal_token1_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AT);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
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
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
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
    [sym_source_file] = STATE(71),
    [sym__declaration] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
  [2] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(52),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(52),
    [sym__letbinding] = STATE(52),
    [sym__composition] = STATE(52),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [3] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(62),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(62),
    [sym__letbinding] = STATE(62),
    [sym__composition] = STATE(62),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(24),
    [aux_sym_literal_token1] = ACTIONS(27),
    [aux_sym_literal_token2] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(30),
    [anon_sym_AT] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(39),
  },
  [4] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(48),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(48),
    [sym__letbinding] = STATE(48),
    [sym__composition] = STATE(48),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [5] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(51),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(51),
    [sym__letbinding] = STATE(51),
    [sym__composition] = STATE(51),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [6] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(47),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(47),
    [sym__letbinding] = STATE(47),
    [sym__composition] = STATE(47),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [7] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(40),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(40),
    [sym__letbinding] = STATE(40),
    [sym__composition] = STATE(40),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [8] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(41),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(41),
    [sym__letbinding] = STATE(41),
    [sym__composition] = STATE(41),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [9] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(43),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(43),
    [sym__letbinding] = STATE(43),
    [sym__composition] = STATE(43),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [10] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(38),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(38),
    [sym__letbinding] = STATE(38),
    [sym__composition] = STATE(38),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [11] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(59),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(59),
    [sym__letbinding] = STATE(59),
    [sym__composition] = STATE(59),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [12] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(66),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(66),
    [sym__letbinding] = STATE(66),
    [sym__composition] = STATE(66),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [13] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(37),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(37),
    [sym__letbinding] = STATE(37),
    [sym__composition] = STATE(37),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [14] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(61),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(61),
    [sym__letbinding] = STATE(61),
    [sym__composition] = STATE(61),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [15] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym__expression] = STATE(68),
    [sym__application] = STATE(33),
    [sym__abstraction] = STATE(68),
    [sym__letbinding] = STATE(68),
    [sym__composition] = STATE(68),
    [sym_train] = STATE(20),
    [sym__term] = STATE(18),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [16] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym_train] = STATE(20),
    [sym__term] = STATE(16),
    [aux_sym__application_repeat1] = STATE(16),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [aux_sym_literal_token1] = ACTIONS(50),
    [aux_sym_literal_token2] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(56),
  },
  [17] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym_train] = STATE(20),
    [sym__term] = STATE(16),
    [aux_sym__application_repeat1] = STATE(16),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [18] = {
    [sym_list] = STATE(22),
    [sym_literal] = STATE(20),
    [sym_train] = STATE(20),
    [sym__term] = STATE(17),
    [aux_sym__application_repeat1] = STATE(17),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(63), 12,
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
      anon_sym_RBRACE,
  [15] = 1,
    ACTIONS(65), 12,
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
      anon_sym_RBRACE,
  [30] = 1,
    ACTIONS(67), 12,
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
      anon_sym_RBRACE,
  [45] = 1,
    ACTIONS(69), 12,
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
      anon_sym_RBRACE,
  [60] = 1,
    ACTIONS(71), 12,
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
      anon_sym_RBRACE,
  [75] = 1,
    ACTIONS(73), 12,
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
      anon_sym_RBRACE,
  [90] = 1,
    ACTIONS(75), 12,
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
      anon_sym_RBRACE,
  [105] = 9,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym__term,
    STATE(63), 1,
      sym_list,
    ACTIONS(81), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(65), 2,
      sym_literal,
      sym_train,
  [135] = 9,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_list,
    STATE(64), 1,
      sym__term,
    ACTIONS(81), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(65), 2,
      sym_literal,
      sym_train,
  [165] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_list,
    STATE(31), 1,
      sym__term,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(20), 2,
      sym_literal,
      sym_train,
  [192] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_list,
    STATE(30), 1,
      sym__term,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(20), 2,
      sym_literal,
      sym_train,
  [219] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_list,
    STATE(26), 1,
      sym__term,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(20), 2,
      sym_literal,
      sym_train,
  [246] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_list,
    STATE(27), 1,
      sym__term,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(20), 2,
      sym_literal,
      sym_train,
  [273] = 1,
    ACTIONS(91), 8,
      sym_identifier,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [284] = 2,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(93), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [294] = 3,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [305] = 3,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(35), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [316] = 3,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [327] = 1,
    ACTIONS(111), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [334] = 1,
    ACTIONS(113), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [341] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(35), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [352] = 1,
    ACTIONS(117), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [359] = 1,
    ACTIONS(119), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [366] = 3,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(36), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [377] = 1,
    ACTIONS(123), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [384] = 3,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym__abstraction_repeat1,
  [394] = 3,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym__abstraction_repeat1,
  [404] = 3,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym__abstraction_repeat1,
  [414] = 2,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
  [421] = 2,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
  [428] = 2,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_DOT,
  [435] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [440] = 2,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
  [447] = 2,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
  [454] = 2,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
  [461] = 1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
  [465] = 1,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
  [469] = 1,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
  [473] = 1,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
  [477] = 1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
  [481] = 1,
    ACTIONS(164), 1,
      anon_sym_DOT,
  [485] = 1,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
  [489] = 1,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
  [493] = 1,
    ACTIONS(136), 1,
      anon_sym_SEMI,
  [497] = 1,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
  [501] = 1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
  [505] = 1,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
  [509] = 1,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
  [513] = 1,
    ACTIONS(178), 1,
      anon_sym_LT_DASH,
  [517] = 1,
    ACTIONS(180), 1,
      anon_sym_DOT,
  [521] = 1,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
  [525] = 1,
    ACTIONS(184), 1,
      anon_sym_LT_DASH,
  [529] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 15,
  [SMALL_STATE(21)] = 30,
  [SMALL_STATE(22)] = 45,
  [SMALL_STATE(23)] = 60,
  [SMALL_STATE(24)] = 75,
  [SMALL_STATE(25)] = 90,
  [SMALL_STATE(26)] = 105,
  [SMALL_STATE(27)] = 135,
  [SMALL_STATE(28)] = 165,
  [SMALL_STATE(29)] = 192,
  [SMALL_STATE(30)] = 219,
  [SMALL_STATE(31)] = 246,
  [SMALL_STATE(32)] = 273,
  [SMALL_STATE(33)] = 284,
  [SMALL_STATE(34)] = 294,
  [SMALL_STATE(35)] = 305,
  [SMALL_STATE(36)] = 316,
  [SMALL_STATE(37)] = 327,
  [SMALL_STATE(38)] = 334,
  [SMALL_STATE(39)] = 341,
  [SMALL_STATE(40)] = 352,
  [SMALL_STATE(41)] = 359,
  [SMALL_STATE(42)] = 366,
  [SMALL_STATE(43)] = 377,
  [SMALL_STATE(44)] = 384,
  [SMALL_STATE(45)] = 394,
  [SMALL_STATE(46)] = 404,
  [SMALL_STATE(47)] = 414,
  [SMALL_STATE(48)] = 421,
  [SMALL_STATE(49)] = 428,
  [SMALL_STATE(50)] = 435,
  [SMALL_STATE(51)] = 440,
  [SMALL_STATE(52)] = 447,
  [SMALL_STATE(53)] = 454,
  [SMALL_STATE(54)] = 461,
  [SMALL_STATE(55)] = 465,
  [SMALL_STATE(56)] = 469,
  [SMALL_STATE(57)] = 473,
  [SMALL_STATE(58)] = 477,
  [SMALL_STATE(59)] = 481,
  [SMALL_STATE(60)] = 485,
  [SMALL_STATE(61)] = 489,
  [SMALL_STATE(62)] = 493,
  [SMALL_STATE(63)] = 497,
  [SMALL_STATE(64)] = 501,
  [SMALL_STATE(65)] = 505,
  [SMALL_STATE(66)] = 509,
  [SMALL_STATE(67)] = 513,
  [SMALL_STATE(68)] = 517,
  [SMALL_STATE(69)] = 521,
  [SMALL_STATE(70)] = 525,
  [SMALL_STATE(71)] = 529,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(22),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(45),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(69),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(20),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(22),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(12),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(29),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__application, 2, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__application, 1, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_train, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_train, 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstraction, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__composition, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstraction, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__letbinding, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__letbinding, 5),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__abstraction_repeat1, 2), SHIFT_REPEAT(49),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__abstraction_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__abstraction_repeat1, 1, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__abstraction_repeat1, 1, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 4, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 4, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_train, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_train, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
