#ifndef __HEADER_H__
#define __HEADER_H__
const int MAX = 100;

#include <iostream>
#include <string>

using namespace std;

class poly{
private:
    int degree;
    int array[MAX];

public:
    poly();
    ~poly();
    void read();
    void add(poly a, poly b);
    void sub(poly a, poly b);
    void mult(poly a, poly b);
    void display();
    void trim();
};
#endif