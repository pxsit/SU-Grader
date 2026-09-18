#include <bits/stdc++.h>
using namespace std;
int main() {
    int price[12] = {9, 6, 7, 8, 4, 6, 1, 5, 10, 2, 6, 3};
    char n[1001];
    cin >> n;
    int a[strlen(n)];
    int sum = 0;
    for (int i = 0; i < strlen(n); i++) {
        a[i] = n[i] - 'A';
        int temp = a[i];
        sum += price[temp];
    }
    if (sum == 427) {
        cout << "Balance";
    } else if (sum > 427) {
        cout << "Loss " << sum - 427;
    } else {
        cout << "Profit " << 427 - sum;
    }
}