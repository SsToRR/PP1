#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    bool is = true;
    for(int i = 0, j = 0; i < b.size(); i++, j++){
        if(a[j] != b[i] || (i == b.size() - 1 && j != a.size() - 1)){
            is = false;
        }

        if(j == a.size() - 1){
            j = -1;
        }
    }
    if(is)
        cout << "YES";
    else   
        cout << "NO";
}