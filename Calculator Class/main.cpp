#include "ca.h"

int main(){
    int num1 , num2;
    int re1 = 0;
    double re2 = 0.0;
    
    cin >> num1 >> num2;

    Calculator calc;
    calc.set(num1,num2);
    re1 = calc.sub();
    cout<< re1 << endl;
    if(num2){
        re2 = calc.div();
        cout<< re2 << endl;
    }
    else {
        cout << "error" <<endl;
    }
    return 0;
}
