#include <bits/stdc++.h>
using namespace std;

long long n, a[1001], mx = INT_MIN;

int main() {

    cin >> n;

    if(sqrt(n) * sqrt(n) == n) cout << "Yes";
    else cout << "No";

    return 0;
}