#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0) return false;
    } return true;
}

int main(){

    int a;

    cin >> a;

    if(isPrime(a)) cout << "Yes";

    else cout << "No";

    return 0;
}

