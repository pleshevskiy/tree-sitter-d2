

test: build
	tree-sitter test

highlight:
	tree-sitter highlight -t test/highlight/*.d2

build:
	tree-sitter generate

