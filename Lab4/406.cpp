#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a[100005], mx = INT_MIN, mn = INT_MAX;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }

    for(int i = 1; i <= n; i++){
        if(a[i] == mx) cout << mn << ' ';
        else cout << a[i] << ' ';
    }

    return 0;
}