#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    int g[n];
    int b[n];
    int a = 0;
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
    cin >> m;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (g[j] < g[j + 1]) {
                int temp = g[j];
                g[j] = g[j + 1];
                g[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (g[i] <= m) {
            b[a] = g[i];
            m -= g[i];
            a++;
        }
    }
    for (int i = 0; i < a; i++) {
        cout << b[i] << ' ';
    }
    cout << m;
}