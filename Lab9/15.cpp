

#include <bits/stdc++.h>
using namespace std;



int main(){

    stack<int> st;
    int n, x, ok = 0;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x != 0){
            st.push(x);
        } else {
            cout << st.top() << ' ';
            st.pop();
            ok = 1;
        }
    }
    if(!ok) cout << -1;
    return 0;
}


