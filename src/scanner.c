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
  while (iswspace(lexer->lookahead)) {
    skip(lexer);
  }

  for (bool has_content = false;; has_content = true) {
    lexer->mark_end(lexer);

    for (;;) {
      switch (lexer->lookahead) {
        case '{':
        case ':':
        case ';':
        case '<':
        case '\n':
        case '\0':
          return has_content;
      }

      if (iswspace(lexer->lookahead)) {
        advance(lexer);
      } else {
        break;
      }
    }

    switch (lexer->lookahead) {
      case '-':
        advance(lexer);
        switch (lexer->lookahead) {
          case '-':
          case '>':
            return has_content;
        }
        break;
      default:
        advance(lexer);
    }
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


