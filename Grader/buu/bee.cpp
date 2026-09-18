#include <bits/stdc++.h>
using namespace std;
int main() {
    int q = 1, w = 1, s = 0;
    int tq = 1;
    int tw = 1;
    int ts = 0;
    int n;
    int nw = 0;
    int nq = 0;
    int ns = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        w += nw;
        s += ns;
        q += nq;
        nw = 0;
        ns = 0;
        nq = 0;
        if ((i + 1) % 12 == 0) {

        } else {
            if (w >= 1) {
                tw += w;
                ts += w;
                ns += w;
                nw += w;
                w = 0;
            }
            if (s >= 1) {
                tw += s;
                w += s;
                s = 0;
            }
        }
    }
    cout << tw + ts + tq << ' ' << tq << ' ' << tw << ' ' << ts;
}