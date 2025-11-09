#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a[100005];
    set<int> st;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(i > 1) st.insert(a[i-1] + a[i]);
    }
    cout << st.size();

}
