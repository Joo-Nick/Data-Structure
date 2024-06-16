#ifndef __STACK_H__
#define __STACK_H__

const int MAX_SIZE = 20; 

#include <iostream>
#include <string>

class Stack{

private:
    int top;
    char array[MAX_SIZE];

public:
    Stack();
    ~Stack();
    void push(char data);
    char pop();
    char peek();
    void display();
    bool isempty();
    bool isfull();
};

#endif