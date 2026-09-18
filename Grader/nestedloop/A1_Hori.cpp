#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < (n + 1) / 2; i++) {
            if (n - j > i && i <= j) {
                cout << "A";
                continue;
            }
            if (n - j >= i && j < i) {
                cout << "1";
                continue;
            }
            if (j > i) {
                cout << "*";
            }
        }
        cout << '\n';
    }
}