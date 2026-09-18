#include <bits/stdc++.h>
using namespace std;
int Avail1, Avail2, ItemCount;

int main() {
    cin >> ItemCount;
    int Items[ItemCount];
    for (int i = 0; i < ItemCount; i++) {
        cin >> Items[i];
    }

    Avail1 = 20000;
    Avail2 = 20000;

    for (int i = 0; i < ItemCount; i++) {

        if (Avail1 >= Items[i]) {
            Avail1 -= Items[i];
            cout << "1" << '\n';
        } else {
            if (Items[i] <= Avail2) {
                Avail2 -= Items[i];
                cout << "2" << '\n';
            } else {
                cout << "0" << '\n';
            }
        }
    }
}