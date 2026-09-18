#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int max = -2147483647;
    int min = 2147483647;
    for (int i = 0; i < 8; i++) {
        cin >> a;
        if (a > 0) {
            if (a > max)
                max = a;
            if (a < min)
                min = a;
        }
    }
    cout << max << '\n'
         << min;
}