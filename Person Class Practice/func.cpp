#include "p.h"

person::person() {}

person::person(string name, int age, string occupation){
    this->name = name;
    this->age = age;
    this->occupation = occupation;
}

void person::set(){
    cout << "NAME: ";
    getline (cin, name);
    cout << "AGE: ";
    cin >> age;
    cout << "OCCUPATION: "; 
    cin.ignore(); //정수 입력한 뒤의 \n을 없애주는 것
    getline (cin, occupation); // 공백 포함 입력 ex)texi driver
}


void person::displayinfo(){
    cout << "NAME = " << name << endl;
    cout << "AGE = " << age <<endl;
    cout << "OCCUPATION = " << occupation << endl;
}

void person::wishGoodDay(){
    cout << "Have a good day, " << name << "!" << endl;
}

person::~person() {
    cout << "Default Constructor is deleted" << endl;
}