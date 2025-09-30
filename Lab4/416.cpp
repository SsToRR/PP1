#include <bits/stdc++.h>
using namespace std;

long long n, k, ans;

int main() {

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> k;
        if(k % 10 == 7) ans++;
    }

    cout << ans;

    return 0;
}