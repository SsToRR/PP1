//solution by deuterium
#include <iostream>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;

    map<string, string> mp;
    for(int i = 0; i < n; i++){
        string cmd; cin >> cmd;

        if(cmd == "set"){
            string key, value;
            cin >> key >> value;
            mp[key] = value;
        }
        else if(cmd == "get"){
            string key; cin >> key;

            if(mp.count(key)) cout << mp[key] << endl;
            else cout << "KE: no key " << key << " found in the document" << endl;

        }
    }
}
