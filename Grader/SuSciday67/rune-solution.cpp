#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000000;

int N, K;
string S;
int A[maxn];
int B[maxn];

int main() {

    cin >> N >> K >> S;

    for (int i = 0; i < N; i++) {
        A[i] = S[i] - 'A';
    }
    for (int j = 30; j >= 0; j--) {
        if (K & (1 << j)) {
            for (int i = 0; i < N; i++) {
                int o = (i - (1 << j)) % N;
                if (o < 0) {
                    o += N;
                }
                B[o] = A[i] ^ A[o];
            }
            memcpy(A, B, sizeof(A));
        }
    }

    for (int i = 0; i < N; i++) {
        S[i] = A[i] + 'A';
    }
    cout << S << '\n';
}
