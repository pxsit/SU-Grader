#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[5][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &array[j][i]);
        }
    }

    int max_diff = 0, min_diff = 2147483647;
    for (int j = 0; j < n; j++) {
        int mx = array[0][j], mn = array[0][j];

        for (int i = 1; i < 5; i++) {
            if (array[i][j] > mx) {
                mx = array[i][j];
            } else if (array[i][j] < mn) {
                mn = array[i][j];
            }
        }

        int diff = mx - mn;
        if (diff > max_diff) {
            max_diff = diff;
        }
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    printf("%d %d %d\n", max_diff, min_diff, max_diff - min_diff);

    return 0;
}