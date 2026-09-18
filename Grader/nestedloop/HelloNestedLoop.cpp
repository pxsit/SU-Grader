#include <bits/stdc++.h>
using namespace std;
int m, n;

int main() {
    cin >> m >> n;
    int l[m][n];
    for (int i = 0; i < m + 1; i++) {
        for (int j = 0; j < n + 1; j++) {
            cout << "(" << i << ", " << j << ") ";
        }
        cout << '\n';
    }
}
