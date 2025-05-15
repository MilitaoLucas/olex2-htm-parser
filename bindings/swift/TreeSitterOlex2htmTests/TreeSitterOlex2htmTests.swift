import XCTest
import SwiftTreeSitter
import TreeSitterOlex2htm

final class TreeSitterOlex2htmTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_olex2htm())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Olex2htm grammar")
    }
}
