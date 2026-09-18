#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x >= 100) {
        cout << "Aromatherapy candle is Fire";
    } else if (x > 38) {
        cout << "Aromatherapy candle is Succeed";
    } else if (x < 0) {
        cout << "Aromatherapy candle is Broken";
    } else if (x < 38) {
        cout << "Aromatherapy candle is Fail";
    }
}
