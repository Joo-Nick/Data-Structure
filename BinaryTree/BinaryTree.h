#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__

#include "BinaryNode.h"

class BinaryTree
{
private:
	BinaryNode* root;
	
	void inOrder(BinaryNode* node) const;
	void preOrder(BinaryNode* node) const;
	void postOrder(BinaryNode* node) const;
	
	void clear(BinaryNode* node);
	
public:
	BinaryTree();
	~BinaryTree();
	
	void setRoot(BinaryNode* node);
	BinaryNode* getRoot() const;
	bool isEmpty() const;
	
	void inOrder() const;
	void preOrder() const;
	void postOrder() const;
	
	void clear();	
};

#endif //__BINARYTREE_H__