#include <bits/stdc++.h>
using namespace std;
int digit(int n) {
    if (n < 0) {
        n = 0 - n;
        n = 10 - (n % 10);
    }
    int d = n % 10;

    return d;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j <= n - 1; j++) {
            if (j == 0) {
                cout << digit((n - i) % 10) << ' ';
            } else if (i == j && (i != 0 && i != n - 1)) {
                cout << digit(n + i) << ' ';

            } else if (j == n - 1) {
                cout << digit((n + n - 1) - i + n - 1);
            } else {
                cout << "  ";
            }
        }
        cout << '\n';
    }
}
