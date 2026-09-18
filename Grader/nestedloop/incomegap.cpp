#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(5, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[j][i];
        }
    }

    int mx = 0, mn = INT_MAX;
    for (int j = 0; j < n; j++) {
        int x = a[0][j], y = a[0][j];

        for (int i = 1; i < 5; i++) {
            if (a[i][j] > x) {
                x = a[i][j];
            } else if (a[i][j] < y) {
                y = a[i][j];
            }
        }

        int d = x - y;
        if (d > mx) {
            mx = d;
        }
        if (d < mn) {
            mn = d;
        }
    }

    cout << mx << ' ' << mn << ' ' << mx - mn << '\n';
}
