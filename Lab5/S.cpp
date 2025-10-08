#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    for(int i = 1, cur = 1; i <= n; i++, cur++){
        for(int j = 1; j <= n - cur; j++) cout << '.';
        for(int j = 1; j < cur * 2; j++) cout << '*';
        for(int j = 1; j <= n - cur; j++) cout << '.';
        cout << '\n';
    }
    
    return 0;
}
