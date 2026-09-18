#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    int c = 0;
    cin >> a;
    while (a != 0) {
        cin >> b;
        if (b == 0)
            break;
        if (b == a && b != 0) {
            c++;
        }
    }
    if (c == 0)
        cout << "None";
    else
        cout << c;
}