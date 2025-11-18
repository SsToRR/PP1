#include <bits/stdc++.h>
using namespace std;

int n, x, sum = 0; string s;
map<string, int> mp;

void solve(){


    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s >> x;
        sum += x;
        mp[s] += x;
    }
}

int main(){

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    for(auto it : mp){
        cout << it.first << ' ' << double(it.second) / double(sum) * 100 << '\n';
    }

    return 0;
}

