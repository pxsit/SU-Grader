#include <stdio.h>

int main() {
    int weight, total_weight = 0, trucks_needed;

    while (1) {
        scanf("%d", &weight);

        if (weight < 0) {
            break;
        }

        total_weight += weight;

        trucks_needed = total_weight / 800;
        total_weight -= 800*trucks_needed;
        if (total_weight % 800 >= 500) {
            trucks_needed++;
            total_weight = 0;
        }
        printf("%d\n", trucks_needed);
    }

    return 0;
}