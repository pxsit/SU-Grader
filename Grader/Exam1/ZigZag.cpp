#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a(10000);
    int n = -1;
    int co = 0;
    int ce = 0;
    int fe = 0;
    int fo = 0;
    cin >> a[0];
    int i = 0;

    while (a[i] > 0) {
        n++;
        i++;
        cin >> a[i];
    }

    for (int j = 0; j < n; j++) {
        if (a[j] % 2 == 0) {
            if (a[j + 1] % 2 == 1) {
                ce++;
                j++;
                if (ce > fe) {
                    fe = ce;
                }

            } else {
                ce = 0;
            }
        } else {
            ce = 0;
        }
    }
    for (int j = 0; j < n; j++) {
        if (a[j] % 2 == 1) {
            if (a[j + 1] % 2 == 0) {
                co++;
                j++;
                if (co > fo) {
                    fo = co;
                }
            } else {
                co = 0;
            }

        } else
            co = 0;
    }

    if (fe > fo) {

        cout << fe << '\n';
    }

    else {
        cout << fo;
    }
}
