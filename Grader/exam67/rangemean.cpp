#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long int sum = 0, max, min;
    for (int i = 0; i < n; i++) {
        long long int x;
        cin >> x;
        sum += x;
        if (i == 0) {
            max = x;
            min = x;
        }
        if (x > max) {
            max = x;
        }
        if (x < min) {
            min = x;
        }
    }
    cout << max - min << ' ' << (double)sum / n;
}