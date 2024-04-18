#include "ArrayQ.h"

ArrayQ::ArrayQ() : queue{} { //선언과 동시에 초기화
    front = rear = -1;
}

ArrayQ::~ArrayQ(){

}

bool ArrayQ::isEmpty(){
    return front == rear;
}

bool ArrayQ::isFull(){
    return rear == MAX_QUEUE_SIZE -1;
}

void ArrayQ::enqueue(int e){
    if(isFull()){
        cout << "Q is Full" << endl;
    }
    else{
        queue[++rear] = e;
    }
}

char ArrayQ::dequeue(){
    if(isEmpty()){
        cout << "Q is Empty" << endl;
        return -1;
    }
    else{
        return queue[++front];
    }
}

char ArrayQ::peek(){
    if(isEmpty()){
        cout << "Q is Empty" << endl;
        return -1;
    }
    else{
        return queue[front + 1];
    }
}

void ArrayQ::display(){
    for(int i = front + 1; i <= rear; i++){
        cout << queue[i] << " ";
    }
    
    cout << endl;
}

