#include "BinaryNode.h"

BinaryNode::BinaryNode(const int val, BinaryNode *left, BinaryNode *right) 
     : data(val), left(left), right(right) {}
	 
BinaryNode::~BinaryNode() {}

void BinaryNode::setData(const int val){
	data = val;
}

int BinaryNode::getData() const{
	return data;
}
	
void BinaryNode::setLeft(BinaryNode* left) {
	this -> left = left; 
}

BinaryNode* BinaryNode::getLeft() const {
	return left; 
}

void BinaryNode::setRight(BinaryNode* right) {
	this -> right = right; 
}

BinaryNode* BinaryNode::getRight() const {
	return right; 
}

bool BinaryNode::isLeaf() const {
	return left == nullptr && right == nullptr;
}