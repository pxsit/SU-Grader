#include <bits/stdc++.h>
using namespace std;
int fac(int a) {
    if (a <= 0) {

    } else {
        int b = 1;
        for (int i = 1; i <= a; i++) {
            b *= i;
        }
        return b;
    }
}

int main() {
    int n, result = 0;
    int mcount = 0;
    int original_values[12];
    int unused_value;
    cin >> n;
    int f = n;
    int array[12];
    char in[13];
    cin >> in;
    for (int i = 0; i < n; i++) {
        array[i] = ((int)in[i]) - 65;
    }
    for (int i = 0; i < n; i++) {
        original_values[i] = array[i];
        if (i != 0 && array[i] > original_values[i - 1]) {
            array[i] -= mcount;
        }
        result += array[i] * fac(f - 1);
        f--;
        mcount++;
    }
    cout << result + 1;
}