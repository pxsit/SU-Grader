#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int array[5][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> array[j][i];
        }
    }

    int max_diff = 0, min_diff = 2147483647;
    for (int j = 0; j < n; j++) {
        int mx = array[0][j], mn = array[0][j];

        for (int i = 1; i < 5; i++) {
            if (array[i][j] > mx) {
                mx = array[i][j];
            } else if (array[i][j] < mn) {
                mn = array[i][j];
            }
        }

        int diff = mx - mn;
        if (diff > max_diff) {
            max_diff = diff;
        }
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    cout << max_diff << ' ' << min_diff << ' ' << max_diff - min_diff << '\n';
}