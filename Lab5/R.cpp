#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    long long a[1005][1005];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    long long sum = 0;

    cout << "coordinates of min elements:\n";

    for (int j = 0; j < m; j++) {
        long long mn = a[0][j];
        int row = 0;

        for (int i = 1; i < n; i++) {
            if (a[i][j] < mn) {
                mn = a[i][j];
                row = i;
            }
        }

        cout << row + 1 << ";" << j + 1 << "\n";
        sum += mn;
    }

    cout << '\n';
    cout << "Their sum:\n" << sum << "\n";

    return 0;
}
