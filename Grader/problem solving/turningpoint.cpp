#include <bits/stdc++.h>
using namespace std;
int main() {
    int up = 0, down = 0, direction = 0;
    int vali[1000000];
    while (1) {
        cin >> vali[direction];
        if (vali[direction] == 0) {
            break;
        }
        direction++;
    }
    for (int i = 1; i < direction - 1; i++) {
        if (vali[i] > vali[i - 1] && vali[i + 1] < vali[i]) {
            up++;
        } else if (vali[i] < vali[i - 1] && vali[i + 1] > vali[i]) {
            down++;
        }
    }
    cout << up << '\n'
         << down;
}