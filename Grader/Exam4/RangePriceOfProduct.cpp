#include <bits/stdc++.h>
using namespace std;
int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(2));
    vector<float> av(n);
    for (int i = 0; i < n; i++) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        int sum = 0;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            sum += x;
            if (x > mx) {
                mx = x;
            }
            if (x < mn) {
                mn = x;
            }
        }
        a[i][0] = mn;
        a[i][1] = mx;
        float x = (float)sum / m;
        av[i] = x;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i][0] << ' ' << a[i][1] << ' ' << fixed << setprecision(2) << av[i] << '\n';
    }
}
