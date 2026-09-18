#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll md = 1000000;
vector<ll> b1(100), b2(100);
ll s1, s2;

void split(const vector<ll> &a, ll n, ll p, vector<ll> &a1, vector<ll> &a2, ll z1, ll z2, ll x1, ll x2) {
    if (p == n) {
        if ((z1 == n / 2 && z2 == n / 2) || (z1 == n / 2 + 1 && z2 == n / 2)) {
            ll d = abs(x1 - x2);
            if (d < md) {
                md = d;
                s1 = z1;
                s2 = z2;
                for (ll i = 0; i < z1; i++)
                    b1[i] = a1[i];
                for (ll i = 0; i < z2; i++)
                    b2[i] = a2[i];
            }
        }
        return;
    }

    if (z1 < n / 2 + 1) {
        a1[z1] = a[p];
        split(a, n, p + 1, a1, a2, z1 + 1, z2, x1 + a[p], x2);
    }

    if (z2 < n / 2) {
        a2[z2] = a[p];
        split(a, n, p + 1, a1, a2, z1, z2 + 1, x1, x2 + a[p]);
    }
}

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> a1(n), a2(n);
    split(a, n, 0, a1, a2, 0, 0, 0, 0);

    for (ll i = 0; i < s2; i++) {
        cout << b2[i];
        if (i < s2 - 1)
            cout << ' ';
    }
    cout << '\n';
    for (ll i = 0; i < s1; i++) {
        cout << b1[i];
        if (i < s1 - 1)
            cout << ' ';
    }
}
