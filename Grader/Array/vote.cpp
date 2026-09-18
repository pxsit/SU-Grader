#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, x, mx = 0, w;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = 0;
    }
    for (int i = 0; i < k; i++) {
        cin >> x;
        v[x - 1]++;
    }

    for (int i = 0; i < n; i++) {
        if (v[i] > mx) {
            mx = v[i];
            w = i + 1;
        }
    }
    cout << w << '\n';
    cout << mx << '\n';
}
