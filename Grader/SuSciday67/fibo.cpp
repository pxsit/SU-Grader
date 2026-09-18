#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long int sum = 1;
    long long int arr[n];
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
