#include <bits/stdc++.h>
using namespace std;
int main() {
    int can = 0;
    int des1, des2;
    int mx, my, cap, num;
    cin >> mx >> my >> cap >> num;

    for (int i = 1; i <= num; i++) {

        cin >> des1 >> des2;
        if (abs(mx - des1) + abs(my - des2) <= cap) {
            can++;
        }
    }

    cout << can;
}
