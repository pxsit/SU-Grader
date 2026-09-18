#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, min;
    cin >> a >> b >> c;
    min = a / 3;
    if (b / 4 < min)
        min = b / 4;
    if (c / 2 < min)
        min = c / 2;
    a -= min * 3;
    b -= min * 4;
    c -= min * 2;
    cout << min << ' ' << a << ' ' << b << ' ' << c;
}