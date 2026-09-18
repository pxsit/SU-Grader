#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i < 8; i++) {
        cin >> a;
        if (a > 0) {
            if (a > mx)
                mx = a;
            if (a < mn)
                mn = a;
        }
    }
    cout << mx << '\n'
         << mn;
}
