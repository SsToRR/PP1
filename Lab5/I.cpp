#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, a[101][101];
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[j][i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}