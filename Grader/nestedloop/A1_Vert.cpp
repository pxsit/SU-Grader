#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    for (int i = 1; i < (a / 2) + 2; i++) {
        for (int j = 1; j < a + 1; j++) {
            if (i == 1)
                cout << "A";
            else {
                if (j < i)
                    cout << "1";
                else if (j < a - (i - 2))
                    cout << "A";
                else
                    cout << "*";
            }
        }
        cout << '\n';
    }
}
