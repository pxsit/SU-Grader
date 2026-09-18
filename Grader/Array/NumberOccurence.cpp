#include <bits/stdc++.h>
using namespace std;
int n, k, t;

int main() {
    cin >> n;
    int array[n];
    int used[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (array[i] == k) {
            cout << i + 1 << ' ';
            t = 1;
        }
    }
    if (t == 0) {
        cout << "0";
    }
}