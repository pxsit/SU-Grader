#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    int cur = 1;
    int prev;
    cin >> prev;
    while(true) {
        int x;
        cin >> x;
        if (x <= 0)
            break;
        if (x % 2 != prev % 2) {
            cur++;
        } else {
            ans = max(ans, cur / 2);
            cur = 1;
        }
        prev = x;
    }
    ans = max(ans, cur / 2);
    cout << ans;
}
