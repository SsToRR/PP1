#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    for(int i = 1, power = 1; i <= n; i++, power *= 2){
        if(n == power){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}