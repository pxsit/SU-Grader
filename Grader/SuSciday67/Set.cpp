#include <bits/stdc++.h>
using namespace std;
int main() {
    int numset, intersect, complisect, a, b;
    cin >> numset >> intersect >> complisect >> a;
    b = numset - intersect - (a - intersect + complisect) + intersect;
    cout << b;
}
