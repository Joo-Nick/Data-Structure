#ifndef __STACK_H__
#define __STACK_H__
#define MAX_SIZE 20

#include <iostream>

using namespace std;

class stack {
private:
    char data[MAX_SIZE];
    int top;

public:
    stack();
    ~stack();
    void push (char num);
    char pop ();
    char peek ();
    bool isEmpty();
    bool isFull();
    void display();
};

int precedence(char oper);
#endif