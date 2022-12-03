#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  IDENTIFIER
};

void *tree_sitter_d2_external_scanner_create() { return NULL; }
void tree_sitter_d2_external_scanner_destroy(void *payload) { }
unsigned tree_sitter_d2_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_d2_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_identifier(TSLexer *lexer) {
  lexer->result_symbol = IDENTIFIER;
  for (bool has_content = false;; has_content = true) {
    lexer->mark_end(lexer);

    while (iswspace(lexer->lookahead)) {
      skip(lexer);
    }

    int32_t next = lexer->lookahead;

    if (next == '{' || next == ':' || next == ';' || next == '\n' || next == 0) {
      return has_content;
    }

    // arrows
    if (next == '-') {
      advance(lexer);
      int32_t next_2 = lexer->lookahead;
      if (next_2 == '-' || next_2 == '>') {
        return has_content;
      }
    } else if (next == '<') {
      return has_content;
    }

    advance(lexer);
  }
}

bool tree_sitter_d2_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (valid_symbols[IDENTIFIER]) {
    return scan_identifier(lexer);
  }

  return false;
}


