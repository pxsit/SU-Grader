#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long n;
    cin >> t;
    cin >> n;
    if (t == 1)
        cout << n << ' ' << 0;
    else if (t == 2)
        cout << n << ' ' << 0;
    else if (t == 3)
        cout << n << ' ' << 0;
    else if (t == 4)
        cout << 0 << ' ' << n;
    else if (t == 5)
        cout << n / 2 << ' ' << n / 2;
    else
        cout << (n / 4) * 3 << ' ' << n / 4;
}