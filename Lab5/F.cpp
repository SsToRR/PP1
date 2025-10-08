#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, x, sum = 0;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> x;
            if(i + j == n + 1){
                sum += x;
            }
        }
    }
    cout << sum;
    
    return 0;
}