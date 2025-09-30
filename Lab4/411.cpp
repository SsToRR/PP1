#include <bits/stdc++.h>
using namespace std;

int n, m, a[100005], cnt[100005];

int main() {

    cin >> n;

    for(int i = 1; i <= n; i++) cin >> a[i];

    cin >> m;

    for(int i = n + 1; i <= n + m; i++) cin >> a[i];

    sort(a + 1, a + 1 + n + m);

    for(int i = 1; i <= n + m; i++) cout << a[i] << ' ';

    return 0;
}