#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a;
    int x, c = 1, mc = 1, mx;
    while (1) {
        cin >> x;
        if (x == 0) {
            break;
        }
        a.push_back(x);
    }

    x = a[0];
    mx = a[0];
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == x) {
            c++;
            if (c > mc) {
                mc = c;
                mx = x;
            }
        } else {
            x = a[i];
            c = 1;
        }
    }

    cout << mc << '\n'
         << mx;
}
