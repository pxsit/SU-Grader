#include <stdio.h>
#include <stdlib.h>
long long minDiff = 1000000;
long long bestSet1[100], bestSet2[100];
long long bestSize1, bestSize2;

void findBestSplit(long long arr[], long long n, long long currentIndex, long long set1[], long long set2[], long long size1, long long size2, long long sum1, long long sum2) {
    if (currentIndex == n) {
        if ((size1 == n / 2 && size2 == n / 2) || (size1 == n / 2 + 1 && size2 == n / 2)) {
            long long diff = abs(sum1 - sum2);
            if (diff < minDiff) {
                minDiff = diff;
                bestSize1 = size1;
                bestSize2 = size2;
                for (long long i = 0; i < size1; i++)
                    bestSet1[i] = set1[i];
                for (long long i = 0; i < size2; i++)
                    bestSet2[i] = set2[i];
            }
        }
        return;
    }

    if (size1 < n / 2 + 1) {
        set1[size1] = arr[currentIndex];
        findBestSplit(arr, n, currentIndex + 1, set1, set2, size1 + 1, size2, sum1 + arr[currentIndex], sum2);
    }

    if (size2 < n / 2) {
        set2[size2] = arr[currentIndex];
        findBestSplit(arr, n, currentIndex + 1, set1, set2, size1, size2 + 1, sum1, sum2 + arr[currentIndex]);
    }
}

int main() {
    long long n;
    scanf("%d", &n);

    long long arr[n];
    for (long long i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    long long set1[n], set2[n];
    findBestSplit(arr, n, 0, set1, set2, 0, 0, 0, 0);

    for (long long i = 0; i < bestSize2; i++) {
        printf("%d", bestSet2[i]);
        if (i < bestSize2 - 1) printf(" ");
    }
    printf("\n");
    for (long long i = 0; i < bestSize1; i++) {
        printf("%d", bestSet1[i]);
        if (i < bestSize1 - 1) printf(" ");
    }

    return 0;
}