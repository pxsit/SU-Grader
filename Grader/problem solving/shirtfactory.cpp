#include <bits/stdc++.h>
using namespace std;
int main() {
    int c, d;
    int sum = 0;
    int cost;
    cin >> c;

    for (int i = 1; i <= 7; i++) {
        cin >> d;
        sum += d;
    }
    if (sum > 250) {
        cost = (100 * 80) + (150 * 70) + 60 * (sum - 250);

    } else if (sum > 100) {
        cost = (100 * 80) + (sum - 100) * 70;

    } else if (sum <= 100) {
        cost = (sum * 80);
    }
    int income = sum * c;
    if (income - cost <= 0) {
        cout << cost << '\n'
             << income << '\n'
             << "No Profit";
    } else {
        int profit = income - cost;

        cout << cost << '\n'
             << income << '\n'
             << profit;
    }
}
