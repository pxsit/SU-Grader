#include <stdio.h>
#include <math.h>
#define MAX_PRIME 100000
long long int ListsOfPrime[MAX_PRIME];
int primeCount = 0; 

void generatePrimes() {
    long long int isPrime[MAX_PRIME + 1] = {0}; 
    primeCount = 0;

    for (int i = 2; i <= MAX_PRIME; i++) {
        if (isPrime[i] == 0) {
            ListsOfPrime[primeCount++] = i;
            for (int j = i * 2; j <= MAX_PRIME; j += i) {
                isPrime[j] = 1; 
            }
        }
    }
}

int main() {
    int t; 
    scanf("%d", &t);
    long long int K[t]; 
    t-=1;

    for (int i = 0; i < t; i++) {
        scanf("%lld", &K[i]);
    }

    generatePrimes();

    for (int i = 0; i < t; i++) {
        long long int limit = K[i];
        long long int minProduct = 1e18;
        int brrrr = 0;
        for (int j = 0; j < primeCount && brrrr == 0; j++) {
            for (int p = j + 1; p < primeCount; p++) {
                long long int product = ListsOfPrime[j] * ListsOfPrime[p];
                if(j == p)
                    continue;
                if (product <= minProduct && product >= limit) {
                    minProduct = product;
                }
                if (minProduct == limit) {
                    brrrr = 1;
                    break;
                }
            }
        }
        printf("%lld\n", minProduct);
    }
    printf("100001");
    return 0;
}
