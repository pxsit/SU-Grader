#include <stdio.h>

int main() {
    int N, K, i, vote, max_votes = 0, winner;
    scanf("%d %d", &N, &K);
    int votes[N];
    for (i = 0; i < N; i++) {
        votes[i] = 0;
    }
    for (i = 0; i < K; i++) {
        scanf("%d", &vote);
        votes[vote - 1]++;
    }

    for (i = 0; i < N; i++) {
        if (votes[i] > max_votes) {
            max_votes = votes[i];
            winner = i + 1
        }
    }
    printf("%d\n", winner);
    printf("%d\n", max_votes);

    return 0;
}
