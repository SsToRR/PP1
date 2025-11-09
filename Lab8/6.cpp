#include <bits/stdc++.h>
using namespace std;

int n, x, cnt[2005], mx;

int main(){

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x;
        cnt[x + 1000]++;
        mx = max(mx, cnt[x + 1000]);
    }

    for(int i = 0; i <= 2000; i++){
        if(cnt[i] == mx) {
            cout << i - 1000;
            return 0;
        }
    }

}
