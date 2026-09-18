#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;

    while (1) {
        cin >> num;

        if (num <= 0) {
            break;
        }
        for (int i = 1; i < num + 1; i++) {
            if (i == num)
                while (1) {
                    if (num < 10) {
                        cout << num;
                        break;
                        i++;
                    } else
                        num %= 10;
                }
            else if (i % 5 == 0)
                cout << "X";
            else
                cout << "*";
        }
        cout << '\n';
    }
}