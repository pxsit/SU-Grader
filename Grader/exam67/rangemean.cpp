#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    typedef long long ll;
    ll sum = 0, mx, mn;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        sum += x;
        if (i == 0) {
            mx = x;
            mn = x;
        }
        if (x > mx) {
            mx = x;
        }
        if (x < mn) {
            mn = x;
        }
    }
    cout << mx - mn << ' ' << (double)sum / n;
}
