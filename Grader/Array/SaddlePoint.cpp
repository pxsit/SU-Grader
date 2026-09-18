#include <bits/stdc++.h>
using namespace std;
int main() {
    int r, c;
    int ar = 0, ac = 0;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> xr(r), nr(r), xc(c), nc(c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (j == 0 || a[i][j] > xr[i]) {
                xr[i] = a[i][j];
            }
            if (j == 0 || a[i][j] < nr[i]) {
                nr[i] = a[i][j];
            }
        }
    }
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            if (j == 0 || a[j][i] > xc[i]) {
                xc[i] = a[j][i];
            }
            if (j == 0 || a[j][i] < nc[i]) {
                nc[i] = a[j][i];
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == xr[i] && a[i][j] == nc[j]) {
                cout << "(" << i << ", " << j << ") = " << a[i][j] << '\n';
                ar = 1;
            }
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == xc[j] && a[i][j] == nr[i]) {
                cout << "(" << i << ", " << j << ") = " << a[i][j] << '\n';
                ac = 1;
            }
        }
    }
    if (ar == 0 && ac == 0) {
        cout << "None";
    }
}
