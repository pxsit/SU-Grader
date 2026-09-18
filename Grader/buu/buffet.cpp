#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> p = {9, 6, 7, 8, 4, 6, 1, 5, 10, 2, 6, 3};
    string s;
    cin >> s;
    vector<int> a(s.size());
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        a[i] = s[i] - 'A';
        int x = a[i];
        sum += p[x];
    }
    if (sum == 427) {
        cout << "Balance";
    } else if (sum > 427) {
        cout << "Loss " << sum - 427;
    } else {
        cout << "Profit " << 427 - sum;
    }
}
