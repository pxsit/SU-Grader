#include <bits/stdc++.h>
using namespace std;
int check(int cor1, int cor2, int cor3, int cor4) {
    int result1 = cor1 - cor3;
    if (result1 < 0) {
        result1 = 0 - result1;
    }
    int result2 = cor2 - cor4;
    if (result2 < 0) {
        result2 = 0 - result2;
    }
    int final = result1 + result2;
    return final;
}

int main() {
    int can = 0;
    int des1, des2;
    int m_x, m_y, max, num;
    cin >> m_x >> m_y >> max >> num;

    for (int i = 1; i <= num; i++) {

        cin >> des1 >> des2;
        if ((check(m_x, m_y, des1, des2)) <= max) {
            can++;
        }
    }

    cout << can;
}
