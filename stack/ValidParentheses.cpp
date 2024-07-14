#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                // cout<<"pushing "<<s[i]<<endl;
                st.push(s[i]);
            } else {
                // cout<<"poping "<<s[i]<<endl;
                if(st.empty()){
                    return false;
                }else if(st.top() == '(' && s[i] == ')'){
                    st.pop();
                } else if(st.top() == '[' && s[i] == ']'){
                    st.pop();
                } else if(st.top() == '{' && s[i] == '}'){
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }

int main(){
    cout<<"hello";
    string s = "()[]{}]";
    cout<<isValid(s);
    return 0;
}