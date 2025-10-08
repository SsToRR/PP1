#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m,x;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        int mx = INT_MIN;
        for(int j = 1; j <= n; j++) cin >> x, mx = max(x, mx);
        for(int j = 1; j <= n; j++) cout << mx << ' ';
        cout << '\n';
    }
    
    return 0;
}