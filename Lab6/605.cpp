#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int cnt_l = 0, cnt_u = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == tolower(s[i]))
            cnt_l++;
        else   
            cnt_u++;
    }
    cout << cnt_l << " " << cnt_u;
}