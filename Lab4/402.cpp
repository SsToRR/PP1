#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, sum = 0;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x % 2 == 1) cout << x << ' ';
    }
    
    return 0;
}