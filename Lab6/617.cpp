#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int sum = 0;

    for(char c : s){
        sum += c;
    }
    if(sum > 300) cout << "It is tasty!";
    else cout << "Oh, no!";
}