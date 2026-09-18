#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<vector<int>> h(n, vector<int>(n));
    vector<array<int, 3>> p;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> h[i][j];
        }
    }

    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int peak = 1;
            for (int x = i - 1; x <= i + 1; x++) {
                for (int y = j - 1; y <= j + 1; y++) {
                    if ((x != i || y != j) && h[x][y] >= h[i][j]) {
                        peak = 0;
                        break;
                    }
                }
                if (!peak)
                    break;
            }
            if (peak) {
                p.push_back({h[i][j], i, j});
            }
        }
    }

    cout << p.size() << '\n';
    for (int i = 0; i < p.size(); i++) {
        cout << p[i][0] << ' ' << p[i][1] << ' ' << p[i][2] << '\n';
    }

}
