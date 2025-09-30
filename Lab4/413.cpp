#include <bits/stdc++.h>
using namespace std;

long long n, k, a[100005];

int main() {

    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    if(k < a[1]) cout << 0;
    else if(k > a[n]) cout << n;
    else {
        for(int i = 1; i <= n; i++){
            if(a[i] == k){
                cout << i;
                return 0;
            } 
            else if(k > a[i-1] && k < a[i]){
                cout << i - 1;
                return 0;
            }
        }
    }

    return 0;
}