#ifndef __STACK_H__
#define __STACK_H__
#define MAX_SIZE 6

#include <iostream>

using namespace std;

class stack {
private:
    int data[MAX_SIZE];
    int top;

public:
    stack();
    ~stack();
    void push (int num);
    int pop ();
    int peek ();
    bool isEmpty();
    bool isFull();
    void display();
};
#endif