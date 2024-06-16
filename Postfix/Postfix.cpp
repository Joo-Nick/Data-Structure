#include "Stack.h"
int main(){
    stack st;
    int val1, val2, offset;
    string text = "";
    char ch = '\0';

    getline(cin, text);
    for (int i = 0; i < text.length(); i++){
        ch = text[i];
        if(ch >= '0' && ch <= '9'){
            offset = ch - '0';
            st.push(offset);
        }
        else{
            val2 = st.pop();
            val1 = st.pop();
            switch(ch){
                case '+' : st.push(val1 + val2); break;
                case '-' : st.push(val1 - val2); break;
                case '*' : st.push(val1 * val2); break;
                default : st.push(val1 / val2); break; 
            }        
        }
    }
   cout << "result = " << st.pop();
   return 0;
}