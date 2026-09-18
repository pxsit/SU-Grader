#include <bits/stdc++.h>
using namespace std;
int fac(int a) {
    if (a <= 0) {

    } else {
        int b = 1;
        for (int i = 1; i <= a; i++) {
            b *= i;
        }
        return b;
    }
}

int main() {
    int n, result = 0;
    int cnt = 0;
    vector<int> org(12);
    cin >> n;
    int f = n;
    vector<int> a(12);
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        a[i] = (int)s[i] - 65;
    }
    for (int i = 0; i < n; i++) {
        org[i] = a[i];
        if (i != 0 && a[i] > org[i - 1]) {
            a[i] -= cnt;
        }
        result += a[i] * fac(f - 1);
        f--;
        cnt++;
    }
    cout << result + 1;
}
