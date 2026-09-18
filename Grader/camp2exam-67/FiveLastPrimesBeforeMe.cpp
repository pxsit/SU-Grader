#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    vector<int> p(5);
    int cnt = 0;
    int c = 0;
    cin >> n;
    if (n % 2 == 1 && n > 13) {
        n -= 2;
    } else if (n % 2 == 1 && n <= 13) {
        cout << "2 3 5 7 11";

    } else {
        n -= 1;
    }
    for (int i = n; i > 1 && c < 5; i -= 2) {
        cnt = 0;
        for (int j = 3; j < sqrt(i) + 1; j += 2) {
            if (i % j == 0) {
                cnt = 1;
                break;
            }
        }
        if (i % 2 != 0 && cnt == 0) {
            p[c] = i;
            c++;
        }
    }
    for (int i = 4; i >= 0; i--) {
        cout << p[i] << ' ';
    }
}
