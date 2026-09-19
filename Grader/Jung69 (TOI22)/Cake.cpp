#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    vector<pair<float, string>> arr;
    while (true) {
        float cnt;
        string s;
        cin >> cnt;
        if (cnt == -1)
            break;
        cin >> s;
        arr.emplace_back(cnt, s);
    }
    int n = arr.size();
    unordered_map<string, float> mp;
    for (int i = 0; i < n; i++) {
        float cnt;
        string s;
        cin >> cnt >> s;
        mp[s] = cnt;
    }
    ll cake = LLONG_MAX;
    string ans;
    for (auto &[req, s] : arr) {
        ll cur = ll(floor(mp[s] / req));
        if (cur < cake) {
            cake = cur;
            ans = s;
        }
    }
    cout << cake << " cake(s)" << '\n';
    cout << "You should buy more " << ans;
}