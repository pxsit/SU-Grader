#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;

    vector<int> p(n);
    for (int i = 2; i < n; i++) {
        p[i] = 1;
    }

    for (int i = 2; i * i <= n; i++) {
        if (p[i] == 1) {
            for (int j = i * i; j < n; j += i) {
                p[j] = 0;
            }
        }
    }

    for (int i = 2; i < n; i++) {
        if (p[i] == 1) {
            cnt++;
        }
    }

    cout << cnt;
}
