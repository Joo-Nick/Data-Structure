#include "LinkedList.h"

LinkedList::LinkedList() : head(0) {}
LinkedList::~LinkedList() 
{
	clear();
}
	
Node* LinkedList::getHead()
{
	return head.getNext();
}

bool LinkedList::isEmpty()
{
	return getHead() == nullptr;
}

int LinkedList::getEntry(int pos)      
{
	if (isEmpty() || pos < 0 || pos >= size()) {
		cout << "ERROR!" << endl;
		return -1;      //exit(1);
	}
	
	Node* current = getHead();
	for (int i = 0; i < pos; i++)
		current = current -> getNext();
	
	return current -> getData();
}

void LinkedList::insert(int pos, const int data)
{
	if (pos < 0 || pos > size()) {              
		cout << "Invalid position!" << endl;
		exit(1);
	}
		
	Node* newNode = new Node(data);
	Node* prev = &head;
	for (int i = 0; i <= pos - 1; i++)
		prev = prev -> getNext();
	newNode -> setNext(prev -> getNext());
	prev -> setNext(newNode);	
}

Node* LinkedList::rmv(int pos)                 
{
	if (isEmpty() || pos < 0 || pos >= size()) {
		cout << "ERROR!" << endl;
		exit(1);
	}
	
	Node* removedNode = nullptr;
	Node* prev = &head;
	for (int i = 0; i <= pos - 1; i++)
		prev = prev -> getNext();
	removedNode = prev -> getNext();
    prev -> setNext(removedNode -> getNext());	
	removedNode -> setNext(nullptr);       
	
    return removedNode;
}

bool LinkedList::find(int data)               
{
	Node* current = getHead();
	while (current != nullptr) {
		if (current -> getData() == data)
			return true;
		current = current -> getNext();
	}
	return false;
}

void LinkedList::replace(int pos, const int data)
{
	if (isEmpty() || pos < 0 || pos >= size()) {
		cout << "ERROR!" << endl;
		exit(1);
	}
	
	Node* current = getHead();
	for (int i = 0; i < pos; i++)
		current = current -> getNext();
	current -> setData(data);
}

int LinkedList::size() 
{
	int count = 0;
	
	Node* current = getHead();
	while (current != nullptr) {
		++count;
		current = current -> getNext();
	}
	
	return count;
}

void LinkedList::showList() 
{
	Node* current = getHead();
	while (current != nullptr) {
		cout << current -> getData() << " ";
		current = current -> getNext();
	}
	cout << endl;
}

void LinkedList::clear() 
{
	while(!isEmpty())
	    delete rmv(0);
}

int LinkedList::calcSum() {

}

int LinkedList::countNode(int val) {

}

void LinkedList::reverse(){
    Node* current = getHead(); 
    Node* prev = nullptr;
    Node* next;
	current = current -> getNext();
    while(current!=nullptr){
        next = prev;
        prev = current;
		current -> setNext(prev);
        prev = prev -> getNext();
		prev = next;
    }
    head.setNext(prev);
}

void LinkedList::merge(LinkedList* that) {

}

// 모든 데이터 값 더한거 출력
// 특정 데이터 값을 가지는 노드 개수를 계산
// 모든 노드 순서 역순 
// that의 노드 정보를 현재 리스트에 병합 연산 후 that 리스트는 공백 리스트로