#include <bits/stdc++.h>
using namespace std;

long long n, a[1001];
vector<int> v;

int main() {

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        v.push_back(a[i]);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            cout << v[i] << ' ' << v[j] << '\n';
        }
    }

    return 0;
}