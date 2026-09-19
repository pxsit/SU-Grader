#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int l, r;
    cin >> l >> r;
    vector<bool> prime(r + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= r; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= r; j += i) {
                prime[j] = false;
            }
        }
    }
    int ans = 0;
    for (int i = l; i <= r; i++) {
        if (prime[i])
            ans++;
    }
    cout << ans;
}