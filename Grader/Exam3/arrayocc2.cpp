#include <bits/stdc++.h>
using namespace std;
int A[100001];
int main() {
    int N, K, x;
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        A[i] = 0;
    }
    for (int i = 0; i < K; ++i) {
        cin >> x;
        if (x >= 1 && x <= N)
            ++A[x];
    }

    int maxZeroConsec = 0;
    int currentConsec = 0;
    for (int i = 1; i <= N; ++i) {
        if (A[i] == 0)
            ++currentConsec;
        else
            currentConsec = 0;
        if (currentConsec > maxZeroConsec)
            maxZeroConsec = currentConsec;
    }
    cout << maxZeroConsec << '\n';

    currentConsec = 0;
    for (int i = 1; i <= N; ++i) {
        if (A[i] == 0) {
            ++currentConsec;
            if (currentConsec == maxZeroConsec)
                cout << i << ' ';
        } else {
            currentConsec = 0;
        }
    }
}
