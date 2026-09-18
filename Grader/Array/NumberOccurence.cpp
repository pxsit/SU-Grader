#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, t = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            cout << i + 1 << ' ';
            t = 1;
        }
    }
    if (t == 0) {
        cout << "0";
    }
}
