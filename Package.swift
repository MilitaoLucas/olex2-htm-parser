// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterOlex2htm",
    products: [
        .library(name: "TreeSitterOlex2htm", targets: ["TreeSitterOlex2htm"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterOlex2htm",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterOlex2htmTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterOlex2htm",
            ],
            path: "bindings/swift/TreeSitterOlex2htmTests"
        )
    ],
    cLanguageStandard: .c11
)
