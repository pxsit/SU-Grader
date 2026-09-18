#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> c >> d;
    int array[c][d];
    int n;
    cin >> n;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            array[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        array[a - 1][b - 1] = i;
    }
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            cout << array[i][j] << ' ';
        }
        cout << '\n';
    }
}