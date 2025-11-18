#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){

    int n, x, y;
    vector<pair<int, int>> v;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x >> y;
        v.push_back({x + y, i});
    }

    sort(v.begin(), v.end());

    for(auto i : v) cout << i.second << ' ';

    return 0;
}

