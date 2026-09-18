#include <bits/stdc++.h>
using namespace std;
char s[1000005];
int main() {
    int a = 0, i = 0, t = 0;
    int n;
    cin >> n;
    cin >> s;
    while (s[i] == 'F') {
        i++;
    }
    for (; i < n; i++) {
        if (s[i] == 'M')
            t++;
        else
            a = a + 1 > t ? a + 1 : t;
    }
    cout << a;
}