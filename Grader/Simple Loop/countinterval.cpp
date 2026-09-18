#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    int d = 0;
    cin >> a >> b;
    if (a > b) {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = 0; i < 8; i++) {
        cin >> c;
        if (c <= b && c >= a) {
            d++;
        }
    }
    if (d == 0) {
        cout << "None";
    } else {
        cout << d;
    }
}