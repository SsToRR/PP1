#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            continue;
        cout << c;
    }
}