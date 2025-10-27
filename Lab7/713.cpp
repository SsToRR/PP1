#include <bits/stdc++.h>
using namespace std;

int solve(int x, int a[]){

    bool used[1001] = {false};

    for (int i = 1; i <= 1000; i++)
        if (a[i] >= 1 && a[i] <= 1000)
            used[a[i]] = true;

    int cnt = 0;
    for (int i = 1; i <= 1000; i++) {
        if (!used[i]) cnt++;
        if (cnt == x) {
            return i;
        }
    }

    return -1;
}

int a[1005], cur = 1;
int x;

int main() {

    string s;
    getline(cin, s);
    stringstream ss(s);

    int num;
    while (ss >> num) a[cur++] = num;

    cin >> x;

    cout << solve(x, a);

    return 0;
}
