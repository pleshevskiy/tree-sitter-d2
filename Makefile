TS_CONF := $$HOME/.config/tree-sitter/config.json

test: build
	tree-sitter test

highlight: build
	tree-sitter highlight -t test/highlight/*.d2

playground: build-wasm
	tree-sitter playground --quiet

build-wasm: build
	tree-sitter build-wasm

build:
	tree-sitter generate

init: init-tree-sitter init-git-hooks

init-tree-sitter:
	if [ ! -f "$(TS_CONF)" ]; then \
		tree-sitter init-config; \
	fi
	
	if [ -z $$(jq '."parser-directories"' $(TS_CONF) | grep $$(dirname $$PWD) ) ]; then \
		cat <<< $$(jq ".\"parser-directories\" |= . + [\"$$(dirname $(PWD))\"]" $(TS_CONF)) > $(TS_CONF); \
	fi

init-git-hooks:
	ln -s $(PWD)/scripts/pre-commit $(PWD)/.git/hooks/pre-commit
