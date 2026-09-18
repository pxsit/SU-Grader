#include <bits/stdc++.h>
using namespace std;
struct olym {
    int country;
    int gold;
    int silv;
    int bron;
};

int main() {
    int n;
    cin >> n;
    vector<olym> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i].country >> c[i].gold >> c[i].silv >> c[i].bron;
    }

    for (int t = 0; t < 100; t++) {
        int code;
        cin >> code;
        int cid = -1;
        for (int i = 0; i < n; i++) {
            if (code == c[i].country)
                cid = i;
        }
        if (code == 1001) {
            int mG = 0;
            for (int i = 0; i < n; i++) {
                if (mG < c[i].gold) {
                    mG = c[i].gold;
                }
            }
            for (int i = 0; i < n; i++) {
                if (c[i].gold == mG) {
                    cout << c[i].country << ' ';
                }
            }
        } else if (code == 1002) {
            int mG = 0;
            for (int i = 0; i < n; i++) {
                if (mG < c[i].silv) {
                    mG = c[i].silv;
                }
            }
            for (int i = 0; i < n; i++) {
                if (c[i].silv == mG) {
                    cout << c[i].country << ' ';
                }
            }
        } else if (code == 1003) {
            int mG = 0;
            for (int i = 0; i < n; i++) {
                if (mG < c[i].bron) {
                    mG = c[i].bron;
                }
            }
            for (int i = 0; i < n; i++) {
                if (c[i].bron == mG) {
                    cout << c[i].country << ' ';
                }
            }
        } else if (code == 2000) {
            int mG = 0;
            for (int i = 0; i < n; i++) {
                if (mG < c[i].gold + c[i].silv + c[i].bron) {
                    mG = c[i].gold + c[i].silv + c[i].bron;
                }
            }
            for (int i = 0; i < n; i++) {
                if (c[i].gold + c[i].silv + c[i].bron == mG) {
                    cout << c[i].country << ' ';
                }
            }
        } else if (code == 3000) {
            for (int i = 0; i < n; i++) {
                if (c[i].gold + c[i].silv + c[i].bron > 0) {
                    cout << c[i].country << ' ';
                }
            }
        } else if (code < -1) {
            cout << "good bye";
            break;
        } else if (cid != -1) {
            cout << c[cid].gold << ' ' << c[cid].silv << ' ' << c[cid].bron << ' ' << c[cid].gold + c[cid].silv + c[cid].bron;
        } else {
            cout << "invalid code";
        }
        cout << '\n';
    }
}
