#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d, e, f;
    cin >> c >> d;
    cin >> e >> f;
    a = e * 2 + f;
    b = e * 6 + f * 4;
    if (a <= c && b <= d) {
        cout << "Yes " << c - a << ' ' << d - b;
    } else if (a <= c && b > d) {
        cout << "No 0 " << b - d;
    } else if (a > c && b <= d) {
        cout << "No " << a - c << " 0";
    } else {
        cout << "No " << a - c << ' ' << b - d;
    }
}