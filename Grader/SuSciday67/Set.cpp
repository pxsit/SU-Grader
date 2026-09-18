#include <bits/stdc++.h>
using namespace std;
int NumSet, Intersect, CompliSect, a, b;

int main() {
    cin >> NumSet >> Intersect >> CompliSect >> a;
    b = NumSet - Intersect - (a - Intersect + CompliSect) + Intersect;
    cout << b;
}