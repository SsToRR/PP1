#include <bits/stdc++.h>
using namespace std;

bool check(string s, int n){
    int sum = 0, mx = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9') sum++;
        else mx = max(mx, sum), sum = 0;
    }
    if(mx >= n) return true;
    return false;
}

int main() {

    string s;
    int n;

    cin >> s >> n;

    if(check(s, n)) cout << "YES";
    else cout << "NO";

    return 0;
}
