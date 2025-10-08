#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long a[10001][10001];

    long long val = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // left -> right
        for (int j = left; j <= right; ++j) a[top][j] = val++;
        ++top;

        // top -> bottom
        for (int i = top; i <= bottom; ++i) a[i][right] = val++;
        --right;

        // right -> left
        if (top <= bottom) {
            for (int j = right; j >= left; --j) a[bottom][j] = val++;
            --bottom;
        }

        // bottom -> top
        if (left <= right) {
            for (int i = bottom; i >= top; --i) a[i][left] = val++;
            ++left;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
