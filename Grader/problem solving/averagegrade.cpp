#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d;
    float sum = 0;
    vector<int> score(8);
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    for (int i = 0; i < 8; i++) {
        cin >> score[i];
    }
    for (int i = 0; i < 8; i++) {
        if (score[i] >= a) {
            cout << "4" << '\n';
            sum += 4;
        } else if (score[i] >= b) {
            cout << "3" << '\n';
            sum += 3;
        } else if (score[i] >= c) {
            cout << "2" << '\n';
            sum += 2;
        } else if (score[i] >= d) {
            cout << "1" << '\n';
            sum += 1;
        } else {
            cout << "0" << '\n';
        }
    }
    cout << fixed << setprecision(6) << sum / 8;
}
