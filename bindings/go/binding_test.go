package tree_sitter_eunoia_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_eunoia "github.com/ciaran-matthew-dunne/tree-sitter-eunoia/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_eunoia.Language())
	if language == nil {
		t.Errorf("Error loading Eunoia grammar")
	}
}
