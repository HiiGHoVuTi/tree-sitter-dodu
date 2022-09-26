#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 2
#define TOKEN_COUNT 14
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
  sym_source_file = 14,
  sym__declaration = 15,
  sym_list = 16,
  sym_literal = 17,
  sym__expression = 18,
  sym__application = 19,
  sym__abstraction = 20,
  sym__letbinding = 21,
  sym__composition = 22,
  sym__term = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_list_repeat1 = 25,
  aux_sym__application_repeat1 = 26,
  aux_sym__abstraction_repeat1 = 27,
  alias_sym_function = 28,
  alias_sym_name = 29,
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
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_list] = "list",
  [sym_literal] = "literal",
  [sym__expression] = "_expression",
  [sym__application] = "_application",
  [sym__abstraction] = "_abstraction",
  [sym__letbinding] = "_letbinding",
  [sym__composition] = "_composition",
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
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_list] = sym_list,
  [sym_literal] = sym_literal,
  [sym__expression] = sym__expression,
  [sym__application] = sym__application,
  [sym__abstraction] = sym__abstraction,
  [sym__letbinding] = sym__letbinding,
  [sym__composition] = sym__composition,
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(12);
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
          (lookahead < '[' || ']' < lookahead)) ADVANCE(12);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(3);
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
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__declaration] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
  [2] = {
    [sym_list] = STATE(17),
    [sym_literal] = STATE(16),
    [sym__expression] = STATE(37),
    [sym__application] = STATE(22),
    [sym__abstraction] = STATE(37),
    [sym__letbinding] = STATE(37),
    [sym__composition] = STATE(37),
    [sym__term] = STATE(13),
    [aux_sym_list_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [3] = {
    [sym_list] = STATE(17),
    [sym_literal] = STATE(16),
    [sym__expression] = STATE(43),
    [sym__application] = STATE(22),
    [sym__abstraction] = STATE(43),
    [sym__letbinding] = STATE(43),
    [sym__composition] = STATE(43),
    [sym__term] = STATE(13),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(22),
    [aux_sym_literal_token1] = ACTIONS(25),
    [aux_sym_literal_token2] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(28),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(34),
  },
  [4] = {
    [sym_list] = STATE(17),
    [sym_literal] = STATE(16),
    [sym__expression] = STATE(36),
    [sym__application] = STATE(22),
    [sym__abstraction] = STATE(36),
    [sym__letbinding] = STATE(36),
    [sym__composition] = STATE(36),
    [sym__term] = STATE(13),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [5] = {
    [sym_list] = STATE(17),
    [sym_literal] = STATE(16),
    [sym__expression] = STATE(46),
    [sym__application] = STATE(22),
    [sym__abstraction] = STATE(46),
    [sym__letbinding] = STATE(46),
    [sym__composition] = STATE(46),
    [sym__term] = STATE(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [6] = {
    [sym_list] = STATE(17),
    [sym_literal] = STATE(16),
    [sym__expression] = STATE(25),
    [sym__application] = STATE(22),
    [sym__abstraction] = STATE(25),
    [sym__letbinding] = STATE(25),
    [sym__composition] = STATE(25),
    [sym__term] = STATE(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [7] = {
    [sym_list] = STATE(17),
    [sym_literal] = STATE(16),
    [sym__expression] = STATE(44),
    [sym__application] = STATE(22),
    [sym__abstraction] = STATE(44),
    [sym__letbinding] = STATE(44),
    [sym__composition] = STATE(44),
    [sym__term] = STATE(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [8] = {
    [sym_list] = STATE(17),
    [sym_literal] = STATE(16),
    [sym__expression] = STATE(27),
    [sym__application] = STATE(22),
    [sym__abstraction] = STATE(27),
    [sym__letbinding] = STATE(27),
    [sym__composition] = STATE(27),
    [sym__term] = STATE(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [9] = {
    [sym_list] = STATE(17),
    [sym_literal] = STATE(16),
    [sym__expression] = STATE(42),
    [sym__application] = STATE(22),
    [sym__abstraction] = STATE(42),
    [sym__letbinding] = STATE(42),
    [sym__composition] = STATE(42),
    [sym__term] = STATE(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [10] = {
    [sym_list] = STATE(17),
    [sym_literal] = STATE(16),
    [sym__expression] = STATE(28),
    [sym__application] = STATE(22),
    [sym__abstraction] = STATE(28),
    [sym__letbinding] = STATE(28),
    [sym__composition] = STATE(28),
    [sym__term] = STATE(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
  [11] = {
    [sym_list] = STATE(17),
    [sym_literal] = STATE(16),
    [sym__expression] = STATE(29),
    [sym__application] = STATE(22),
    [sym__abstraction] = STATE(29),
    [sym__letbinding] = STATE(29),
    [sym__composition] = STATE(29),
    [sym__term] = STATE(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(11),
    [aux_sym_literal_token2] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_literal,
    STATE(17), 1,
      sym_list,
    ACTIONS(45), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(12), 2,
      sym__term,
      aux_sym__application_repeat1,
    ACTIONS(40), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [31] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_literal,
    STATE(17), 1,
      sym_list,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(14), 2,
      sym__term,
      aux_sym__application_repeat1,
    ACTIONS(51), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [62] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_literal,
    STATE(17), 1,
      sym_list,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    STATE(12), 2,
      sym__term,
      aux_sym__application_repeat1,
    ACTIONS(53), 5,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [93] = 1,
    ACTIONS(55), 10,
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
  [106] = 1,
    ACTIONS(57), 10,
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
  [119] = 1,
    ACTIONS(59), 10,
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
  [132] = 1,
    ACTIONS(61), 10,
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
  [145] = 1,
    ACTIONS(63), 10,
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
  [158] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__term,
    STATE(16), 1,
      sym_literal,
    STATE(17), 1,
      sym_list,
    STATE(32), 1,
      sym__application,
    ACTIONS(11), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
  [184] = 1,
    ACTIONS(65), 7,
      sym_identifier,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_LPAREN,
  [194] = 2,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(67), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [204] = 3,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(31), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [215] = 3,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [226] = 1,
    ACTIONS(80), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [233] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [244] = 1,
    ACTIONS(84), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [251] = 1,
    ACTIONS(86), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [258] = 1,
    ACTIONS(88), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [265] = 3,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(30), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [276] = 3,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
  [287] = 1,
    ACTIONS(97), 4,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [294] = 3,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym__abstraction_repeat1,
  [304] = 3,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym__abstraction_repeat1,
  [314] = 3,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym__abstraction_repeat1,
  [324] = 2,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
  [331] = 2,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
  [338] = 2,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_DOT,
  [345] = 1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [350] = 2,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
  [357] = 1,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
  [361] = 1,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
  [365] = 1,
    ACTIONS(110), 1,
      anon_sym_SEMI,
  [369] = 1,
    ACTIONS(128), 1,
      anon_sym_DOT,
  [373] = 1,
    ACTIONS(130), 1,
      anon_sym_LT_DASH,
  [377] = 1,
    ACTIONS(132), 1,
      anon_sym_DOT,
  [381] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [385] = 1,
    ACTIONS(136), 1,
      anon_sym_LT_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 31,
  [SMALL_STATE(14)] = 62,
  [SMALL_STATE(15)] = 93,
  [SMALL_STATE(16)] = 106,
  [SMALL_STATE(17)] = 119,
  [SMALL_STATE(18)] = 132,
  [SMALL_STATE(19)] = 145,
  [SMALL_STATE(20)] = 158,
  [SMALL_STATE(21)] = 184,
  [SMALL_STATE(22)] = 194,
  [SMALL_STATE(23)] = 204,
  [SMALL_STATE(24)] = 215,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 233,
  [SMALL_STATE(27)] = 244,
  [SMALL_STATE(28)] = 251,
  [SMALL_STATE(29)] = 258,
  [SMALL_STATE(30)] = 265,
  [SMALL_STATE(31)] = 276,
  [SMALL_STATE(32)] = 287,
  [SMALL_STATE(33)] = 294,
  [SMALL_STATE(34)] = 304,
  [SMALL_STATE(35)] = 314,
  [SMALL_STATE(36)] = 324,
  [SMALL_STATE(37)] = 331,
  [SMALL_STATE(38)] = 338,
  [SMALL_STATE(39)] = 345,
  [SMALL_STATE(40)] = 350,
  [SMALL_STATE(41)] = 357,
  [SMALL_STATE(42)] = 361,
  [SMALL_STATE(43)] = 365,
  [SMALL_STATE(44)] = 369,
  [SMALL_STATE(45)] = 373,
  [SMALL_STATE(46)] = 377,
  [SMALL_STATE(47)] = 381,
  [SMALL_STATE(48)] = 385,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(33),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(41),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(16),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(17),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(9),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__application, 1, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__application, 2, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__letbinding, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__letbinding, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstraction, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstraction, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__composition, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__abstraction_repeat1, 2), SHIFT_REPEAT(38),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__abstraction_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__abstraction_repeat1, 1, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__abstraction_repeat1, 1, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 4, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 4, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
