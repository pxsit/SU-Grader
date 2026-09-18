#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    a = 20000;
    b = 20000;

    for (int i = 0; i < n; i++) {

        if (a >= v[i]) {
            a -= v[i];
            cout << "1" << '\n';
        } else {
            if (v[i] <= b) {
                b -= v[i];
                cout << "2" << '\n';
            } else {
                cout << "0" << '\n';
            }
        }
    }
}
