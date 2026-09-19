#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<int, int>> seg[8];
int main() {
    seg[0] = {{0, 0}, {0, 1}, {0, 2}};
    seg[1] = {{0, 2}, {1, 2}, {2, 2}};
    seg[2] = {{2, 2}, {3, 2}, {4, 2}};
    seg[3] = {{4, 0}, {4, 1}, {4, 2}};
    seg[4] = {{2, 0}, {3, 0}, {4, 0}};
    seg[5] = {{0, 0}, {1, 0}, {2, 0}};
    seg[6] = {{2, 0}, {2, 1}, {2, 2}};
    seg[7] = {{4, 3}};

    int n, m, q;
    cin >> n >> m >> q;
    vector<string> grid(n, string(m, '.'));

    while (q--) {
        int x, y, s, v;
        cin >> x >> y >> s >> v;
        for (int bit = 0; bit < 8; bit++) {
            if (((v >> bit) & 1) == 0)
                continue;
            char ch = (bit == 7 ? '@' : '#');
            for (auto [nx, ny] : seg[bit]) {
                for (int i = 0; i < s; i++) {
                    for (int j = 0; j < s; j++) {
                        int r = x + nx * s + i,c = y + ny * s + j;
                        if (0 <= r && r < n && 0 <= c && c < m)
                            grid[r][c] = ch;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << grid[i] << '\n';
}