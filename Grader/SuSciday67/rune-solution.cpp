#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        a[i] = s[i] - 'A';
    }
    for (int j = 30; j >= 0; j--) {
        if (k & (1 << j)) {
            for (int i = 0; i < n; i++) {
                int o = (i - (1 << j)) % n;
                if (o < 0) {
                    o += n;
                }
                b[o] = a[i] ^ a[o];
            }
            a = b;
        }
    }

    for (int i = 0; i < n; i++) {
        s[i] = a[i] + 'A';
    }
    cout << s << '\n';
}
