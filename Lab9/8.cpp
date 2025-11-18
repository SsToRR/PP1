#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x; string s;
    map<string, set<int>> mp;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s >> x;
        mp[s].insert(x);
    }
    for(auto it : mp){
        if(it.second.size() >= 3)cout << it.first << " +1\n";
        else cout << it.first << " NO BONUS\n";
    }

    return 0;
}
