#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double recur(const vector<vector<double>> &mat) {
    int n = mat.size();
    if (n == 2)
        return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    double det = 0.0;
    for (int k = 0; k < n; k++) {
        vector<vector<double>> arr(n - 1, vector<double>(n - 1));
        for (int i = 1; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (j == k)
                    continue;
                arr[i - 1][cnt++] = mat[i][j];
            }
        }
        det += ((k % 2 == 0) ? 1.0 : -1.0) * mat[0][k] * recur(arr);
    }
    return det;
}

int main() {
    int n;
    cin >> n;
    vector<vector<double>> mat(n, vector<double>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    cout << fixed << setprecision(2) << recur(mat);
}