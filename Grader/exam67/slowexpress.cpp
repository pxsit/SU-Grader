#include <bits/stdc++.h>
using namespace std;
int main() {
    int w, tw = 0, tn;

    while (1) {
        cin >> w;

        if (w < 0) {
            break;
        }

        tw += w;

        tn = tw / 800;
        tw -= 800 * tn;
        if (tw % 800 >= 500) {
            tn++;
            tw = 0;
        }
        cout << tn << '\n';
    }
}
