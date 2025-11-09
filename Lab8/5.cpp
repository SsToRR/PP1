#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, q, l, r;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    cin >> q;

    while(q--){

        cin >> l >> r;

        int cnt = 0, mx = 0;

        for(int i = l; i <= r; i++)
            if(v[i] > mx){
                cnt++;
                mx = v[i];
            }


        cout << cnt << endl;
    }

}
