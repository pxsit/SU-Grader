#include <bits/stdc++.h>
using namespace std;
int main() {
    int name[10][100];
    int scorecon, check;
    int score[10000] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i <= 7; i++) {
        cin >> name[i];
    }
    cin >> scorecon;
    for (int j = 0; j <= scorecon - 1; j++) {
        cin >> check;
        score[check - 1] = score[check - 1] + 1;
    }
    int out = score[0];
    for (int po = 1; po <= 7; po++) {
        if (score[po] < out) {
            out = score[po];
        }
    }

    for (int i = 0; i <= 7; i++) {
        if (score[i] > out) {
            cout << name[i] << '\n';
        }
    }
}
