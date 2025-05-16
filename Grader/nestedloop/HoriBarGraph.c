#include <stdio.h>

int main() {
    int num;

    while (1) {
        scanf("%d", &num);

        if (num <= 0) {
            break;
        }

        for (int i = 0; i < num; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}