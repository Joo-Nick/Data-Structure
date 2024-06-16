#include "CircularList.h"

CircularList::CircularList() : tail(nullptr), listsize(0) {}

CircularList::~CircularList(){
    clear();
}

Node* CircularList::getHead(){
    if(isEmpty()) {
        return nullptr;
    }
    return tail -> getNext();
}

Node* CircularList::getTail(){
    return tail;
}

void CircularList::setTail(Node* n){
    tail = n;
}

bool CircularList::isEmpty(){
    return tail == nullptr;
}

int CircularList::size(){
    return listsize;
}

int CircularList::getEntry(int pos){
    if (pos < 0 || pos >= listsize) {
        cout << "Error" << endl;
        return -1;
    }

    Node* current = getHead();
    for (int i = 0; i < pos; i++) {
        current = current->getNext();
    }
    return current -> getData();
}

void CircularList::insert(int pos, const int data){
    if (pos < 0 || pos > listsize) {
        cout << "Error" << endl;
        exit(1);
    }
    Node* newNode = new Node(data);
    if (isEmpty()) {
        newNode->setNext(newNode);
        tail = newNode;
    } else if (pos == 0) {
        newNode -> setNext(getHead());
        tail -> setNext(newNode);
    } else {
        Node* prev = getHead();
        for (int i = 0; i < pos - 1; i++) {
            prev = prev->getNext();
        }
        newNode->setNext(prev->getNext());
        prev->setNext(newNode);
        if (pos == listsize) {
            tail = newNode;
        }
    }
    listsize++;
}

Node* CircularList::rmv(int pos){
    if (pos < 0 || pos >= listsize) {
        cout << "Error" << endl;
        return nullptr;
    }
    Node* prev = tail;
        if (listsize == 1){
            tail = nullptr;
            listsize --;
            return prev;
        }
        for (int i = 0; i < pos; i++)
            prev = prev->getNext();
        Node* rmvnode = prev->getNext();
        prev->setNext(rmvnode->getNext());
        rmvnode -> setNext(nullptr);
        if (pos == listsize - 1)
            tail = prev;
        listsize --;
        return rmvnode;
}

void CircularList::showList(){
    if (isEmpty()) {
        cout << "List is empty" << endl;
        exit(1);
    }
    Node* curr = getHead();
    for (int i = 0; i < listsize; i++) {
        cout << curr->getData() << " ";
        curr = curr->getNext();
    }
    cout << endl;
}

void CircularList::clear(){
    while (!isEmpty())
        rmv(0);
}