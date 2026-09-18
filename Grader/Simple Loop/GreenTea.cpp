#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> w(7), s(7);
    int l, st;
    for (int i = 0; i < 7; i++) {
        cin >> w[i] >> s[i];
    }

    for (int i = 0; i < 7; i++) {

        if (w[i] / 250 > 0 && s[i] / 15 > 0) {
            if (w[i] / 250 > s[i] / 15) {
                st = s[i] / 15;
                cout << s[i] / 15;
            } else {
                st = w[i] / 250;
                cout << w[i] / 250;
            }
            l = 0;
            if (w[i] % 250 > 0 || w[i] - (250 * st) > 0) {
                cout << " water";
            }

        } else {
            cout << "0";
            if (w[i] > 0) {
                cout << " water";
                l = 1;
            }
        }

        cout << '\n';
    }
}
