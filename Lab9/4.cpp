#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n, k, cnt = 0, x;

    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x == k) cnt++;
    }
    cout << cnt;

    return 0;
}

