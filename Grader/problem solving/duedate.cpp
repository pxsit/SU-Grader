#include <bits/stdc++.h>
using namespace std;
int main() {
    int worker, n, first_unfinished = 0;
    int day = 1;
    cin >> worker;
    cin >> n;
    int finish[n];
    int remaining_work[n];
    for (int i = 0; i < n; i++) {
        cin >> remaining_work[i];
    }
    while (1) {
        int remaining_count = n;
        for (int i = 0; i < n; i++) {
            if (remaining_work[i] == 0) {
                remaining_count--;
            }
            if (remaining_count == 0) {
                break;
            }
        }
        if (remaining_count == 0) {
            break;
        }
        int work = worker * 100;
        for (int i = first_unfinished; i < n; i++) {
            if (work >= remaining_work[i]) {
                work -= remaining_work[i];
                remaining_work[i] = 0;
                finish[i] = day;
            } else {
                remaining_work[i] -= work;
                work = 0;
                first_unfinished = i;
                day++;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << finish[i] << '\n';
    }
}