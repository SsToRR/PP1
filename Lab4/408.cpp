#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a[100005];

    cin >> n;

    for(int i = 1; i <= n; i++) cin >> a[i];

    sort(a + 1, a + 1 + n);
    reverse(a + 1, a + 1 + n);
    
    for(int i = 1; i <= n; i++) cout << a[i] << ' ';

    return 0;
}