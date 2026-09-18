#include <bits/stdc++.h>
using namespace std;
int m, sum;

int main() {
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