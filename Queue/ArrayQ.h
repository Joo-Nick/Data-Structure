#ifndef __ArrayQ_H__
#define __ArrayQ_H__

#include <iostream>
const int MAX_QUEUE_SIZE = 5;

using namespace std;

class ArrayQ
{
private:
	char	queue[MAX_QUEUE_SIZE];	// ����� �迭
	int	    front;					
	int 	rear;

public:
	ArrayQ();
	~ArrayQ();	
	
	bool isEmpty(); 
	bool isFull(); 

	void enqueue(int e);
	char dequeue();
	char peek();
	void display();
};

#endif