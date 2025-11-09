#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    int n;

    while(cin >> n) v.push_back(n);

    int mn = INT_MAX, mx = INT_MIN;

    for(int i = 0; i < v.size(); i++){
        if(v[i] < mn) mn = v[i];
        if(v[i] > mx) mx = v[i];
    }

    for(int i = 0; i < v.size(); i++)
        if(v[i] == mn) v[i] = mx;

    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}
