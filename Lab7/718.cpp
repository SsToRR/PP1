#include <bits/stdc++.h>
using namespace std;

void decToHex(int n){
    string ans, s = "0123456789ABCDEF";
    while(n){
        ans += (s[n % 16]);
        n /= 16;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}

int main() {

    int n;

    cin >> n;

    decToHex(n);

    return 0;
}
