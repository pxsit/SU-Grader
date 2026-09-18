#include <bits/stdc++.h>
using namespace std;
int main() {
    int sum, n, k;
    int all = 0, minus = 0, stamp = 0;
    vector<vector<int>> s(3, vector<int>(2));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> s[i][j];
        }
    }
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        all += b;
        for (int j = 0; j < 3; j++) {
            if (a == s[j][0]) {
                stamp += s[j][1];
                minus += b;
            }
        }
    }
    sum = all - minus;
    stamp += (sum / k);
    cout << all << '\n'
         << sum << '\n'
         << stamp;
}
