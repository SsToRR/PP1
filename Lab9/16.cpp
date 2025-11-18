


#include <bits/stdc++.h>
using namespace std;



int main(){

    int n, a[505];

    cin >> n;

    for(int i = 1; i <= n; i++) cin >> a[i];

    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(a[i] >= a[j]){
                a[i] -= a[j];
                break;
            }
        }
    }
    for(int i = 1; i <= n; i++) cout << a[i] << ' ';

    return 0;
}


