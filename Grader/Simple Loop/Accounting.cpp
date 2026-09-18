#include <bits/stdc++.h>
using namespace std;
int main() {
    int in = 0, en = 0, iv, ev, ti = 0, te = 0, n = 1;
    while (n != 0) {
        cin >> n;
        if (n == 1) {
            in++;
            cin >> iv;
            ti += iv;
        } else if (n == 2) {
            en++;
            cin >> ev;
            te += ev;
        }
    }
    cout << in << ' ' << en << '\n'
         << ti << ' ' << te << ' ' << ti - te;
}
