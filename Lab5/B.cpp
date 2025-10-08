#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, x, pos_col, pos_row, mx = INT_MIN;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> x;
            if(x > mx) mx = x, pos_row = i, pos_col = j;
        }
    }
    cout << pos_row << ' ' << pos_col;
    return 0;
}