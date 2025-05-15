import XCTest
import SwiftTreeSitter
import TreeSitterHtmlOlex2htm

final class TreeSitterHtmlOlex2htmTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_html_olex2htm())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading HtmlOlex2htm grammar")
    }
}
