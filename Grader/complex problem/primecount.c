#include <stdio.h>

int main() {
    int N, count = 0;
    scanf("%d", &N);

    int prime[N];
    for (int i = 2; i < N; i++) {
        prime[i] = 1;
    }

    for (int p = 2; p * p <= N; p++) {
        if (prime[p] == 1) {
            for (int i = p * p; i < N; i += p) {
                prime[i] = 0;
            }
        }
    }

    for (int i = 2; i < N; i++) {
        if (prime[i] == 1) {
            count++;
        }
    }

    printf("%d", count);

}