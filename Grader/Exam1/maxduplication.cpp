#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int md = 0, mv = 0, cd = 0, cv = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                cd++;
                cv = a[i];
            }
            if (cd > md) {
                md = cd;
                mv = cv;
            }
            if (cv > mv && md == cd) {
                mv = cv;
            }
        }
        cd = 0;
    }

    cout << mv << '\n'
         << md;
}
