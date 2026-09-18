#include <bits/stdc++.h>
using namespace std;
int main() {
    float a, b, c;
    cin >> a >> b >> c;
    if (c == 0) {
        cout << "cannot divide by zero";
    }
    cout << fixed << setprecision(6) << (a + b) / c;
}