#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int cy, cm, cd, ch, cmi, cs, n;
    vector<int> month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> cy >> cm >> cd >> ch >> cmi >> cs;
    cin >> n;
    vector<int> y(n), m(n), d(n), h(n), mi(n), s(n), mc(n);
    vector<ll> dd(n);
    vector<unsigned long long> ss(n);
    int leap = 0;
    for (int i = 0; i < n; i++) {
        cin >> y[i] >> m[i] >> d[i] >> h[i] >> mi[i] >> s[i];
    }
    for (int i = 0; i < n; i++) {
        if (cm < m[i]) {
            mc[i] = (cy - y[i]) * 12 - (m[i] - cm);
        } else {
            mc[i] = (cy - y[i]) * 12 + (cm - m[i]);
        }
        dd[i] = 0;
        for (int j = 0; j < mc[i]; j++) {
            int mnum = ((m[i] + j) % 12) - 1;
            if (mnum == -1)
                mnum = 11;
            dd[i] += month[mnum];
        }
        if (d[i] > cd) {
            dd[i] -= (d[i] - cd);
        } else {
            dd[i] += (cd - d[i]);
        }
        for (int j = 0; j < cy - y[i]; j++) {
            if ((y[i] + j) % 4 == 0 && (y[i] + j) % 100 != 0 || (y[i] + j) % 400 == 0) {
                leap = 1;
            } else {
                leap = 0;
            }
            dd[i] += (leap ? 1 : 0);
        }
        if ((cy % 4 == 0 && cy % 100 != 0 || cy % 400 == 0) && cm > 2 && (m[i] < 3 && d[i] != 29 || y[i] != cy)) {
            dd[i] += 1;
        }
        ss[i] = dd[i] * 86400LL;
        ss[i] += (ch * 3600 + cmi * 60 + cs) - (h[i] * 3600 + mi[i] * 60 + s[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << ss[i] << '\n';
    }
}
