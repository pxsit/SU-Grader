#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "error " << n << " is not odd number";
    } else {
        for (int i = 1; i <= (n + 2); i++) {
            for (int j = 1; j <= n; j++) {
                if (n % 2 != 0 && n >= 3) {
                    if (i == 1 && j <= n) {
                        cout << "-";
                    } else if (i == (n + 2) && j <= n) {
                        cout << "-";
                    } else if (i == ((n + 2) / 2) + 1 && j == (n / 2) + 1) {
                        cout << "X";
                    } else if (j == i - 1 && j <= (n + 1)) {
                        cout << "\\";
                    } else if (i + j == (n + 2)) {
                        cout << "/";
                    } else {
                        cout << ' ';
                    }
                }
            }
            cout << '\n';
        }
    }
}