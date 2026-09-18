#include <bits/stdc++.h>
using namespace std;
int main() {
    int numbers[10000];
    int num_count = 0;
    int num;
    while (1) {
        cin >> num;
        if (num == 0) {
            break;
        }
        numbers[num_count] = num;
        num_count++;
    }
    for (int i = num_count - 1; i >= 0; i--) {
        cout << numbers[i] << ' ';
    }

}