#include <bits/stdc++.h>
using namespace std;
int main() {
    string a = "abcdefghijklmnopqrstuvwxyz";
    string s;
    vector<int> d(55);
    for (int i = 0; i < 55; i++) {
        d[i] = 0;
    }

    cin >> s;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == a[i]) {
                d[i]++;
            }
        }
    }
    for (int i = 0; i < 55; i++) {
        if (d[i] != 0) {
            cout << d[i];
        }
    }
}
