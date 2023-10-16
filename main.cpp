#include "tree.h"
#include "document.h"

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	auto document = makeDocumentTree();
	printDocumentOutline(document);

	return EXIT_SUCCESS;
}
