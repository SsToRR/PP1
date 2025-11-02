#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;

    cin >> a;

    for(char c : a){
        if(c == 'z')
            c = 'a';
        else
            c = c + 1;
    }
    cout << a;
}