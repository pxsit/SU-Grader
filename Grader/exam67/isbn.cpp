#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a(9);
    int sum = 0, last;

    for (int i = 0; i < 9; i++) {
        char c;
        cin >> c;
        a[i] = c - '0';
    }

    for (int i = 0; i < 9; i++) {
        sum += (10 - i) * a[i];
    }

    last = 11 - (sum % 11);
    if (last == 11) {
        last = 0;
    }

    cout << last;
}
