#include <bits/stdc++.h>
using namespace std;
int main() {
    char c[55];
    int array[26];
    int a = 0;
    cin >> c;
    for (int i = 0; i < 26; i++) {
        array[i] = 0;
    }
    for (int i = 0; i < strlen(c); i++) {
        if (a == 6) {
            break;
        } else {
            array[((int)c[i]) - 97]++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (array[i] != 0) {
            cout << array[i];
        }
    }
}