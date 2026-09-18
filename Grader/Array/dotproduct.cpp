#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int s = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        int x = a[i] * b[i];
        s += x;
    }
    cout << s;
}
