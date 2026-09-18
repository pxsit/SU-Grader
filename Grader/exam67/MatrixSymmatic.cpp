#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    int InputArray[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            InputArray[i][j] = 7;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cin >> InputArray[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << "0 ";
            } else if (j > i) {
                cout << InputArray[j][i] << ' ';
            } else {
                cout << InputArray[i][j] << ' ';
            }
        }
        cout << '\n';
    }
}