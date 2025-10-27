#include <bits/stdc++.h>
using namespace std;

bool check(int k, int n, int a[]){

    for(int i = 1; i <= n; i++){
        if(a[i] == k) return true;
    }
    return false;
}

int main(){

    int n, a[100005], k;

    cin >> n;

    for(int i = 1; i <= n; i++) cin >> a[i];

    cin >> k;

    if(check(k, n, a)) cout << "Yes";
    else cout << "No";

    return 0;
}

