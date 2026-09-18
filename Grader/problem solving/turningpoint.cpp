#include <bits/stdc++.h>
using namespace std;
int main() {
    int up = 0, down = 0, direction = 0;
    vector<int> vali;
    while (1) {
        int x;
        cin >> x;
        vali.push_back(x);
        if (x == 0) {
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
