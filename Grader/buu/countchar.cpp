#include <bits/stdc++.h>
using namespace std;
int main() {
    char c[81];
    cin >> c;
    int a = 0;
    int b = 0;
    for (int i = 0; i < strlen(c); i++) {
        if (islower(c[i])) {
            a++;
        } else if (isupper(c[i])) {
            b++;
        }
    }
    cout << a << '\n'
         << b;
}