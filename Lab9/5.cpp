#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    map<int, int> mp;

    cin >> n;

    for(int i = 1, x; i <= n; i++){
        cin >> x;
        mp[x]++;
    }

    auto it = mp.rbegin();
    it++;

    cout << it->second;

    return 0;
}

