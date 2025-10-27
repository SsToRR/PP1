#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    for(int i = 0; i < s.size(); i++){
        if((s[i] - '0') % 2 == 1) return false;
    }
    return true;
}

int main(){

    string s;

    cin >> s;

    if(check(s)) cout << "Valid";
    else cout << "Not valid";

    return 0;
}

