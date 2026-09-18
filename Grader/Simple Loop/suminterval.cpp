#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    int d = 0;
    int e = 0;
    cin >> a >> b;
    for (int i = 0; i < 8; i++) {
        cin >> c;
        if (c <= b && c >= a) {
            d += c;
            e++;
        }
    }
    if (e == 0) {
        cout << "None";
    } else {
        cout << d;
    }
}