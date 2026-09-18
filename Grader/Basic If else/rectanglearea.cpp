#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    if (a <= 0 && b <= 0) {
        cout << "invalid width and height";

    } else if (a <= 0) {
        cout << "invalid width";

    } else if (b <= 0) {
        cout << "invalid height";
    }
    cout << a * b;
}