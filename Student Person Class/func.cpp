#include "student.h"

void student::set(){
    //this -> name = name;
    //this -> age = age;
    //this -> university = university;

    getline(cin,name);
    cin >> age;
    cin.ignore();
    getline(cin,university);
}

void student::printinfo(){
    cout << name << endl << age << endl << university;
}