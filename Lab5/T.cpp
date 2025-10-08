#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long a[1001][1001];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    long long mx_best_throw = -1, mx_sum = 0, id;

    for (int i = 0; i < n; i++) {
        long long best_throw = a[i][0];
        long long sum = 0;

        for (int j = 0; j < m; j++) {
            if (a[i][j] > best_throw) {
                best_throw = a[i][j];
            }
            sum += a[i][j];
        }
        if (best_throw > mx_best_throw) {
            mx_best_throw = best_throw;
            mx_sum = sum;
            id = i;
        } else if (best_throw == mx_best_throw) {
            if (sum > mx_sum) {
                mx_sum = sum;
                id = i;
            } else if (sum == mx_sum) {
                if (i < id) {
                    id = i;
                }
            }
        }
    }

    cout << id << endl;
    return 0;
}