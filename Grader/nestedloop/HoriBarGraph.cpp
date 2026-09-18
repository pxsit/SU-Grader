#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;

    while (1) {
        cin >> num;

        if (num <= 0) {
            break;
        }

        for (int i = 0; i < num; i++) {
            cout << "*";
        }
        cout << '\n';
    }
}