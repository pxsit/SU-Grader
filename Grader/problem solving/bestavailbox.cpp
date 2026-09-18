#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int d, e, f;
    cin >> n;
    cin >> d >> e >> f;
    vector<int> box(n), a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
        if (a[i] <= 15 && b[i] <= 10 && c[i] <= 8) {
            if (d >= 1) {
                d--;
                box[i] = 1;
            } else {
                if (e >= 1) {
                    e--;
                    box[i] = 2;
                } else if (f >= 1) {
                    f--;
                    box[i] = 3;
                } else {
                    box[i] = 4;
                }
            }
        } else if (a[i] <= 25 && b[i] <= 15 && c[i] <= 12) {
            if (e >= 1) {
                e--;
                box[i] = 2;
            } else {
                if (f >= 1) {
                    f--;
                    box[i] = 3;
                } else {
                    box[i] = 4;
                }
            }
        } else if (a[i] <= 50 && b[i] <= 40 && c[i] <= 20) {
            if (f >= 1) {
                f--;
                box[i] = 3;
            } else {
                box[i] = 4;
            }
        } else {
            box[i] = 5;
        }
    }
    for (int i = 0; i < n; i++) {
        if (box[i] > 3) {
            if (box[i] == 5) {
                cout << "Oversize product" << '\n';
            } else if (box[i] == 4) {
                cout << "Box not available" << '\n';
            }
        } else {
            cout << box[i] << '\n';
        }
    }
}
