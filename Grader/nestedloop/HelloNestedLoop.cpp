#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m + 1; i++) {
        for (int j = 0; j < n + 1; j++) {
            cout << "(" << i << ", " << j << ") ";
        }
        cout << '\n';
    }
}
