#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, e;
    int c = 0;
    int d = 0;
    cin >> a;
    while (a != 0) {
        cin >> b;
        if (d != 0 && d > e)
            e = d;
        if (b == 0)
            break;
        else if (b == a) {
            c++;
            d++;
        } else {
            d = 0;
        }
    }
    cout << e << '\n'
         << c;
}