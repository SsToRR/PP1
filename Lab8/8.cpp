//solved by deuterium
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    vector<int> minutes(1440, 0);

    for (int k = 0; k < n; k++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int start = a * 60 + b;
        int end = c * 60 + d;

        if(start < end){
            for(int i = start; i < end; i++){
                minutes[i]++;
            }
        } else {
            for(int i = start; i < 1440; i++){
                minutes[i]++;
            }
            for(int i = 0; i < end; i++){
                minutes[i]++;
            }
        }
    }

    int result = 0;
    for(int i = 0; i < 1440; i++){
        if(minutes[i] == n){
            result++;
        }
    }

    cout << result << endl;
}
