#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> m(n);
    int h = 0, b = 0, a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > h)
            h = a;
        b += (a * 2);
        m[i] = a;
    }

    vector<vector<int>> map(h, vector<int>(b));

    int x = 0;
    for (int i = 0; i < n; i++) {
        for (int y = 0; y < m[i]; y++) {
            map[h - y - 1][x] = 1;
            x++;
        }
        for (int y = m[i] - 1; y >= 0; y--) {
            map[h - y - 1][x] = -1;
            x++;
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < b; j++) {
            if (map[i][j] == 1)
                cout << "/";
            else if (map[i][j] == -1)
                cout << "\\";
            else
                cout << "-";
        }
        cout << '\n';
    }
}
