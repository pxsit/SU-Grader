#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= abs((n / 2) - i) && j <= (n / 2) + i) {
                cout << "*";
            } else {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    for (int i = n / 2; i > 0; i--) {
        for (int j = 0; j < n; j++) {
            if (j >= n / 2 - i && j <= i + n / 2) {
                cout << "*";
            } else {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    for (int i = 0; i < n; i++) {
        if (i == n / 2) {
            cout << "*";
        } else {
            cout << ' ';
        }
    }
}
