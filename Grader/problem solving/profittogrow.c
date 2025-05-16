#include <stdio.h>

int main() {
    int N, K, i, total, decision;

    scanf("%d %d", &N, &K);

    while (1) {
        total = 0;
        for (i = 0; i < N; i++) {
            int profit, loss;
            scanf("%d %d", &profit, &loss);
            total += profit - loss;
        }

        if (total >= K) {
            decision = 1; 
        } else if (total < K / 2) {
            decision = -1; 
        } else {
            decision = 0;
        }

        if (total > 0) {
            printf("Profit %d\n", total);
        } else if (total < 0) {
            printf("Loss %d\n", -total);
        } else {
            printf("Breakeven\n");
        }

        if (decision == 1) {
            printf("Expand\n");
            break;
        } else if (decision == -1) {
            printf("Not expand\n");
            break;
        } else {
            printf("Wait and see\n");

            total = 0;
            for (i = 0; i < N; i++) {
                int profit, loss;
                scanf("%d %d", &profit, &loss);
                total += profit - loss;
            }

            if (total > 0) {
                printf("Profit %d\n", total);
            } else if (total < 0) {
                printf("Loss %d\n", -total);
            } else {
                printf("Breakeven\n");
            }

            if (total >= K) {
                printf("Expand\n");
            } else {
                printf("Not expand\n");
            }
            break;
        }
    }

    return 0;
}