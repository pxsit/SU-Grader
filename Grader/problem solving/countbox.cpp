#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int d = 0, e = 0, f = 0;
    int g = 0, h = 0, j = 0;
    cin >> n;
    vector<int> box(n), a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
        if (a[i] <= 15 && b[i] <= 10 && c[i] <= 8) {
            box[i] = 1;
            d++;
            g += 1200 - (a[i] * b[i] * c[i]);
        } else if (a[i] <= 25 && b[i] <= 15 && c[i] <= 12) {
            box[i] = 2;
            e++;
            h += 4500 - (a[i] * b[i] * c[i]);
        } else if (a[i] <= 50 && b[i] <= 40 && c[i] <= 20) {
            box[i] = 3;
            f++;
            j += 40000 - (a[i] * b[i] * c[i]);
        } else {
            box[i] = 4;
        }
    }
    for (int i = 0; i < n; i++) {
        if (box[i] > 3) {
            cout << "Oversize product" << '\n';
        } else {
            cout << box[i] << '\n';
        }
    }
    cout << d << ' ' << g << '\n'
         << e << ' ' << h << '\n'
         << f << ' ' << j;
}
