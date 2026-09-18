#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 7;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << "0 ";
            } else if (j > i) {
                cout << a[j][i] << ' ';
            } else {
                cout << a[i][j] << ' ';
            }
        }
        cout << '\n';
    }
}
