#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    int c = 0;
    cin >> a;
    vector<int> buy(a);
    for (int i = 0; i < a; i++) {
        cin >> buy[i];
    }
    cin >> b;
    vector<int> lot(b);
    for (int i = 0; i < b; i++) {
        cin >> lot[i];
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (buy[i] % 1000 == lot[j]) {
                c++;
                break;
            }
        }
    }
    cout << c;
}
