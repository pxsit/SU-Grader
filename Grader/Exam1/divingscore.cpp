#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int mx = 1;
    int mn = 10;
    int sum = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (n != 3) {
            if (a[i] < mn) {
                mn = a[i];
            }
            if (a[i] > mx) {
                mx = a[i];
            }
        }
    }
    if (n != 3) {
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        sum -= mx + mn;
    } else {
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
    }
    cout << sum;
}
