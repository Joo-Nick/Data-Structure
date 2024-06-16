#include "Stack.h"
int main(){
    stack st;
    int offset = 0;
    string text = "";
    char ch = '\0' , op = '\0';

    getline(cin, text);
    for (int i = 0; i < text.length(); i++){
        ch = text[i];
        if(ch == '(') st.push(ch);
        else if (ch == ')') {
            while (!st.isEmpty()) {
                op = st.pop();
                if(op == '(') break;
                cout << op;
            }
        }
        else if (ch >= '0' && ch <= '9'){
            offset = ch - '0';
            cout << ch;
        }
        else {
            while (!st.isEmpty()){
                op = st.peek();
                if (precedence(ch) > precedence(op)) break;
                cout << op;
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.isEmpty())
        cout << st.pop();

   return 0;
}