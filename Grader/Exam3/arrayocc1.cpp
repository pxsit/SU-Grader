#include <bits/stdc++.h>
using namespace std;
int A[100001];
int main() {
    int N, K, x;
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        A[i] = 0;
    }
    int success = 0;
    int outBound = 0;
    int dup = 0;
    for (int i = 0; i < K; ++i) {
        cin >> x;
        if (x < 1 || x > N)
            ++outBound;
        else {
            if (A[x] > 0)
                ++dup;
            else
                ++success;
            ++A[x];
        }
    }
    cout << success << '\n'
         << outBound << '\n'
         << dup << '\n';
    int maxDup = 0;
    for (int i = 1; i <= N; ++i) {
        if (A[i] > maxDup)
            maxDup = A[i];
    }
    for (int i = 1; i <= N; ++i) {
        if (A[i] == maxDup)
            cout << i << ' ';
    }
}
