#include <bits/stdc++.h>
using namespace std;

long long n, a[1001], mx = INT_MIN;

int main() {

    cin >> n;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}