
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    map<int, int> mp;

    cin >> n;

    while(n--){
        cin >> x;
        mp[x]++;
    }
    map<int,int> :: iterator it = mp.begin();
    it++;
    cout << it->second;

}
