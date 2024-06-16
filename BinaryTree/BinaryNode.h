#ifndef __BINARYNODE_H__
#define __BINARYNODE_H__

class BinaryNode
{
private:
	int data;
	BinaryNode* left;
	BinaryNode* right;

public:
	BinaryNode(const int val, BinaryNode *left = nullptr, BinaryNode *right = nullptr);
	~BinaryNode();
	
	int getData() const;  // 객체의 멤버 변수를 변경할 수 없음, const 인스턴스에서도 호출 가능
    void setData(const int val);

    BinaryNode* getLeft() const;
    void setLeft(BinaryNode* left);

    BinaryNode* getRight() const;
    void setRight(BinaryNode* right);
	
	bool isLeaf() const;
};

#endif //__BINARYNODE_H__