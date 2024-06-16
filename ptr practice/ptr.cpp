#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int a[5] = {4,5,6,7,8};
    int b[5] = {1,3,5,7,9};
    int c[5] = {0,2,4,6,8};
    int* p[3] = {&a[0], &b[0], &c[0]}; 

    cout << p[0] << " " << *p[0] << endl;
    cout << p[1] << " " << *p[1] << endl;
    cout << p[2] << " " << *p[2] << endl;

    for(i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout << *p[i];
            ++p[i];
        }
        cout << endl;
    }
}