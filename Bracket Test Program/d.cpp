#include "Stack.h"
#include <string>

int main(){
    stack test;
    string text = "";
    char ch = '\0' , prev = '\0';

    getline(cin, text);

    for (int i = 0; i < text.length(); i++) {
        ch = text[i];
        switch (ch) {
        case '[' : case '{' : case '(' : 
            test.push(ch);
            break;
        case ']' : case '}' : case ')' :
            if (test.isEmpty()) {
                cout << "ERROR" << endl;
                return -1;
            }
            prev = test.pop();

            if ((ch == ']' && prev != '[') || ( ch == ')' && prev != '(') || ( ch == '}' && prev != '{')) {
                cout << "ERROR" << endl;
                return -1;
            }
            break;
        default:
            break;
        }
    }
    cout << "Success" << endl;
}
