#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, x, mx1 = INT_MIN, pos;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << i * 2 -1 << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}