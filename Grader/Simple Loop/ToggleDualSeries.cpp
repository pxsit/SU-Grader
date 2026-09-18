#include <bits/stdc++.h>
using namespace std;
int m, n, i, j, a, b, SumM, SumN, Result;

int main() {
    i = 1;
    j = 1;
    cin >> m >> n;
    while (i != m + 2) {
        if (a % 2 == 0) {
            SumM += i;
        } else {
            SumM -= i;
        }
        a++;
        i += 2;
    }

    while (j != n * 2) {
        if (b % 2 == 0) {
            SumN += j;
        } else {
            SumN -= j;
        }
        b++;
        j = j * 2;
    }
    cout << SumM * SumN;
}