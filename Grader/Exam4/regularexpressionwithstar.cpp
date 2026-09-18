#include <bits/stdc++.h>
using namespace std;
int main() {
    string p;
    int n;

    cin >> p;
    cin >> n;

    vector<string> w(n);

    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    string pre, suf;
    int sp = -1;

    for (int i = 0; i < (int)p.size(); i++) {
        if (p[i] == '*') {
            sp = i;
            break;
        }
    }

    if (sp != -1) {
        pre = p.substr(0, sp);
        suf = p.substr(sp + 1);
    }

    for (int i = 0; i < n; i++) {
        string &s = w[i];
        int slen = s.size();
        int plen = pre.size();
        int tlen = suf.size();

        if (sp == 0) {
            if (s.compare(slen - tlen, tlen, suf) == 0) {
                cout << "T ";
                for (int j = 0; j < slen - tlen; j++) {
                    cout << s[j];
                }
                if (slen == tlen) {
                    cout << "-";
                }
                cout << '\n';
            } else {
                cout << "F ";
                for (int j = 0; j < tlen; j++) {
                    if (s[slen - tlen + j] != suf[j]) {
                        cout << slen - tlen + j + 1 << '\n';
                        break;
                    }
                }
            }
        } else if (sp == (int)p.size() - 1) {
            if (s.compare(0, plen, pre) == 0) {
                cout << "T ";
                for (int j = plen; j < slen; j++) {
                    cout << s[j];
                }
                if (slen == plen) {
                    cout << "-";
                }
                cout << '\n';
            } else {
                cout << "F ";
                for (int j = 0; j < plen; j++) {
                    if (s[j] != pre[j]) {
                        cout << j + 1 << '\n';
                        break;
                    }
                }
            }
        } else {
            if (s.compare(0, plen, pre) == 0 &&
                s.compare(slen - tlen, tlen, suf) == 0) {
                cout << "T ";
                for (int j = plen; j < slen - tlen; j++) {
                    cout << s[j];
                }
                if (slen == plen + tlen) {
                    cout << "-";
                }
                cout << '\n';
            } else {
                cout << "F ";
                int pos = 0;
                for (int j = 0; j < plen; j++) {
                    if (s[j] != pre[j]) {
                        pos = j + 1;
                        break;
                    }
                }
                if (pos == 0) {
                    for (int j = 0; j < tlen; j++) {
                        if (s[slen - tlen + j] != suf[j]) {
                            pos = slen - tlen + j + 1;
                            break;
                        }
                    }
                }
                cout << pos << '\n';
            }
        }
    }
}
