import XCTest
import SwiftTreeSitter
import TreeSitterEunoia

final class TreeSitterEunoiaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_eunoia())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Eunoia grammar")
    }
}
