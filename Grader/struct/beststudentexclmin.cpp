#include <bits/stdc++.h>
using namespace std;
struct student {
    char name[11];
    int score[9];
    int total;
};
int main() {
    int n, t;
    cin >> n >> t;
    struct student p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].name;
        for (int j = 0; j < t; j++) {
            int a;
            p[i].score[j] = 0;
            cin >> a;
            int min = a;
            int minInd = j;
            for (int k = 0; k < j; k++) {
                if (p[i].score[k] < min) {
                    min = p[i].score[k];
                    minInd = k;
                }
            }
            if (a > min || j < t - 1) {
                p[i].score[minInd] = a;
            }
        }
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < t; j++) {
            total += p[i].score[j];
        }
        if (total > max) {
            max = total;
        }
        p[i].total = total;
    }
    cout << max << '\n';
    for (int i = 0; i < n; i++) {
        if (p[i].total >= max) {
            cout << p[i].name << '\n';
        }
    }
}
