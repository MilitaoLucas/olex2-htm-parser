package tree_sitter_olex2htm_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_olex2htm "github.com/militaolucas/olex2-htm-parser.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_olex2htm.Language())
	if language == nil {
		t.Errorf("Error loading Olex2htm grammar")
	}
}
