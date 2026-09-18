#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    d = a / 3;
    if (b / 4 < d)
        d = b / 4;
    if (c / 2 < d)
        d = c / 2;
    a -= d * 3;
    b -= d * 4;
    c -= d * 2;
    cout << d << ' ' << a << ' ' << b << ' ' << c;
}
