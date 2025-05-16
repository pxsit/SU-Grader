#include <stdio.h>

int main() {
    int N, i, j, temp;
    int arr[5000];
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d ", arr[0]);
    for (i = 1; i < N; i++) {
        if (arr[i] != arr[i - 1]) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}