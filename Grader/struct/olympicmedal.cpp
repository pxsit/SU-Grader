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
    struct olym c[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i].country >> c[i].gold >> c[i].silv >> c[i].bron;
    }

    for (int t = 0; t < 100; t++) {
        int code;
        cin >> code;
        int cId = -1;
        for (int i = 0; i < n; i++) {
            if (code == c[i].country)
                cId = i;
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
        } else if (cId != -1) {
            cout << c[cId].gold << ' ' << c[cId].silv << ' ' << c[cId].bron << ' ' << c[cId].gold + c[cId].silv + c[cId].bron;
        } else {
            cout << "invalid code";
        }
        cout << '\n';
    }
}