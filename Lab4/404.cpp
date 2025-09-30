#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, mx = INT_MIN;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> x;
        mx = max(mx, x);
    }
    cout << mx << endl;
    return 0;
}