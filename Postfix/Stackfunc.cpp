#include "Stack.h"
#include <string>

stack::stack(){ //data{} 초기화
    data[MAX_SIZE] = {};
    top = -1;
}
stack::~stack(){
    
}
void stack::push(char num){
    if (isFull()){
        cout << "Stack is Full" << endl;
    }
    else {
        data[++top] = num;
    }
}

char stack::pop(){
    if (isEmpty()){
        cout << "Stack is Empty" << endl;
        return -1;
    }
    else {
        return data[top--];
    }
}

char stack::peek(){
    if (isEmpty()){
        cout << "Stack is Empty" << endl;
        return -1;
    }
    else {
        return data[top];
    }
}

bool stack::isEmpty(){ 
        return top == -1;   
}

bool stack::isFull(){
    return top == MAX_SIZE - 1; 
}

void stack::display(){
    int i;
    if (isEmpty()) {
       cout << "Stack is Empty - No display" << endl; 
    }
    else {
        for  (i = 0; i <= top ; i++)
            {cout << data[i] << " " ;} 
        cout << endl;
    }

    
}

int precedence(char oper){
    switch (oper) {
        case '(' : case ')' : return 0;
        case '+' : case '-' : return 1;
        default : return 2;
    }
    return -1;
}