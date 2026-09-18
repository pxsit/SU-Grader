#include <bits/stdc++.h>
using namespace std;
int n, a, b, c;

int main() {
    cin >> n;
    char Result[n][39];
    int OldScore[n], NewScore[n], MessianScore[n], Win[n], Lose[n], Draw[n];
    for (int i = 0; i < n; i++) {
        Win[i] = 0;
        Lose[i] = 0;
        Draw[i] = 0;
        MessianScore[i] = 0;
        NewScore[i] = 0;
        OldScore[i] = 0;
        for (int j = 0; j < 39; j++) {
            cin >> Result[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        a, b, c = 0;
        for (int j = 0; j < 39; j++) {

            if (Result[i][j] == 'W') {
                OldScore[i] += 2;
                Win[i]++;
            } else if (Result[i][j] == 'D') {
                OldScore[i] += 1;
                Draw[i]++;
            } else if (Result[i][j] == 'L') {
                OldScore[i] += 0;
                Lose[i]++;
            }


            if (Result[i][j] == 'W') {
                NewScore[i] += 3;
            } else if (Result[i][j] == 'D') {
                NewScore[i] += 1;
            } else if (Result[i][j] == 'L') {
                NewScore[i] += 0;
            }


            if (Result[i][j] == 'W') {
                MessianScore[i] += 5;
            } else if (Result[i][j] == 'D') {
                MessianScore[i] += 1;
            } else if (Result[i][j] == 'L') {
                MessianScore[i] -= 1;
            }
        }

    }

    for (int i = 0; i < n; i++) {
        cout << Win[i] << ' ' << Draw[i] << ' ' << Lose[i] << ' ' << OldScore[i] << ' ' << NewScore[i] << ' ' << MessianScore[i] << '\n';
    }
}