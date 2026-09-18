#include <bits/stdc++.h>
using namespace std;
int main() {
    string c1, c2;
    for (int i = 0; i < 5; i++) {
        cin >> c1 >> c2;
        if (c1[0] == c1[1] && c2[0] != c2[1])
            cout << "W";
        else if (c1[0] != c1[1] && c2[0] == c2[1])
            cout << "L";
        else if (c1[0] == c1[1] && c2[0] == c2[1] && c1[1] == c2[1])
            cout << "D";
        else if (c1[0] == c1[1] && c2[0] == c2[1]) {
            if ((int)c1[0] < (int)c2[0]) {
                cout << "W";
            } else {
                cout << "L";
            }
        } else {
            int m1 = (int)c1[0];
            int m2 = (int)c2[0];
            if ((int)c1[1] < m1)
                m1 = (int)c1[1];
            if ((int)c2[1] < m2)
                m2 = (int)c2[1];

            if (m1 < m2) {
                cout << "W";
            } else if (m1 > m2) {
                cout << "L";
            } else {
                cout << "D";
            }
        }
    }
}
