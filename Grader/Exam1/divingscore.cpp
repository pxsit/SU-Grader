#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int max = 1;
    int min = 10;
    int sum = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (n != 3) {
            if (array[i] < min) {
                min = array[i];
            }
            if (array[i] > max) {
                max = array[i];
            }
        }
    }
    if (n != 3) {
        for (int i = 0; i < n; i++) {
            sum += array[i];
        }
        sum -= (max + min);
    } else {
        for (int i = 0; i < n; i++) {
            sum += array[i];
        }
    }
    cout << sum;
}