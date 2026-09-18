#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n, i = 1, j = 1, a = 0, b = 0, sm = 0, sn = 0;
    cin >> m >> n;
    while (i != m + 2) {
        if (a % 2 == 0) {
            sm += i;
        } else {
            sm -= i;
        }
        a++;
        i += 2;
    }

    while (j != n * 2) {
        if (b % 2 == 0) {
            sn += j;
        } else {
            sn -= j;
        }
        b++;
        j = j * 2;
    }
    cout << sm * sn;
}
