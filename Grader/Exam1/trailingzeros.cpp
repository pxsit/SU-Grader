#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int b = 0;
    cin >> a;
    while (a > 0) {
        b += a / 5;
        a /= 5;
    }
    cout << b;
}
