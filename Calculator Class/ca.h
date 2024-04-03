#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>

using namespace std;

class Calculator {
    private:
    int num1, num2;

    public:
    void set(int a, int b);
    int sub();
    double div();
};
#endif