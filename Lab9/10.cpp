#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2){
    if(p1.second != p2.second) return p1.second > p2.second;
    else return p1.first < p2.first;
}

int main(){

    int n, x, sum = 0; string s;
    vector<pair<string, int>> v;
    map<string, int> mp;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s >> x;
        mp[s] += x;
        sum += x;
    }

    for(auto it : mp) v.push_back(it);

    sort(v.begin(), v.end(), cmp);

    for(auto i : v){
        cout << i.first << ' ' << double(i.second) / double(sum) * 100 << "%\n";
    }

    return 0;
}
