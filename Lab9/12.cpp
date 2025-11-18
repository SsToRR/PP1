#include <bits/stdc++.h>
using namespace std;



int main(){

    string s;

    cin >> s;

    stack<char> st;

    for(int i = 0; i < s.size(); i++){
        if(!st.empty()){
            if(st.top() == s[i] && s[i] == '1') {
                st.pop();
                continue;
            }
        }
        st.push(s[i]);
    }

    string t;

    while(!st.empty()){
        t += st.top();
        st.pop();
    }
    reverse(t.begin(), t.end());

    cout << t;


    return 0;
}

