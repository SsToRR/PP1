
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x; string s;
    map<string, pair<int, int>> mp;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s >> x;
        mp[s].first += x;
        mp[s].second++;
    }

    for(auto it : mp){
        cout << it.first << ": ";
        cout.precision(3);
        cout << fixed << double(it.second.first) / double(it.second.second) << '\n';
    }

    return 0;
}
