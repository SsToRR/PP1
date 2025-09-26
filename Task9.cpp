#include <bits/stdc++.h>

using namespace std;

int main() {

    int a;

    cin >> a;

    //index of rightmost 1 in a

    cout << __builtin_ffs(a) - 1 << endl;

    return 0;
}