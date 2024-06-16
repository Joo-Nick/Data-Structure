#include "ArrayQ.h"

ArrayQ::ArrayQ() : queue{} { //선언과 동시에 초기화
    front = rear = 0;
}

ArrayQ::~ArrayQ(){

}

bool ArrayQ::isEmpty(){
    return front == rear;
}

bool ArrayQ::isFull(){
    return front == (rear + 1) % MAX_QUEUE_SIZE;
}

void ArrayQ::enqueue(int e){
    if(isFull()){
        cout << "Q is Full" << endl;
    }
            //rear = (rear + 1) % MAX;
            //queue[rear] = e;
            queue[++rear % MAX_QUEUE_SIZE] = e;
}

char ArrayQ::dequeue(){
    if(isEmpty()){
        cout << "Q is Empty" << endl;
        return -1;
    }
        return queue[++front % MAX_QUEUE_SIZE];
}

char ArrayQ::peek(){
    if(isEmpty()){
        cout << "empty" << endl;
        return -1;
    }
        return queue[(front + 1) % MAX_QUEUE_SIZE];
}

void ArrayQ::display(){
    for(int i = front + 1; i <= rear; i++){
        cout << queue[i % MAX_QUEUE_SIZE] << " ";
    }
    cout << endl;
}

