#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>

using namespace std;

class student {
    private:
    string name[10];
    int age;
    string university[20];

    public:
    student(); //default 생성자 클래스 이름 동일 반환값x 
    //student(string student_name, int ~~~) 매개변수의 default 값 설정 가능.
    void set(int a, int b, int c);
    void printinfo();
};
#endif