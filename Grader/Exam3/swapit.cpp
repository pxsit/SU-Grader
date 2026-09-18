#include <bits/stdc++.h>
using namespace std;
bool isInvalidMove(int x, int y, int d) {
    if (d == 0 && x == 1)
        return true;
    else if (d == 1 && y == 1)
        return true;
    else if (d == 2 && x == 8)
        return true;
    else if (d == 3 && y == 8)
        return true;
    else
        return false;
}

void makeAMove(int x, int y, int d, int b[9][9]) {
    if (isInvalidMove(x, y, d))
        return;

    int t = b[y][x];
    if (d == 0) {
        b[y][x] = b[y][x - 1];
        b[y][x - 1] = t;
    } else if (d == 1) {
        b[y][x] = b[y - 1][x];
        b[y - 1][x] = t;
    } else if (d == 2) {
        b[y][x] = b[y][x + 1];
        b[y][x + 1] = t;
    } else if (d == 3) {
        b[y][x] = b[y + 1][x];
        b[y + 1][x] = t;
    }
}

int countHorizontal(int x, int y, int b[9][9]) {
    int cnt = 1;
    int t = b[y][x];
    int xx = x - 1;
    while (xx >= 1 && b[y][xx] == t) {
        cnt++;
        xx--;
    }
    xx = x + 1;
    while (xx <= 8 && b[y][xx] == t) {
        cnt++;
        xx++;
    }
    return cnt;
}

int countVertical(int x, int y, int b[9][9]) {
    int cnt = 1;
    int t = b[y][x];
    int yy = y - 1;
    while (yy >= 1 && b[yy][x] == t) {
        cnt++;
        yy--;
    }
    yy = y + 1;
    while (yy <= 8 && b[yy][x] == t) {
        cnt++;
        yy++;
    }
    return cnt;
}

int main() {
    int b[9][9];
    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
            cin >> b[i][j];

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y, d;
        cin >> x >> y >> d;
        makeAMove(x, y, d, b);
        cout << "H " << countHorizontal(x, y, b) << " V " << countVertical(x, y, b) << '\n';
    }
}
