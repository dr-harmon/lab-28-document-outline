# Lab 28: Document Outline

In this lab, we'll use our knowledge of tree traversal to print a document outline. For example, given the tree in Figure 7.6 in the textbook, we would like to print:

    Paper
        Title
        Abstract
        § 1
            § 1.1
            § 1.2
        § 2
            § 2.1
            § 2.2
            § 2.3
        § 3
            § 3.1
            § 3.2
        References

Note that each element is indented according to its depth in the tree: "Abstract" is indented once, "§ 2.3" is indented twice, etc.

## Implementation

Write a function called `printDocumentOutline` that produces the outline shown above. You can test it with the Figure 7.6 tree by calling `makeDocumentTree`:

	auto document = makeDocumentTree();
	printDocumentOutline(document);

## Hints

Need a hint? Use preorder traversal.

Need another hint? Check out the `preorderPrint` function in Fragment 7.10 in the textbook.
