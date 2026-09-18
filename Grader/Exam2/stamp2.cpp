#include <bits/stdc++.h>
using namespace std;
int main() {
    int sum, n, k;
    int id1, id2, id3;
    int v1, v2, v3;
    int t1, t2, t3;
    int all = 0, sub = 0, stamp = 0;
    cin >> id1;
    cin >> t1;
    cin >> v1;
    cin >> id2;
    cin >> t2;
    cin >> v2;
    cin >> id3;
    cin >> t3;
    cin >> v3;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        all += b;
        if (a == id1) {
            if (t1 == 1) {
                stamp += v1;
            } else {
                sub -= v1;
                all -= v1;
            }
            sub += b;
        } else if (a == id2) {
            if (t2 == 1) {
                stamp += v2;
            } else {
                sub -= v2;
                all -= v2;
            }
            sub += b;
        } else if (a == id3) {
            if (t3 == 1) {
                stamp += v3;
            } else {
                sub -= v3;
                all -= v3;
            }
            sub += b;
        }
    }
    sum = all - sub;
    stamp += (sum / k);
    cout << all << '\n'
         << sum << '\n'
         << stamp;
}
