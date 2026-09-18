#include <bits/stdc++.h>
using namespace std;
int main() {
    int col, row;
    cin >> row >> col;
    int numstone[col + 5];
    char table[row + 5][col + 5];
    for (int i = 0; i < row; i++) {
        cin >> table[i];
    }
    for (int i = 0; i < col; i++) {
        cin >> numstone[i];
    }
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
        again:;

            if (numstone[i] <= 0) {
                goto restart;
            }
            if (table[j][i] == 'O' || table[j][i] == '#') {
                goto restart;
            }
            if (table[j + 1][i] == 'O' || table[j + 1][i] == '#' || j == row - 1) {
                table[j][i] = '#';
                numstone[i]--;
                if (j > 0) {
                    j--;
                }
                goto again;
            }
        }
    restart:;
    }
    cout << '\n';
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << table[i][j];
        }
        cout << '\n';
    }
}
