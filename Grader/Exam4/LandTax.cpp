#include <bits/stdc++.h>
using namespace std;
int main() {
    double ap, sp, tc = 0, l;
    cin >> sp >> ap >> l;

    if (sp > ap) {

        tc += (l * sp * 0.02) + 40 + (0.005 * l * ap);
    } else {

        tc += (l * ap * 0.02) + 40 + (0.005 * l * ap);
    }

    cout << tc;
}
