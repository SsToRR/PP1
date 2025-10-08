#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, x, mx1 = INT_MIN, mx2 = INT_MIN;
    set<int> st;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> x;
            st.insert(x);
            if(x > mx1){
                mx2 = mx1;
                mx1 = x;
            }
        }
    }
    if(st.size() == 1) cout << 0;
    else cout << mx2;
    return 0;
}