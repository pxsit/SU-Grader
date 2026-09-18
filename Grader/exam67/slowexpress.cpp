#include <bits/stdc++.h>
using namespace std;
int main() {
    int weight, total_weight = 0, trucks_needed;

    while (1) {
        cin >> weight;

        if (weight < 0) {
            break;
        }

        total_weight += weight;

        trucks_needed = total_weight / 800;
        total_weight -= 800 * trucks_needed;
        if (total_weight % 800 >= 500) {
            trucks_needed++;
            total_weight = 0;
        }
        cout << trucks_needed << '\n';
    }
}