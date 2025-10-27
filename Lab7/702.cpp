#include <bits/stdc++.h>
using namespace std;

double hypotenuse(double a, double b){
    return sqrt(a*a + b*b);
}

int main(){

    double a, b;
    cin >> a >> b;
    cout.precision(4);
    cout << fixed << hypotenuse(a, b) << endl;
    return 0;
}
