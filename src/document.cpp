#include "document.h"
#include <iostream>

using namespace std;

Tree<string> makeDocumentTree()
{
    return {
        {"Paper", {
            {"Title"},
            {"Abstract"},
            {"§ 1", {
                {"§ 1.1"},
                {"§ 1.2"},
            }},
            {"§ 2", {
                {"§ 2.1"},
                {"§ 2.2"},
                {"§ 2.3"},
            }},
            {"§ 3", {
                {"§ 3.1"},
                {"§ 3.2"},
            }},
            {"References"},
        }}
    };
}

void printDocumentOutline(const Node<std::string>& node, int depth)
{
    for (int i = 0; i < depth; i++) {
        cout << "    ";
    }

    cout << node.e << endl;

    for (auto& child : node.children) {
        printDocumentOutline(child, depth + 1);
    }
}

void printDocumentOutline(const Tree<std::string>& tree)
{
    printDocumentOutline(tree.root, 0);
}

// Alternative version:
// void printDocumentOutline(const Node<std::string>& node, std::string indent)
// {
//     cout << indent;
//     cout << node.e << endl;

//     for (auto& child : node.children) {
//         printDocumentOutline(child, indent + "   ");
//     }
// }

// void printDocumentOutline(const Tree<std::string>& tree)
// {
//     printDocumentOutline(tree.root, "");
// }
