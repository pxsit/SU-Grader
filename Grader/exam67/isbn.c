#include <stdio.h>

int main() {
    int digits[9], i, sum = 0, last;

    for (i = 0; i < 9; i++) {
        scanf("%1d", &digits[i]);
    }

    for (i = 0; i < 9; i++) {
        sum += (10 - i) * digits[i];
    }

    last = 11 - (sum % 11);
    if (last == 11) {
        last = 0;
    }

    printf("%d", last);

    return 0;
}