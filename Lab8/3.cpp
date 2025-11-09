#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    int n;

    while(cin >> n && n != 0) {
        v.push_back(n);
    }

    int i = 0, j = v.size() - 1;

    while(i < j){
        cout << v[i] + v[j] << " ";
        i++;
        j--;
    }
    if(i == j) cout << v[i];
}
