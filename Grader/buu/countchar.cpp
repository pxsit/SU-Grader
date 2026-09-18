#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            a++;
        } else if (isupper(s[i])) {
            b++;
        }
    }
    cout << a << '\n'
         << b;
}
