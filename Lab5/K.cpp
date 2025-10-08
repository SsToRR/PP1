#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m,x, mn = INT_MAX, id;
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        int sum = 0;
        for(int j = 1; j <= m; j++){
            cin >> x;
            sum += x;
        }
        if(sum < mn) mn = sum, id = i;
    }
    cout << id;
    
    return 0;
}