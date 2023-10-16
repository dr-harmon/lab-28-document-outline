#pragma once

#include "tree.h"
#include <string>

// Generates a tree like Figure 7.6 in the textbook.
Tree<std::string> makeDocumentTree();

// Prints the document outline with indentation.
void printDocumentOutline(const Tree<std::string>& tree);
