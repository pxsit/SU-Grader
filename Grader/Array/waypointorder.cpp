#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, r, c;
    cin >> r >> c;
    vector<vector<int>> v(r, vector<int>(c));
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        v[a - 1][b - 1] = i;
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}
