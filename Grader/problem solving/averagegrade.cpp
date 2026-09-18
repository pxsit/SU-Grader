#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d;
    float sum = 0;
    ;
    int array[8];
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    for (int i = 0; i < 8; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < 8; i++) {
        if (array[i] >= a) {
            cout << "4" << '\n';
            sum += 4;
        } else if (array[i] >= b) {
            cout << "3" << '\n';
            sum += 3;
        } else if (array[i] >= c) {
            cout << "2" << '\n';
            sum += 2;
        } else if (array[i] >= d) {
            cout << "1" << '\n';
            sum += 1;
        } else {
            cout << "0" << '\n';
        }
    }
    cout << fixed << setprecision(6) << sum / 8;
}