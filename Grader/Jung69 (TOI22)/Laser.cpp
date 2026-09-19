#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz size_t
const int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];
    vector<unsigned char> vis((sz)n * (sz)m * 8, 0);
    for (int vx = 0; vx < n; ++vx) {
        for (int vy = 0; vy < m; ++vy) {
            if (grid[vx][vy] != 'X')
                continue;
            for (int i = 0; i < 8; i++) {
                int x = vx, y = vy;
                int cur = i;
                while (true) {
                    int nx = x + dx[cur], ny = y + dy[cur];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        break;
                    char c = grid[nx][ny];
                    if (c == '#')
                        break;
                    sz id = ((sz)nx * (sz)m + (sz)ny) * 8 + (sz)cur;
                    if (vis[id])
                        break;
                    vis[id] = 1;
                    if (c == '.')
                        grid[nx][ny] = '*';
                    else if (c == '/' || c == '\\') {
                        if (cur & 1) {
                            cur = (cur + 4) % 8;
                        } else {
                            if (c == '/') {
                                if (cur == 0)
                                    cur = 2;
                                else if (cur == 2)
                                    cur = 0;
                                else if (cur == 4)
                                    cur = 6;
                                else if (cur == 6)
                                    cur = 4;
                            } else {
                                if (cur == 0)
                                    cur = 6;
                                else if (cur == 6)
                                    cur = 0;
                                else if (cur == 4)
                                    cur = 2;
                                else if (cur == 2)
                                    cur = 4;
                            }
                        }
                    }
                    x = nx;
                    y = ny;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << grid[i] << '\n';
}