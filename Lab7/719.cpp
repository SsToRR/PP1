#include <bits/stdc++.h>
using namespace std;

char conversion(char c){
    c = tolower(c);
    if(c == 'p') return 'b';
    if(c == 'e') return 'i';
    return c;
}

bool check(string s, string t){

    for(int i = 0; i < s.size(); i++){
        s[i] = conversion(s[i]);
    }
    for(int i = 0; i < t.size(); i++){
        t[i] = conversion(t[i]);
    }
    if(s == t) return true;
    else return false;

}

int main() {

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        string s, t;
        cin >> s >> t;
        if(check(s, t)) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
