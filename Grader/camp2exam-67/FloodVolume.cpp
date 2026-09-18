#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mx = 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > mx)
            mx = a[i];
    }

    vector<vector<int>> g(mx + 1, vector<int>(n + 1));
    for (int i = 0; i < mx + 1; i++) {
        for (int j = 0; j < n; j++) {
            g[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = a[i]; j >= 0; j--) {
            for (int k = 0; k < 1; k++) {
                g[j][i] = 1;
            }
        }
    }

    int l = a[0];
    int r = a[n - 1];
    int kl = 0;
    int kr = n - 1;

    for (int i = 0; i < n; i++) {
        if (l > r) {
            for (int j = r; j >= 0; j--) {
                for (int k = kr; k >= kl; k--) {
                    if (g[j][k] == 0) {
                        g[j][k] = 2;
                    }
                }
            }
            kr--;
            r = a[kr];
        } else {
            for (int j = l; j >= 0; j--) {
                for (int k = kl; k <= kr; k++) {
                    if (g[j][k] == 0) {
                        g[j][k] = 2;
                    }
                }
            }
            kl++;
            l = a[kl];
        }
    }
    int cnt = 0;
    for (int i = mx; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (g[i][j] == 2) {
                cnt++;
            }
        }
    }
    cout << cnt;
}
