#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, x;
    cin >> n >> m;
    vector<int> a(n + 1);
    int cnt = 0;
    int out = 0;
    int dup = 0;
    for (int i = 0; i < m; i++) {
        cin >> x;
        if (x < 1 || x > n)
            out++;
        else {
            if (a[x] > 0)
                dup++;
            else
                cnt++;
            a[x]++;
        }
    }
    cout << cnt << '\n'
         << out << '\n'
         << dup << '\n';
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] > mx)
            mx = a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] == mx)
            cout << i << ' ';
    }
}
