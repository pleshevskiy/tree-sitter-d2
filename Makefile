TS_CONF := $$HOME/.config/tree-sitter/config.json

test: build
	tree-sitter test

highlight: build
	tree-sitter highlight -t test/highlight/*.d2

build:
	tree-sitter generate

init:
	if [ ! -f "$(TS_CONF)" ]; then \
		tree-sitter init-config; \
	fi
	
	if [ -z $$(jq '."parser-directories"' $(TS_CONF) | grep $$(dirname $$PWD) ) ]; then \
		jq ".\"parser-directories\" |= . + [\"$$(dirname $$PWD)\"]" $(TS_CONF) > $(TS_CONF); \
	fi
