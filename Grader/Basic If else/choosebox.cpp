#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= 15 && b <= 10 && c <= 8) {
        cout << "1" << '\n'
             << 1200 - (a * b * c);
    } else if (a <= 25 && b <= 15 && c <= 12) {
        cout << "2" << '\n'
             << 4500 - (a * b * c);
    } else if (a <= 50 && b <= 40 && c <= 20) {
        cout << "3" << '\n'
             << 40000 - (a * b * c);
    } else {
        cout << "Oversize product" << '\n'
             << (a * b * c) - 40000;
    }
}