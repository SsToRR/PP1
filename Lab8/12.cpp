#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    set<int> st;

    cin >> n;

    while(n--){
        int prev = st.size();
        cin >> x;
        st.insert(x);
        int now = st.size();
        if(prev != now) cout << "YES\n";
        else cout << "NO\n";
    }

}
