#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    int cnt = 0, pos1 = -1, pos2 = -1, i = 0;
    char c;

    cin >> s >> c;

    for(char ch : s){
        if(ch == c){
            if(cnt == 0){
                pos1 = i;
                cnt++;
            } else {
                pos2 = i;
                cnt++;
            }
        }
        i++;
    }
    if(pos2 == -1) cout << pos1;
    else cout << pos1 << ' ' << pos2;
}