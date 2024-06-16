#include <iostream>
using namespace std;

int main(){
    int a = 1, b = 2, c = 3;
    int *p[3] = {&a, &b, &c};
    int **pp = nullptr;

    pp = p;

    for(int i = 0; i < 3; i++){
        cout << **pp << endl;
        ++pp;
    }
}