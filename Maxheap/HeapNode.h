#ifndef __HEAPNODE_H__
#define __HEAPNODE_H__

class HeapNode
{
private:
	int key;
	
public:
	HeapNode(int kay = 0);
	~HeapNode();
	
	void setKey(int key);
	int getKey() const;
	void display() const;
};

#endif //__HEAPNODE_H__