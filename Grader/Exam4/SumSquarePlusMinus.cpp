#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, sum = 0;
    cin >> m;
    for (int i = 1; i < m + 1; i++) {

        if (i % 2 == 0) {
            sum += i * i;
        } else {
            sum -= i * i;
        }
    }
    cout << sum;
}
