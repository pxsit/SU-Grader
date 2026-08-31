#include <math.h>
#include <stdio.h>

int m, sum;

int main() {
    scanf("%d", &m);
    for (int i = 1; i < m + 1; i++) {
        // sum += pow(i,2) * pow(-1 , i);
        if (i % 2 == 0) {
            sum += i * i;
        } else {
            sum -= i * i;
        }
    }
    printf("%d", sum);
}