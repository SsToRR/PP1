#include <bits/stdc++.h>
using namespace std;

int main() {

    string s, t;
    getline(cin, s);


    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            bool ok = 1;
            for(int j = 0; j < t.size(); j++){
                if(t[j] >= '0' && t[j] <= '9') ok = 0;
            }
            if(ok) cout << t << '\n';
            t = "";
        } else {
            t += s[i];
        }
    }
    bool ok = 1;
    for(int j = 0; j < t.size(); j++){
        if(t[j] >= '0' && t[j] <= '9') ok = 0;
    }
    if(ok) cout << t << '\n';
}