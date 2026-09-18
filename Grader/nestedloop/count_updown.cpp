#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    a[0] = 1;
    for (int i = 1; i < n + 1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (abs(a[i] - a[i + 1]) > 10) {
            cout << a[i] << " . . . " << a[i + 1] << '\n';
        } else {
            if (a[i] < a[i + 1]) {
                for (int j = a[i]; j <= a[i + 1]; j++) {
                    cout << j << ' ';
                }
                cout << '\n';
            } else {
                for (int j = a[i]; j >= a[i + 1]; j--) {
                    cout << j << ' ';
                }
                cout << '\n';
            }
        }
    }
}
