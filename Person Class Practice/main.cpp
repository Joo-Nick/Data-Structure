#include "p.h"

int main(){
    person nick;
    person nick1("K$SP Rama",28,"rapper");
    nick.set();
    cout << endl;
    nick.displayinfo();
    nick.wishGoodDay();

    cout << endl;

    nick1.displayinfo();
    nick1.wishGoodDay();

    cout << endl;
    
    return 0;
}
