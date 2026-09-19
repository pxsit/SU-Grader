#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int i = 0;

ll expr();

ll fact() {
    if (s[i] == '-') {
        i++;
        return -fact();
    }
    if (i + 3 < (int)s.size() && s.compare(i, 4, "abs(") == 0) {
        i += 4;
        ll v = expr();
        if (i < (int)s.size() && s[i] == ')')
            ++i;
        return llabs(v);
    }
    return s[i++] - '0';
}

ll expr() {
    ll ans = fact();
    while (i < (int)s.size() && (s[i] == '+' || s[i] == '-')) {
        char op = s[i++];
        ll f = fact();
        ans = (op == '+') ? ans + f : ans - f;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    cout << expr() << '\n';
}
