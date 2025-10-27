#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, vector<vector<int>> a){

    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n + 1, vector<int>(m + 1));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    solve(n, m, a);

    return 0;
}
