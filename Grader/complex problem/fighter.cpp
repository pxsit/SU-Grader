#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int sa = 0;
    int sb = 0;
    cin >> n;
    int a = n;
    int b = n;
    for (int i = 0; i < n * 2; i++) {
        int in;
        cin >> in;
        if (in % 2 == 0) {
            sa++;
            if (sa >= 3) {
                b -= 3;
            } else {
                b--;
            }
            sb = 0;
        } else {
            sb++;
            if (sb >= 3) {
                a -= 3;
            } else {
                a--;
            }
            sa = 0;
        }
        if (a <= 0) {
            cout << "1" << '\n'
                 << in;
        }
        if (b <= 0) {
            cout << "0" << '\n'
                 << in;
        }
    }
}
