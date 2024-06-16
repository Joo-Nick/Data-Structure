#ifndef __MAXHEAP_H__
#define __MAXHEAP_H__

#include "HeapNode.h"
#define MAX_ELEMENT 100

class MaxHeap {
private:
    HeapNode node[MAX_ELEMENT + 1]; //0번을 비워둬야...
    int size;

    int getParentIndex(int index) const;
    int getLeftIndex(int index) const;
    int getRightIndex(int index) const;

public:
    MaxHeap();
    ~MaxHeap();

    bool isEmpty() const;
    bool isFull() const;

    const HeapNode& getParent(int index) const;
    const HeapNode& getLeft(int index) const;
    const HeapNode& getRight(int index) const;

    void insert(int key);
    HeapNode remove();
	int getLargestChildIndex(int currentIndex);

    const HeapNode& find() const;
    void display() const;
};

#endif // __MAXHEAP_H__
