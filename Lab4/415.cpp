#include <bits/stdc++.h>
using namespace std;

long long n, k, cnt[1005], max_cnt;

int main() {

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> k;
        cnt[k]++;
        max_cnt = max(max_cnt, cnt[k]);
    }

    for(int i = 1000; i >= 1; i--){
        if(cnt[k] == max_cnt) cout << k << ' ';
    }


    return 0;
}