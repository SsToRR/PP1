#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    set<int> st;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        st.insert(x);
    }

    cout << *st.begin() << endl;
}
