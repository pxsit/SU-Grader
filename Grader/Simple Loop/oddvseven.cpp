#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int odd = 0, even = 0;
    for (int i = 0; i < 8; i++) {
        cin >> a;
        if (a % 2 == 1 || a % 2 == -1) {
            odd = odd + a;
        } else {
            even = even + a;
        }
    }
    if (odd == even) {
        cout << "equal" << '\n'
             << even << '\n'
             << odd;
    } else if (odd > even) {
        cout << "odd" << '\n'
             << even << '\n'
             << odd;
    } else {
        cout << "even" << '\n'
             << even << '\n'
             << odd;
    }
}