
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x, cnt = 0;
    map<string, int> mp;
    string s;

    cin >> n;

    while(n--){
        cin >> s;
        mp[s]++;
    }

    for(auto it : mp){
        if(it.second == 3) cnt++;
    }
    cout << cnt;

}
