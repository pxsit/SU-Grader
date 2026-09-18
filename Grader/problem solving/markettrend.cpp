#include <bits/stdc++.h>
using namespace std;
int main() {
    int day;
    int index;
    int dex;
    int streak = 0;
    int max_streak = 0;
    cin >> day;
    for (int i = 1; i <= day; i++) {

        cin >> index;
        if (index > dex && i != 1) {
            streak++;
        } else {
            streak = 0;
        }
        dex = index;

        if (streak > max_streak) {
            max_streak = streak;
        }
    }
    if (max_streak == 0) {
        cout << "No value increase";
    } else {
        cout << max_streak;
    }
}
