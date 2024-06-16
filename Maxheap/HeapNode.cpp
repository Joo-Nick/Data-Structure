#include "HeapNode.h"
#include <iostream>

HeapNode::HeapNode(int key) : key(key) {}

HeapNode::~HeapNode() {}

void HeapNode::setKey(int key) {
    this -> key = key;
}

int HeapNode::getKey() const {
    return key;
}

void HeapNode::display() const {
    std::cout << key << " ";
}
