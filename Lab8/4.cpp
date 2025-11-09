#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> v, int n){

    int sum = 0;
    for(int i = 0; i < v.size(); i++) sum += v[i];

    int total = n * (n + 1) / 2;
    return total - sum;
}

int main(){

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    cout << missing(v, n) << endl;
}
