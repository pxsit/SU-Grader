#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> primes() {
    const int mx = 100000;
    vector<bool> isp(mx + 1);
    vector<ll> p;

    for (int i = 2; i <= mx; i++) {
        if (!isp[i]) {
            p.push_back(i);
            for (int j = i * 2; j <= mx; j += i) {
                isp[j] = true;
            }
        }
    }
    return p;
}

int main() {
    int t;
    cin >> t;
    vector<ll> a(t);
    t -= 1;

    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }

    vector<ll> p = primes();

    for (int i = 0; i < t; i++) {
        ll lim = a[i];
        ll mn = 1e18;
        int found = 0;
        for (int j = 0; j < (int)p.size() && found == 0; j++) {
            for (int k = j + 1; k < (int)p.size(); k++) {
                ll prod = p[j] * p[k];
                if (j == k)
                    continue;
                if (prod <= mn && prod >= lim) {
                    mn = prod;
                }
                if (mn == lim) {
                    found = 1;
                    break;
                }
            }
        }
        cout << mn << '\n';
    }
    cout << "100001";
}
