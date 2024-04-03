#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>
#include <string>

using namespace std;

class person {
private:
    string name;
    int age;
    string occupation;

public:
    person();
    person(string name, int age, string occupation);
    void set();
    void displayinfo();
    void wishGoodDay();
    ~person ();
};
#endif