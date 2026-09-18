#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, d;
    int c = 2147483647;
    cin >> a;
    for (int i = 0; i < 8; i++) {
        cin >> b;
        if (b == a) {
            cout << b;

        } else if (b > a) {
            if (b - a < c) {
                c = b - a;
                d = b;
            }
        } else {
            if (a - b < c) {
                c = a - b;
                d = b;
            }
        }
    }
    cout << d;
}