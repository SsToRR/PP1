#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;

    cin >> s;

    //binary to decimal

    int decimal = 0;
    for(int i = 0; i < s.size(); i++){
        decimal += (s[i] - '0') * pow(2, s.size() - i - 1);
    }
    cout << decimal << endl;

    return 0;
}