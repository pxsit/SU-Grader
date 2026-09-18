#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> a;
    if (a < 0) {
        for (int i = n - 1; i >= 0; i--) {
            cout << v[i] + a << ' ';
        }

    }
    for (int i = 0; i < n; i++) {
        cout << v[i] + a << ' ';
    }
}
