#include "BinaryTree.h"
#include <iostream>

using namespace std;

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree(){
	clear();
}

void BinaryTree::setRoot(BinaryNode* node){
	root = node;
}

BinaryNode* BinaryTree::getRoot() const {
	return root;
}

bool BinaryTree::isEmpty() const{
	return root == nullptr;
}

void BinaryTree::inOrder() const{
	cout << "inorder: " << endl;
    inOrder(root);
    cout << endl;
}

void BinaryTree::preOrder() const {
    cout << "preorder: " << endl;
    preOrder(root);
    cout << endl;
}

void BinaryTree::postOrder() const {
    cout << "postorder: " << endl;
    postOrder(root);
    cout << endl;
}

void BinaryTree::inOrder(BinaryNode* node) const {
    if (node != nullptr) {
        inOrder(node -> getLeft());
        cout << " " << node -> getData() << " ";
        inOrder(node -> getRight());
    }
}

void BinaryTree::preOrder(BinaryNode* node) const {
    if (node != nullptr) {
        cout << " " << node -> getData() << " ";
        preOrder(node -> getLeft());
        preOrder(node -> getRight());
    }
}

void BinaryTree::postOrder(BinaryNode* node) const {
    if (node != nullptr) {
        postOrder(node -> getLeft());
        postOrder(node -> getRight());
        cout << " " << node -> getData() << " ";
    }
}

void BinaryTree::clear() {
    clear(root);
    root = nullptr;
}

void BinaryTree::clear(BinaryNode* node) {
    if (node != nullptr) {
        clear(node -> getLeft());
        clear(node -> getRight());
        delete node;
	}
}