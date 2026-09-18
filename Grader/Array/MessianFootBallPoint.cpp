#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<char>> r(n, vector<char>(39));
    vector<int> o(n), ns(n), ms(n), w(n), l(n), d(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 39; j++) {
            cin >> r[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 39; j++) {
            if (r[i][j] == 'W') {
                o[i] += 2;
                w[i]++;
            } else if (r[i][j] == 'D') {
                o[i]++;
                d[i]++;
            } else if (r[i][j] == 'L') {
                l[i]++;
            }
            if (r[i][j] == 'W') {
                ns[i] += 3;
            } else if (r[i][j] == 'D') {
                ns[i]++;
            }
            if (r[i][j] == 'W') {
                ms[i] += 5;
            } else if (r[i][j] == 'D') {
                ms[i]++;
            } else if (r[i][j] == 'L') {
                ms[i]--;
            }
        }

    }

    for (int i = 0; i < n; i++) {
        cout << w[i] << ' ' << d[i] << ' ' << l[i] << ' ' << o[i] << ' ' << ns[i] << ' ' << ms[i] << '\n';
    }
}
