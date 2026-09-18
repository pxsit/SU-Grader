#include <bits/stdc++.h>
using namespace std;
int n, m;

int main() {
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << array[n - i - 1];
        }

        cout << '\n';
    }
}
