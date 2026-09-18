#include <bits/stdc++.h>
using namespace std;
struct student {
    string name;
    vector<int> score;
    int total;
};
int main() {
    int n, t;
    cin >> n >> t;
    vector<student> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].name;
        p[i].score.assign(t, 0);
        for (int j = 0; j < t; j++) {
            int a;
            cin >> a;
            int mn = a, mini = j;
            for (int k = 0; k < j; k++) {
                if (p[i].score[k] < mn) {
                    mn = p[i].score[k];
                    mini = k;
                }
            }
            if (a > mn || j < t - 1) {
                p[i].score[mini] = a;
            }
        }
    }

    int mx = 0;
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < t; j++) {
            total += p[i].score[j];
        }
        if (total > mx) {
            mx = total;
        }
        p[i].total = total;
    }
    cout << mx << '\n';
    for (int i = 0; i < n; i++) {
        if (p[i].total >= mx) {
            cout << p[i].name << '\n';
        }
    }
}
