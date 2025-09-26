#include <bits/stdc++.h>

using namespace std;

int main() {

    int a;

    cin >> a;

    //Replace bits with the opposite bits

    string s;

    while(a > 0) {
        s += to_string(a % 2);
        a /= 2;
    }
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') {
            s[i] = '1';
        }
        else {
            s[i] = '0';
        }
    }
    
    int b = 0;

    for(int i = 0; i < s.size(); i++){
        b += (s[i] - '0') * pow(2, i);
    }

    cout << b << endl;

    return 0;
}