#include <bits/stdc++.h>
using namespace std;

int n, a[100005], cnt[100005];

int main() {


    cin >> n;

    for(int i = 1; i <= n; i++) cin >> a[i], cnt[a[i]]++;

    for(int i = 1; i <= 100001; i++) if(cnt[i]) cout << i << ' ';

    return 0;
}