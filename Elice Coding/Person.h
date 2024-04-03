#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string occupation;

public:
    Person();
    Person(string name, int age, string occupation);
    void set();
    void displayInfo();
    void wishGoodDay();
    ~Person();
};
#endif