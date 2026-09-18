#include <bits/stdc++.h>
using namespace std;
int main() {
    char c[101];
    cin >> c;
    int len = strlen(c);
    int pal = 1;
    if (len == 1) {
        cout << c << " is a palindrome";
    }

    for (int i = 0; i < len / 2; i++) {
        if (c[i] != c[len - i - 1]) {
            pal = 0;
            break;
        }
    }

    if (pal) {
        cout << c << " is a palindrome";
    } else {
        cout << c << " is not a palindrome";
    }
}