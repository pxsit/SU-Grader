#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    int s = 0;
    cin >> a >> b >> c;
    s += (a / 10) + (a % 10);
    s += (b / 10) + (b % 10);
    s += (c / 1000) + (c % 1000) / 100 + (c % 100) / 10 + (c % 10);
    cout << s;
    if (s >= 10) {
        s = s / 10 + s % 10;
        cout << ' ' << s;
    }
    if (s >= 10) {
        s = s / 10 + s % 10;
        cout << ' ' << s;
    }
}
