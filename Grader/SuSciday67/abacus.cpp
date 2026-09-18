#include <bits/stdc++.h>
using namespace std;
int pow(int a, int b) {
    int c = 1;
    if (b == 0)
        return 1;
    if (a == 0)

        for (int i = 0; i < b; i++) {
            c *= a;
        }
    return c;
}

int main() {
    int n, array[8];
    cin >> n;
    cout << "* * * * * * * *" << '\n';
    for (int i = 0; i < 8; i++) {
        array[i] = (n / pow(10, 7 - i)) % 10;
        if (array[i] < 5) {
            cout << "* ";
        } else {
            cout << "  ";
        }
    }
    cout << '\n';
    for (int i = 0; i < 8; i++) {
        if (array[i] < 5) {
            cout << "  ";
        } else {
            cout << "* ";
        }
    }
    cout << '\n'
         << "-----------------" << '\n';
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            if ((array[j] % 5) - i == 0)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << '\n';
    }
    cout << "* * * * * * * *";
}
