#include "MaxHeap.h"
#include <iostream>

using namespace std;

int main() 
{
    MaxHeap maxHeap;
	
    maxHeap.insert(10);
    maxHeap.insert(30);
    maxHeap.insert(20);
    maxHeap.insert(50);
    maxHeap.insert(40);

    maxHeap.display(); 

    HeapNode removedNode = maxHeap.remove();
    cout << "Removed node: " << removedNode.getKey() << endl; 

    removedNode = maxHeap.remove();
    cout << "Removed node: " << removedNode.getKey() << endl; 

    maxHeap.display(); 

    const HeapNode& maxNode = maxHeap.find();
    cout << "Maximum element in the heap: " << maxNode.getKey() << endl; 

    return 0;
}
