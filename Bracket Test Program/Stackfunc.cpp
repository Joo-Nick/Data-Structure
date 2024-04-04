#include "Stack.h"

stack::stack(){ //data{} 초기화
    data[MAX_SIZE] = {};
    top = -1;
}
stack::~stack(){
    
}
void stack::push(int num){
    if (isFull()){
        cout << "Stack is Full" << endl;
    }
    else {
        data[++top] = num;
    }
}

int stack::pop(){
    if (isEmpty()){
        cout << "Stack is Empty" << endl;
        return -1;
    }
    else {
        return data[top--];
    }
}

int stack::peek(){
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