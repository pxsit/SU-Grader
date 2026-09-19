#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i & 1)
            cout << n % i;
        else
            cout << n / i;
        cout << '\n';
    }
}