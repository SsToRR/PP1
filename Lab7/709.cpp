#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n){

    for(int i = n; i >= 1; i--){
        cout << a[i] << ' ';
    }

}

int main(){

    int n, a[100005];

    cin >> n;

    for(int i = 1; i <= n; i++) cin >> a[i];

    solve(a, n);

    return 0;
}

