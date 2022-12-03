

test: build
	tree-sitter test

build:
	tree-sitter generate
