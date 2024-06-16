#include "DoublyList.h"

DoublyList::DoublyList() : head(0), listsize(0){}

DoublyList::~DoublyList(){
    clear();
}

Node* DoublyList::getHead(){
    if(isEmpty()) {
        return nullptr;
    }
    return &head;
}

bool DoublyList::isEmpty(){
    return head.getNext() == nullptr;
}

int DoublyList::size(){
    return listsize;
}

int DoublyList::getEntry(int pos){
    if (pos < 0 || pos >= listsize) {
        cout << "Error" << endl;
        return -1;
    }

    Node* curr = head.getNext();
    for (int i = 0; i < pos; i++) {
        curr = curr->getNext();
    }
    return curr->getData();
}

void DoublyList::insert(int pos, const int data){
    if (pos < 0 || pos > listsize) {
        cout << "Error" << endl;
        exit(1);
    }
    
    Node* newNode = new Node(data);
    if (pos == 0) {
        newNode->setNext(head.getNext());
        head.setNext(newNode);
        newNode->setPrev(&head);
        if (listsize == 0) {
            head.setPrev(newNode);
        } else {
            newNode->getNext()->setPrev(newNode);}
    }
    else {

    Node* prev = head.getNext();
    for (int i = 0; i < pos -1; i++) {
        prev = prev->getNext();
    }

    newNode->setPrev(prev);
    newNode->setNext(prev->getNext());
    if(prev->getNext() != nullptr)
        prev->getNext() -> setPrev(newNode);
    prev->setNext(newNode);
    listsize++;
    }
}

Node* DoublyList::rmv(int pos){
     if (pos < 0 || pos >= listsize) {
        cout << "Error" << endl;
        return nullptr;
    }

    Node* curr = head.getNext();
    for (int i = 0; i < pos; i++)
        curr = curr->getNext();
    curr->getPrev()->setNext(curr->getNext());
    if (curr->getNext() != nullptr) {
        curr->getNext()->setPrev(curr->getPrev());
    } 
    else {
        head.setPrev(curr->getPrev());
    }
    listsize--;
    return curr;
}

void DoublyList::showList(){
    if (isEmpty()) {
        cout << "List is empty" << endl;
        exit(1);
    }
    Node* curr = getHead();
    curr = curr -> getNext();
    for (int i = 0; i < listsize; i++) {
        cout << curr->getData() << " ";
        curr = curr->getNext();
    }
    cout<< endl;
}

void DoublyList::clear(){
    while (!isEmpty())
        rmv(0);
}