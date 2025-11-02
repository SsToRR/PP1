#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    int cnt = 1, ans = 1;
    char c;

    cin >> s;

    c = s[0];

    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]){
            cnt++;
        } else {
            if(cnt > ans){
                ans = cnt;
                c = s[i - 1];
            }
            cnt = 1;
        }
    }
    if(cnt > ans){
        ans = cnt;
        c = s[s.size() - 1];
    }
    cout << c << ' ' << ans;
}