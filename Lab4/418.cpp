#include <bits/stdc++.h>
using namespace std;

long long n, a[1001], mx = INT_MIN;

int main() {

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);

    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            mx = max(mx, __gcd(a[i], a[j]));
        }
    }
    cout << mx;

    return 0;
}