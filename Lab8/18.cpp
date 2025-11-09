#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; string s;
    map<string, int> mp;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s;
        if(!mp[s]) mp[s] = i;
    }
    for(auto it : mp) cout << it.first << ' ' << it.second << endl;

}
