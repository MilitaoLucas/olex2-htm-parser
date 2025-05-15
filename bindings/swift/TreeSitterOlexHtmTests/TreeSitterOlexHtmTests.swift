import XCTest
import SwiftTreeSitter
import TreeSitterOlexHtm

final class TreeSitterOlexHtmTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_olex_htm())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading OlexHtm grammar")
    }
}
