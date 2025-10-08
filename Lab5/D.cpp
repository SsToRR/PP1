#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, x, mx1 = INT_MIN, pos;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> x;
            if(i == j){
                if(mx1 < x) mx1 = x, pos = i;
            }
        }
    }
    cout << "Maximum element is: " << mx1 << " with coordinates: " << pos << ';' << pos;
    return 0;
}