#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> dpm = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cnt = 0;
    int d1, m1, d2, m2;
    int m;
    cin >> d1 >> m1 >> d2 >> m2;

    if ((d1 > dpm[m1 - 1]) || (d2 > dpm[m2 - 1]) || (m1 > m2)) {
        cout << "error" << '\n';
    } else {
        m = m1;
        for (m = m1; m < m2; m++) {
            cnt += dpm[m - 1] - d1 + 1;
            d1 = 1;
        }
        cnt += d2 - d1 + 1;
        cout << cnt << '\n';
    }
}
