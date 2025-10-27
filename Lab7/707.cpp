
#include <bits/stdc++.h>
using namespace std;

double percentage(double a, double b){
    return b / a * 100;
}

int main(){

    double a, b;

    cin >> a >> b;

    cout.precision(4);
    cout << fixed << percentage(a, b);

    return 0;
}

