#include <bits/stdc++.h>
using namespace std;

int sum(int cnt1[], int cnt2[], int n){

    int ans = 0;

    for(int i = 1; i <= 100; i++) ans += min(cnt1[i], cnt2[i]);

    return ans;
}

int n, cnt1[105], cnt2[105], x;

int main(){


    cin >> n;

    for(int i = 1; i <= n; i++) cin >> x, cnt1[x]++;
    for(int i = 1; i <= n; i++) cin >> x, cnt2[x]++;

    cout << sum(cnt1, cnt2, n);

    return 0;
}


