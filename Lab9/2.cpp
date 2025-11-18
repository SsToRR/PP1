#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){

    int n, a[1005], x;
    vector<int> v, w;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x % 2) v.push_back(x);
        else w.push_back(x);
    }

    sort(w.begin(), w.end(), cmp);
    sort(v.begin(), v.end());

    for(int i : w) cout << i << ' ';
    for(int i : v) cout << i << ' ';

    return 0;
}
