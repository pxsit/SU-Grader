#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int a = 0;
    cin >> n;
    int array1[n];
    int array2[n];
    for (int i = 0; i < n; i++) {
        cin >> array1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> array2[i];
    }
    for (int i = 0; i < n; i++) {
        int temp = array1[i] * array2[i];
        a += temp;
    }
    cout << a;
}