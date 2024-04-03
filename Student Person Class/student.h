#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>
#include <string>

using namespace std;

class student {
private:
    string name;
    int age;
    string university;

public:  
    void set();
    void printinfo();
};
#endif