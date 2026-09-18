#include <bits/stdc++.h>
using namespace std;
int MaxDup, MaxVal, CurDup, CurVal;
int n;

int main() {
    cin >> n;
    int NumSet[n];
    for (int i = 0; i < n; i++) {
        cin >> NumSet[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (NumSet[i] == NumSet[j]) {
                CurDup++;
                CurVal = NumSet[i];
            }
            if (CurDup > MaxDup) {
                MaxDup = CurDup;
                MaxVal = CurVal;
            }
            if (CurVal > MaxVal && MaxDup == CurDup) {
                MaxVal = CurVal;
            }
        }
        CurDup = 0;
    }

    cout << MaxVal << '\n'
         << MaxDup;
}