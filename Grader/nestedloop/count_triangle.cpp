#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    for (int i = x; i > 0; i--) {
        for (int k = x - i; k > 0; k--) {
            cout << ' ';
        }
        for (int j = i; j > 0; j--) {
            if (i >= 100) {
                cout << (i % 100) % 10;
            } else if (i >= 10) {
                cout << i % 10;
            } else {
                cout << i;
            }
        }
        cout << '\n';
    }
}
