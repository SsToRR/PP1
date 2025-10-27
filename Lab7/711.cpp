#include <bits/stdc++.h>
using namespace std;

int* createArray(int a[], int b[], int n){

    int* d = new int[100005];

    for(int i = 1; i <= n; i++) d[i] = abs(a[i] - b[i]);

    return d;

}

int main(){

    int n, a[100005], b[100005];

    cin >> n;

    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    int* d = createArray(a, b, n);

    for(int i = 1; i <= n; i++) cout << d[i] << ' ';

    return 0;
}

