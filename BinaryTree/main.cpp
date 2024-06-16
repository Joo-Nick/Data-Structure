#include "BinaryTree.h"

int main()
{
	BinaryNode* node4 = new BinaryNode(4);
    BinaryNode* node5 = new BinaryNode(5);
    BinaryNode* node6 = new BinaryNode(6);
    BinaryNode* node7 = new BinaryNode(7);

    BinaryNode* node2 = new BinaryNode(2, node4, node5);
    BinaryNode* node3 = new BinaryNode(3, node6, node7);
    BinaryNode* node1 = new BinaryNode(1, node2, node3);

    // Create binary tree and set root
    BinaryTree tree;
    tree.setRoot(node1);

    // Perform traversals
    tree.inOrder();
    tree.preOrder();
    tree.postOrder();

    // Clean up
    tree.clear();

    return 0;
}