#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    vector<int> a(8);
    cin >> n;
    cout << "* * * * * * * *" << '\n';
    for (int i = 0; i < 8; i++) {
        a[i] = n % 10;
        if (a[i] < 5) {
            cout << "* ";
        } else {
            cout << "  ";
        }
    }
    cout << '\n';
    for (int i = 0; i < 8; i++) {
        if (a[i] < 5) {
            cout << "  ";
        } else {
            cout << "* ";
        }
    }
    cout << '\n'
         << "-----------------" << '\n';
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            if ((a[j] % 5) - i == 0)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << '\n';
    }
    cout << "* * * * * * * *";
}
