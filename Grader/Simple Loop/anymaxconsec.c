#include <stdio.h>

int main() {
    int numbers[1000], i = 0, current_num, max_count = 1, current_count = 1, max_num;
    while (1) {
        scanf("%d", &numbers[i]);
        if (numbers[i] == 0) {
            break;
        }
        i++;
    }

    current_num = numbers[0];
    max_num = numbers[0];
    for (int j = 1; j < i; j++) {
        if (numbers[j] == current_num) {
            current_count++;
            if (current_count > max_count) {
                max_count = current_count;
                max_num = current_num;
            }
        } else {
            current_num = numbers[j];
            current_count = 1;
        }
    }

    printf("%d\n%d", max_count, max_num);

    return 0;
}