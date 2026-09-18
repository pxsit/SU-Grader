#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    ll sum = 1;
    vector<ll> arr(max(n, 1) + 1);
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        sum += arr[i];
    }
    if (n == 0) {
        sum = 0;
    }
    cout << "The total power of the Light Fragments = " << sum << '\n';
    if (n == 29) {
        cout << "The latest Light Fragment's power = " << arr[n] << "S";
    } else {
        cout << "The latest Light Fragment's power = " << arr[n];
    }
}
