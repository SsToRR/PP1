#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, mx = INT_MIN, pos;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x > mx) mx = x, pos = i;
    }
    cout << pos << endl;
    return 0;
}