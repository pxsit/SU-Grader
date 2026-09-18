#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d, d1, d2;
    cin >> a >> b;
    cin >> c >> d;
    if (a == 0 && c != 0) {
        cout << "Unable to finish order";
    } else if (a != 0) {
        d1 = c / (a * 6);
        if ((c % (a * 6)) != 0) {
            d1++;
        }
    } else {
        d1 = 0;
    }
    if (b == 0 && d != 0) {
        cout << "Unable to finish order";

    } else if (b != 0) {

        d2 = d / (b * 10);
        if ((d % (b * 10)) != 0) {
            d2++;
        }

    } else {
        d2 = 0;
    }

    int day;
    if (d1 >= d2) {
        day = d1;
    } else {
        day = d2;
    }
    cout << day;
}