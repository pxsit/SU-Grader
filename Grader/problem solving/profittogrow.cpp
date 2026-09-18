#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, K, i, total, decision;

    cin >> N >> K;

    while (1) {
        total = 0;
        for (i = 0; i < N; i++) {
            int profit, loss;
            cin >> profit >> loss;
            total += profit - loss;
        }

        if (total >= K) {
            decision = 1;
        } else if (total < K / 2) {
            decision = -1;
        } else {
            decision = 0;
        }

        if (total > 0) {
            cout << "Profit " << total << '\n';
        } else if (total < 0) {
            cout << "Loss " << -total << '\n';
        } else {
            cout << "Breakeven" << '\n';
        }

        if (decision == 1) {
            cout << "Expand" << '\n';
            break;
        } else if (decision == -1) {
            cout << "Not expand" << '\n';
            break;
        } else {
            cout << "Wait and see" << '\n';

            total = 0;
            for (i = 0; i < N; i++) {
                int profit, loss;
                cin >> profit >> loss;
                total += profit - loss;
            }

            if (total > 0) {
                cout << "Profit " << total << '\n';
            } else if (total < 0) {
                cout << "Loss " << -total << '\n';
            } else {
                cout << "Breakeven" << '\n';
            }

            if (total >= K) {
                cout << "Expand" << '\n';
            } else {
                cout << "Not expand" << '\n';
            }
            break;
        }
    }
}