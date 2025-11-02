#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char ch;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] > ch){
            ch = s[i];
        }
    }
    cout << ch;
}