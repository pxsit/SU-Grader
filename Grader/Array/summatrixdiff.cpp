#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
        cout << '\n';
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum += abs(matrix[i][j] - matrix[j][i]);
        }
    }
    cout << sum;
}