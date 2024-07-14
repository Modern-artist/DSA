#include <iostream>
#include <string>
#include <stack>
using namespace std;

    string simplifyPath(string path) {
        stack<string> st;
        path = path + "/";
        int n = path.size();
        string ans = "", temp = "";
        for (int i = 1; i < n; i++) {
            if (path[i] == '/') {
                if (temp == "..") {
                    if (!st.empty()) {
                        cout << "poping" << st.top() << endl;
                        st.pop();
                    }
                    temp = "";
                } else if (temp == ".") {
                    temp = "";
                } else if (temp != "") {
                    cout << "pushing" << temp << endl;
                    st.push(temp);
                    temp = "";
                }
            }
            if (path[i] != '/') {
                temp = temp + path[i];
            }
        }
        if(st.empty()){
            return "/";
        }
        while (!st.empty()) {
            cout << "putting" << st.top() << endl;
            ans = '/' + st.top() + ans;
            st.pop();
        }

        return ans;
    }
// "/.../a/../b/c/../d/./"
int main(){
    string s ="/.../a/../b/c/../d/./";
    cout<<simplifyPath(s);
    return 0;
}