#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m,x, mn = INT_MAX, id;
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> x;
            if(sqrt(x) * sqrt(x) == x){
                cout << sqrt(x) << ' ';
            } else cout << x << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}