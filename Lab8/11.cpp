
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; string s;
    set<string> st;

    cin >> n;

    while(n--){
        cin >> s;
        st.insert(s);
    }

    cout << st.size();

}
