#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the minimum
    int min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    // Find the maximum
    int max = num1;
    if (num2 <= max) {
        max = num2;
    }
    if (num3 <= max) {
        max = num3;
    }

    // Find the middle
    int mid = num1 + num2 + num3 - min - max;

    printf("%d %d %d",min,mid,max);

    return 0;
}