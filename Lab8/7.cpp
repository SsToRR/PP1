//solved by deuterium
#include <bits/stdc++.h>
using namespace std;

double GP(int total){

    if(total < 50) return 0.0;
    if(total <= 54) return 1.0;
    if(total <= 59) return 1.0 + 1.0/3;
    if(total <= 64) return 1.0 + 2.0/3;
    if(total <= 69) return 2.0;
    if(total <= 74) return 2.0 + 1.0/3;
    if(total <= 79) return 2.0 + 2.0/3;
    if(total <= 84) return 3.0;
    if(total <= 89) return 3.0 + 1.0/3;
    if(total <= 94) return 3.0 + 2.0/3;
    return 4.0;
}

int main(){

    int n; cin >> n;

    double totalGP = 0, totalCred = 0;

    for(int i = 0; i < n; i++){

        int att1, att2, final, credits;
        cin >> att1 >> att2 >> final >> credits;

        int sum = att1 + att2 + final;
        double gp = 0.0;

        if(att1 + att2 >= 30 && final >= 20) gp = GP(sum);

        totalGP += gp * credits;
        totalCred += credits;
    }

    cout << totalGP / totalCred << endl;
}
