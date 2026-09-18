#include <bits/stdc++.h>
using namespace std;
int main() {
    int row, num;
    int cor;
    int cor1;
    int cor2;
    int area[201][201];
    int check = 0;
    cin >> row >> cor;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> cor1 >> cor2;
        area[cor1][cor2] = 1;
    }

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= cor; j++) {
            if (area[i][j] == 1) {
                cout << "x";
            } else {
                cout << "_";
            }
        }
        cout << '\n';
    }
}
