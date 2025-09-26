#include <bits/stdc++.h>

using namespace std;

int main() {

    int sum_even = 0, sum_odd = 0;

    string s;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if((s[i] - '0') % 2 == 0) sum_even += (s[i] - '0');
        else sum_odd += (s[i] - '0');
    }

    if(sum_even == sum_odd) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}