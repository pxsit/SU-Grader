#include <bits/stdc++.h>
using namespace std;
int main() {
    int row, col;
    int ifrow = 0;
    int ifcol = 0;
    cin >> row >> col;
    int num[row + 1][col + 1];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> num[i][j];
        }
    }

    int maxrow[1000], minrow[1000], maxcol[1000], mincol[1000];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j == 0 || num[i][j] > maxrow[i]) {
                maxrow[i] = num[i][j];
            }
            if (j == 0 || num[i][j] < minrow[i]) {
                minrow[i] = num[i][j];
            }
        }
    }
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            if (j == 0 || num[j][i] > maxcol[i]) {
                maxcol[i] = num[j][i];
            }
            if (j == 0 || num[j][i] < mincol[i]) {
                mincol[i] = num[j][i];
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (num[i][j] == maxrow[i] && num[i][j] == mincol[j]) {
                cout << "(" << i << ", " << j << ") = " << num[i][j] << '\n';
                ifrow = 1;
            }
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (num[i][j] == maxcol[j] && num[i][j] == minrow[i]) {
                cout << "(" << i << ", " << j << ") = " << num[i][j] << '\n';
                ifcol = 1;
            }
        }
    }
    if (ifrow == 0 && ifcol == 0) {
        cout << "None";
    }
}
