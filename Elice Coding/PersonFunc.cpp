#include "Person.h"

Person::Person(){
    //문자열 초기화, "NULL" X "" O 
    }

Person::Person(string name, int age, string occupation){
    //this 사용 안 해도 됨
    this -> name = name;
    this -> age = age;
    this -> occupation = occupation;
}

void Person::set(){
    cin >> name >> age;
    cin.ignore();
    getline(cin,occupation);
}

void Person::displayInfo(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Occupation: "<< occupation << endl;
}

void Person::wishGoodDay(){
    cout << "Have a good day, " << name << "!" << endl;
}

Person::~Person(){
    cout << "Goodbye, " << name << "!" << endl;
}       