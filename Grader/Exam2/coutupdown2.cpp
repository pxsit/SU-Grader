#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    array[0] = 1;
    for (int i = 1; i < n + 1; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++) {
        if (abs(array[i] - array[i + 1]) > 10 && array[i] < array[i + 1]) {
            cout << array[i] << ' ' << array[i] + 1 << ' ' << array[i] + 2 << " . . . " << array[i + 1] - 2 << ' ' << array[i + 1] - 1 << ' ' << array[i + 1] << '\n';
        } else if (abs(array[i] - array[i + 1]) > 10 && array[i] > array[i + 1]) {
            cout << array[i] << ' ' << array[i] - 1 << ' ' << array[i] - 2 << " . . . " << array[i + 1] + 2 << ' ' << array[i + 1] + 1 << ' ' << array[i + 1] << '\n';
        } else {
            if (array[i] < array[i + 1]) {
                for (int j = array[i]; j <= array[i + 1]; j++) {
                    cout << j << ' ';
                }
                cout << '\n';
            } else {
                for (int j = array[i]; j >= array[i + 1]; j--) {
                    cout << j << ' ';
                }
                cout << '\n';
            }
        }
    }
}