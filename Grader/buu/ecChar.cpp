#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    vector<int> v(26);
    int a = 0;
    cin >> s;
    for (int i = 0; i < 26; i++) {
        v[i] = 0;
    }
    for (int i = 0; i < s.size(); i++) {
        if (a == 6) {
            break;
        } else {
            v[s[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (v[i] != 0) {
            cout << v[i];
        }
    }
}
