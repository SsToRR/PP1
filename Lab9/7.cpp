#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    map<string, string> mp;
    string s, t;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s >> t;
        mp[s] = t;
    }

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s >> t;
        if(mp[s] == "") cout << "login error\n";
        else {
            if(mp[s] == t) cout << "correct password\n";
            else cout << "password error\n";
        }
    }

    return 0;
}


