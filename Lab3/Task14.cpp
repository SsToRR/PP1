#include <bits/stdc++.h>

using namespace std;

int main() {

    int sum_even = 0, sum_odd = 0;

    string s;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0) sum_even += (s[i] - '0');
        else sum_odd += (s[i] - '0');
    }

    cout << abs(sum_odd - sum_even) << endl;

    return 0;
}