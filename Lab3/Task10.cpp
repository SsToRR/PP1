#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, sum = 0;
    string s;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s;

        for(int j = 0; j < s.size(); j++)
            if(s[j] == '0') sum++;
    }

    cout << sum << endl;

    return 0;
}