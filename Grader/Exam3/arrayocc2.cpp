#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, x;
    cin >> n >> m;
    vector<int> a(n + 1);
    for (int i = 0; i < m; i++) {
        cin >> x;
        if (x >= 1 && x <= n)
            a[x]++;
    }

    int mx = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0)
            cnt++;
        else
            cnt = 0;
        if (cnt > mx)
            mx = cnt;
    }
    cout << mx << '\n';

    cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            cnt++;
            if (cnt == mx)
                cout << i << ' ';
        } else {
            cnt = 0;
        }
    }
}
