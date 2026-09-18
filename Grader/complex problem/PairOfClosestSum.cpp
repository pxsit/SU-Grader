#include <bits/stdc++.h>
using namespace std;
int diff(int w, int a, int b) {
    int d = w - a - b;
    if (d < 0) {
        d = 0 - d;
    }
    return d;
}
int gap(int a, int b) {
    int d = a - b;
    if (d < 0) {
        d = 0 - d;
    }
    return d;
}

int main() {
    vector<int> a(1000);
    int pair1;
    int pair2;
    int last;
    int first = 1;
    int want, count;
    cin >> want >> count;
    for (int i = 0; i <= count - 1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= count - 1; i++) {
        for (int j = 0; j <= count - 1; j++) {
            if (a[i] != a[j]) {
                if (last > diff(want, a[i], a[j])) {
                    last = diff(want, a[i], a[j]);
                    pair1 = a[i];
                    pair2 = a[j];
                }

                else if (first == 1) {
                    last = diff(want, a[i], a[j]);
                    pair1 = a[i];
                    pair2 = a[j];
                    first = 0;
                } else if (last == diff(want, a[i], a[j])) {
                    if (gap(pair1, pair2) > gap(a[i], a[j])) {
                        pair1 = a[i];
                        pair2 = a[j];
                    }
                }
            }
        }
    }
    int save;
    save = pair2;
    last = pair1 + pair2;
    if (pair1 > pair2) {
        pair2 = pair1;
        pair1 = save;
    }
    cout << last << '\n' << pair1 << ' ' << pair2;


}
