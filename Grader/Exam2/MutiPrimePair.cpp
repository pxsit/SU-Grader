#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int max_prime = 100000;
ll ListsOfPrime[max_prime];
int primeCount = 0;

void generatePrimes() {
    ll isPrime[max_prime + 1] = {0};
    primeCount = 0;

    for (int i = 2; i <= max_prime; i++) {
        if (isPrime[i] == 0) {
            ListsOfPrime[primeCount++] = i;
            for (int j = i * 2; j <= max_prime; j += i) {
                isPrime[j] = 1;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    ll K[t];
    t -= 1;

    for (int i = 0; i < t; i++) {
        cin >> K[i];
    }

    generatePrimes();

    for (int i = 0; i < t; i++) {
        ll limit = K[i];
        ll minProduct = 1e18;
        int found = 0;
        for (int j = 0; j < primeCount && found == 0; j++) {
            for (int p = j + 1; p < primeCount; p++) {
                ll product = ListsOfPrime[j] * ListsOfPrime[p];
                if (j == p)
                    continue;
                if (product <= minProduct && product >= limit) {
                    minProduct = product;
                }
                if (minProduct == limit) {
                    found = 1;
                    break;
                }
            }
        }
        cout << minProduct << '\n';
    }
    cout << "100001";
}
