#include <bits/stdc++.h>
using namespace std;
void printmap(const vector<vector<char>> &a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    int n, np;
    cin >> n;
    cin >> np;
    vector<vector<int>> p(np, vector<int>(2));
    for (int i = 0; i < np; i++) {
        cin >> p[i][0] >> p[i][1];
    }

    for (int i = 0; i < np; i++) {
        if (p[i][0] < 0 || p[i][0] >= n || p[i][1] < 0 || p[i][1] >= n) {
            cout << "Out of range" << '\n';
        }
    }

    vector<vector<char>> a(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = '_';
        }
    }

    char c = 'A';
    for (int i = 0; i < np - 1; i++) {
        int r1 = p[i][0];
        int c1 = p[i][1];
        int r2 = p[i + 1][0];
        int c2 = p[i + 1][1];

        a[r1][c1] = c;

        if (r1 != r2 && c1 != c2) {
            if (c1 < c2) {
                for (int j = c1 + 1; j <= c2 - 1; j++) {
                    a[r1][j] = '>';
                }
                a[r1][c2] = (r1 < r2) ? 'v' : '^';
            } else {
                for (int j = c1 - 1; j >= c2 + 1; j--) {
                    a[r1][j] = '<';
                }
                a[r1][c2] = (r1 < r2) ? 'v' : '^';
            }
            if (r1 < r2) {
                for (int j = r1 + 1; j < r2; j++) {
                    a[j][c2] = 'v';
                }
            } else {
                for (int j = r1 - 1; j > r2; j--) {
                    a[j][c2] = '^';
                }
            }
        } else {
            if (r1 == r2) {
                if (c1 < c2) {
                    for (int j = c1 + 1; j <= c2; j++) {
                        a[r1][j] = '>';
                    }
                } else {
                    for (int j = c1 - 1; j >= c2; j--) {
                        a[r1][j] = '<';
                    }
                }
            } else {
                if (r1 < r2) {
                    for (int j = r1 + 1; j <= r2; j++) {
                        a[j][c1] = 'v';
                    }
                } else {
                    for (int j = r1 - 1; j >= r2; j--) {
                        a[j][c1] = '^';
                    }
                }
            }
        }

        c++;
    }

    a[p[np - 1][0]][p[np - 1][1]] = c;
    printmap(a, n);
}
