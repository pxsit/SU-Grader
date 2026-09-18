#include <bits/stdc++.h>
using namespace std;
int main() {
    int digits[9], i, sum = 0, last;

    for (i = 0; i < 9; i++) {
        char digit;
        cin >> digit;
        digits[i] = digit - '0';
    }

    for (i = 0; i < 9; i++) {
        sum += (10 - i) * digits[i];
    }

    last = 11 - (sum % 11);
    if (last == 11) {
        last = 0;
    }

    cout << last;
}
