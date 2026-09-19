#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(a[i] - a[n / 2]);
    }
    cout << ans;
}