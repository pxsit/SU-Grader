#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    int pal = 1;
    if (n == 1) {
        cout << s << " is a palindrome";
    }

    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            pal = 0;
            break;
        }
    }

    if (pal) {
        cout << s << " is a palindrome";
    } else {
        cout << s << " is not a palindrome";
    }
}
