#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 40)
        cout << "Fail";
    else if (n < 80)
        cout << "Pass";
    else
        cout << "Excellent";
}