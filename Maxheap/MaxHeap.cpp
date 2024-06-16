#include "MaxHeap.h"
#include <iostream>
using namespace std;

MaxHeap::MaxHeap() : size(0) {}

MaxHeap::~MaxHeap() {}

bool MaxHeap::isEmpty() const {
    return size == 0;
}

bool MaxHeap::isFull() const {
    return size == MAX_ELEMENT;
}

int MaxHeap::getParentIndex(int index) const {
    return index / 2;
}

int MaxHeap::getLeftIndex(int index) const {
    return index * 2;
}

int MaxHeap::getRightIndex(int index) const {
    return index * 2 + 1;
}

const HeapNode& MaxHeap::getParent(int index) const {
    int parentIndex = getParentIndex(index);
	if (index == 0) {
		cout << "Root node has no parent" << endl;
		exit(1);
	}
	
    return node[parentIndex];
}

const HeapNode& MaxHeap::getLeft(int index) const {
    int leftIndex = getLeftIndex(index);
    if (leftIndex > size) {
		cout << "No left child" << endl;
		exit(1);
	}
	
    return node[leftIndex];
}

const HeapNode& MaxHeap::getRight(int index) const {
    int rightIndex = getRightIndex(index);
    if (rightIndex > size) {
		cout << "No right child" << endl;
		exit(1);
	}
	
    return node[rightIndex];
}

void MaxHeap::insert(int key) {
    if (isFull()) {
		cout << "Heap is full" << endl;
		return;  //exit(1);
	}

    int currentIndex = ++size;
    while (currentIndex > 1 && key > getParent(currentIndex).getKey()) {
        node[currentIndex] = getParent(currentIndex);
        currentIndex = getParentIndex(currentIndex);
    }
    node[currentIndex].setKey(key);
}

HeapNode MaxHeap::remove() {
    if (isEmpty()) {
        cout << "Heap is empty" << endl;
        exit(1);
    }
    
    HeapNode removedNode = node[1];
   
    if (size == 1) {
		size--;
		return removedNode;
	}
	
    int keyToMove = node[size--].getKey();
    int index = 1;

    int largestChildIndex = getLargestChildIndex(index);	
    while (getLeftIndex(index) <= size && node[largestChildIndex].getKey() > keyToMove) {           
		node[index] = node[largestChildIndex];
		index = largestChildIndex;        
		largestChildIndex = getLargestChildIndex(index);
    }

    node[index].setKey(keyToMove);
    
    return removedNode;
}


const HeapNode& MaxHeap::find() const {
    if (isEmpty()) {
		cout << "Heap is empty" << endl;
		exit(1);
	}
	
    return node[1];
}

void MaxHeap::display() const {
    for (int i = 1; i <= size; i++) {
        node[i].display();
    }
    cout << endl;
}

int MaxHeap::getLargestChildIndex(int currentIndex) {
    int leftChildIndex = getLeftIndex(currentIndex);
    int rightChildIndex = getRightIndex(currentIndex);
    int largestChildIndex = leftChildIndex;
	
    if (rightChildIndex <= size && node[rightChildIndex].getKey() > node[leftChildIndex].getKey())
        largestChildIndex = rightChildIndex;


    return largestChildIndex;
}
