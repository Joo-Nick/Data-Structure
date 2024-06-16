#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include "Node.h"

class LinkedList
{
private:
	Node head;

public:
	LinkedList();
	~LinkedList();
	
	Node* getHead();
	bool isEmpty();
	
	int getEntry(int pos);
	
	void insert(int pos, const int data);
	Node* rmv(int pos);
	
	bool find(int data);
	void replace(int pos, const int data);
	
	int size();
	void showList();
	void clear();
	
	int calcSum();
    int countNode(int val); 
	void reverse(); 
	void merge(LinkedList* that); 
};



#endif