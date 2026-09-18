#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a % 3 == 0 && a % 5 == 0)
        cout << "3 5";
    else if (a % 3 == 0)
        cout << "3";
    else if (a % 5 == 0)
        cout << "5";
}