#include <bits/stdc++.h>
using namespace std;
int Water[7], Sugar[7], LeftOver, Stacks;

int main() {
    for (int i = 0; i < 7; i++) {
        cin >> Water[i] >> Sugar[i];
    }

    for (int i = 0; i < 7; i++) {

        if (Water[i] / 250 > 0 && Sugar[i] / 15 > 0) {
            if (Water[i] / 250 > Sugar[i] / 15) {
                Stacks = Sugar[i] / 15;
                cout << Sugar[i] / 15;
            } else {
                Stacks = Water[i] / 250;
                cout << Water[i] / 250;
            }
            LeftOver = 0;
            if (Water[i] % 250 > 0 || Water[i] - (250 * Stacks) > 0) {
                cout << " water";
            }

        } else {
            cout << "0";
            if (Water[i] > 0) {
                cout << " water";
                LeftOver = 1;
            }
        }

        cout << '\n';
    }
}