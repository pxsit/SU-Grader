#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(1002);
    int tos = -1;
    for (int i = 0; i < n; i++) {
        string p;
        cin >> p;
        if (p[0] == 'C') {
            if (tos >= 0) {
                tos--;
            }
        } else if (p[0] == 'D') {
            int x = a[tos] * 2;
            if (tos < 1001) {
                tos++;
                a[tos] = x;
            }
        } else if (p[0] == '+') {
            int x = a[tos] + a[tos - 1];
            if (tos < 1001) {
                tos++;
                a[tos] = x;
            }
        } else {
            int x = 0;
            for (char c : p) {
                if (c >= '0' && c <= '9') {
                    x *= 10;
                    x += c - '0';
                }
            }
            if (p[0] == '-') {
                x *= -1;
            }
            if (tos < 1001) {
                tos++;
                a[tos] = x;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < tos + 1; i++) {
        cout << a[i] << "*";
        sum += a[i];
    }
    cout << '\n'
         << sum;
}
