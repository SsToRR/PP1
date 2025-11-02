#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    string s;

    cin >>n;

    for(int i = 0; i < n; i++){
        cin >> s;
        if(s.size() >= 10 && s.substr(s.size()-10, 10) == "@gmail.com") cout << s.substr(0, s.size()-10) << '\n';
    }
}