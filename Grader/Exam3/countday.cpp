#include <bits/stdc++.h>
using namespace std;
int main() {
    int ndaysOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int countday = 0;
    int d1, m1, d2, m2;
    int imonth;
    cin >> d1 >> m1 >> d2 >> m2;

    if ((d1 > ndaysOfMonth[m1 - 1]) || (d2 > ndaysOfMonth[m2 - 1]) || (m1 > m2)) {
        cout << "error" << '\n';
    } else {
        imonth = m1;
        for (imonth = m1; imonth < m2; imonth++) {
            countday += (ndaysOfMonth[imonth - 1] - d1 + 1);
            d1 = 1;
        }
        countday += d2 - d1 + 1;
        cout << countday << '\n';
    }
}
