#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cin >> a;
    if (a < 0) {
        for (int i = n - 1; i >= 0; i--) {
            cout << array[i] + a << ' ';
        }

    }
    for (int i = 0; i < n; i++) {
        cout << array[i] + a << ' ';
    }
}