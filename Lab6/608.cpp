#include <bits/stdc++.h>
using namespace std;

bool isPal(string s) {
    for(int i = 0, j = s.size() - 1; i < s.size(), j >= 0; i++, j--){
        if(s[i] != s[j]){
            return false;
        }
    }
    return true;
}

bool check(string s) {
    for (int i = 0; i <= s.size(); ++i) {
        for (char c = 'a'; c <= 'z'; ++c) {
            string temp = s;
            temp.insert(i, 1, c);
            if (isPal(temp)) 
                return true;
        }
    }
    return false;
}

int main() {
    string s;
    cin >> s;

    if (check(s))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}