#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>

namespace {
  using std::vector;
  using std::iswpunct;

  enum TokenType {
    TEXT_BLOCK_START,
    TEXT_BLOCK_END,
    TEXT_BLOCK_RAW_TEXT,
  };

  struct Scanner {
    vector<int16_t> escape_char_stack;

    Scanner() {
      deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer) {
      size_t i = 0;
      size_t escape_char_count = escape_char_stack.size();
      buffer[i++] = escape_char_count;

      vector<int16_t>::iterator
        iter = escape_char_stack.begin(),
        end = escape_char_stack.end();

      for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
        buffer[i++] = *iter;
      }

      return i;
    }

    void deserialize(const char *buffer, unsigned length) {
      escape_char_stack.clear();
      if (length == 0) return;
      size_t i = 0;
      size_t escape_char_count = (uint8_t)buffer[i++];
      for (; i <= escape_char_count; i++) {
        escape_char_stack.push_back(buffer[i]);
      }
    }

    void advance(TSLexer *lexer) {
      lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer) {
      lexer->advance(lexer, true);
    }

    bool is_text_block_end(TSLexer *lexer) {
        vector<int16_t>::reverse_iterator
          iter = escape_char_stack.rbegin(),
          end = escape_char_stack.rend();

        for (; iter != end; ++iter) {
          if (lexer->lookahead != *iter) {
            return false;
          }
          advance(lexer);
        }

        return true;
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {
      if (valid_symbols[TEXT_BLOCK_START] && escape_char_stack.empty()) {
        lexer->result_symbol = TEXT_BLOCK_START;
        lexer->mark_end(lexer);

        while (lexer->lookahead != 0 && iswspace(lexer->lookahead)) {
          skip(lexer);
        }

        if (lexer->lookahead != '|') {
          return false;
        }

        advance(lexer);
        escape_char_stack.push_back('|');

        if (!iswpunct(lexer->lookahead)) {
          lexer->mark_end(lexer);
          return true;
        }

        int16_t escape_char = lexer->lookahead;
        while (lexer->lookahead == escape_char) {
          escape_char_stack.push_back(escape_char);
          advance(lexer);
        }

        lexer->mark_end(lexer);

        return true;
      } else if (valid_symbols[TEXT_BLOCK_END] && !escape_char_stack.empty()) {
        lexer->result_symbol = TEXT_BLOCK_END;
        lexer->mark_end(lexer);

        while (lexer->lookahead != 0 && iswspace(lexer->lookahead)) {
          skip(lexer);
        }

        if (is_text_block_end(lexer)) {
          lexer->mark_end(lexer);
          escape_char_stack.clear();
          return true;
        }
      } else if (valid_symbols[TEXT_BLOCK_RAW_TEXT] && !escape_char_stack.empty()) {
        lexer->result_symbol = TEXT_BLOCK_RAW_TEXT;
        lexer->mark_end(lexer);
        
        while (lexer->lookahead != 0 && !is_text_block_end(lexer)) {
          advance(lexer);
          lexer->mark_end(lexer);
        }
        
        return true;
      }

      return false;

    }
  };

}

extern "C" {

  void *tree_sitter_d2_external_scanner_create() {
    return new Scanner();
  }

  bool tree_sitter_d2_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
  }

  unsigned tree_sitter_d2_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(buffer);
  }

  void tree_sitter_d2_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
  }

  void tree_sitter_d2_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }

}
