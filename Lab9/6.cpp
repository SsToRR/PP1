#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    map<string, int> mp;
    string s;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s;
        if(!mp[s]){
            cout << "new user added\n";
            mp[s] = 1;
        } else cout << "user already exists\n";
    }

    return 0;
}


