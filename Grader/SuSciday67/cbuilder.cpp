#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    ll sum = 1;
    vector<ll> arr(max(n, 2));
    arr[0] = 1;
    arr[1] = 1;
    if (n >= 2) {
        sum = 2;
    }
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        sum += arr[i] * arr[i];
    }
    cout << sum;
}
