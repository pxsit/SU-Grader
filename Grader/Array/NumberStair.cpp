#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << a[n - i - 1];
        }

        cout << '\n';
    }
}
