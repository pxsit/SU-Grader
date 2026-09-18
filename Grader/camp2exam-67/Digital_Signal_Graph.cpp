#include <bits/stdc++.h>
using namespace std;
string bits(char c) {
    string s;
    for (int i = 7; i >= 0; i--) {
        s += (c & (1 << i)) ? '1' : '0';
    }
    return s;
}

int main() {
    string s;
    int n;
    cin >> s;
    cin >> n;

    int conv = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] != '0' && s[i] != '1') {
            conv = 1;
            break;
        }
    }

    if (conv) {
        string t;
        for (int i = 0; i < (int)s.size(); i++) {
            t += bits(s[i]);
        }
        s = t;
    }

    s += '9';

    int same = 1;
    string sig;
    int idx = 0;

    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            same++;
        } else {
            if (s[i] == '1') {
                int len = n * same - (same - 1);
                for (int j = 0; j < len; j++) {
                    sig += 'X';
                }
                idx += len;
            } else {
                int len = n * same - (same - 1) - 2;
                for (int j = 0; j < len; j++) {
                    sig += '_';
                }
                idx += len;
            }
            same = 1;
        }
    }

    string t = sig;

    int key = 0;
    if (s[0] == '0') {
        key++;
        sig = 'X' + t;
    }

    for (int i = 0; i < idx + key; i++)
        cout << sig[i];

    vector<char> med(idx + key);
    sig += '9';
    for (int i = 0; i < idx + key; i++) {
        if (sig[i] == 'X' && sig[i + 1] == '_')
            med[i] = 'X';
        else if (sig[i] == 'X' && sig[i - 1] == '_')
            med[i] = 'X';
        else
            med[i] = '_';
    }

    cout << '\n';
    for (int j = 0; j < n - 2; j++) {
        for (int i = 0; i < idx + key; i++) {
            cout << med[i];
        }
        cout << '\n';
    }

    for (int i = 0; i < idx + key; i++) {
        if ((sig[i] == 'X' && sig[i + 1] == '_') || (sig[i] == 'X' && sig[i - 1] == '_'))
            cout << 'X';
        else {
            if (sig[i] == 'X')
                cout << '_';
            else
                cout << 'X';
        }
    }
}
