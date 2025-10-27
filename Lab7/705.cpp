#include <bits/stdc++.h>
using namespace std;

bool isUsual(int num){
    while(true){
        if(num % 2 == 0){
            num /= 2;
            continue;
        } else if(num % 3 == 0){
            num /= 3;
            continue;
        } else if(num % 5 == 0){
            num /= 5;
            continue;
        } else break;
    }
    if(num == 1) return true;
    else return false;
}

int main(){

    int n;

    cin >> n;

    if(isUsual(n)) cout << "Yes";
    else cout << "No";

    return 0;
}
