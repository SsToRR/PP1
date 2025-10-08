#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, x, cnt = 0;
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> x;
            if(x < 0) cnt++;
        }
    }
    cout << cnt;
    return 0;
}