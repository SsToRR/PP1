#include <bits/stdc++.h>
using namespace std;

bool check(string s){

    int ok1 = false, ok2 = false, ok3 = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') ok1 = true;
        if(s[i] >= 'a' && s[i] <= 'z') ok2 = true;
        if(s[i] >= '0' && s[i] <= '9') ok3 = true;
    }
    if(ok1 && ok2 && ok3) return true;
    else return false;

}

int main(){

    int n; string s;
    set<string> st;

    cin >> n;

    while(n--){
        cin >> s;
        if(check(s)) st.insert(s);
    }
    cout << st.size() << '\n';
    for(auto it : st) cout << it << '\n';

}
