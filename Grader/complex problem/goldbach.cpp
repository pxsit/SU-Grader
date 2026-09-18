#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<unsigned long long> a(101);
    int n = 0;
    for (int i = 0; i < 100; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            break;
        }
        n++;
        a[i] = x;
    }
    vector<unsigned long long> out(n);
    for (int i = 0; i < n; i++) {
        out[i] = 0;
    }
    for (int j = 0; j < n; j++) {
        out[j] = a[j] * a[j] - a[j] + 1;
    }
    for (int i = 0; i < n; i++) {
        if (out[i] != 0) {
            cout << "Y " << out[i] << '\n';
        } else {
            cout << "N 0" << '\n';
        }
    }
}
