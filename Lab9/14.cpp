

#include <bits/stdc++.h>
using namespace std;



int main(){

    stack<int> st;
    int n, x;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x;
        while(!st.empty()){
            if(st.top() <= x){
                st.pop();
            } else break;
        }
        st.push(x);
        cout << st.size() << ' ';
    }

    return 0;
}

