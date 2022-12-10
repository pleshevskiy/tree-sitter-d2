#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  RAW_TEXT
};

void *tree_sitter_d2_external_scanner_create() { return NULL; }
void tree_sitter_d2_external_scanner_destroy(void *payload) { }
unsigned tree_sitter_d2_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_d2_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_raw_text(TSLexer *lexer) {
  lexer->result_symbol = RAW_TEXT;

  if (lexer->lookahead == '`') {
    advance(lexer);
  }

  if (lexer->lookahead == '|') {
    return false;
  }

  for (bool has_content = false;; has_content = true) {
    lexer->mark_end(lexer);

    if (lexer->lookahead == '\0') {
      return has_content;
    }

    while (iswspace(lexer->lookahead)) {
      advance(lexer);
      lexer->mark_end(lexer);
    }

    if (lexer->lookahead == '`') {
      advance(lexer);
    }

    if (lexer->lookahead == '|') {
      advance(lexer);
      if (lexer->lookahead == '\n') {
        return has_content;
      }
    }

    advance(lexer);
  }

  return false;
}

bool tree_sitter_d2_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (valid_symbols[RAW_TEXT]) {
    return scan_raw_text(lexer);
  }

  return false;
}
