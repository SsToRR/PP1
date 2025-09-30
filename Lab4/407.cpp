#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x, l, r, sum = 0;
    cin >> n >> l >> r;

    for(int i = 1; i <= n; i++){
        cin >> x;
        if(i >= l - 1 && i <= r - 1) sum += x;
    }
    cout << sum;

    return 0;
}