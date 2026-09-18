#include <bits/stdc++.h>
using namespace std;

int main() {
    int all, cap;
    int mmax = 0;
    int fmax = 0;
    int num = 0;
    int gender, score1, score2;
    cin >> all >> cap;
    vector<int> pass(all), team(all);

    for (int i = 1; i <= all; i++) {
        cin >> gender >> score1 >> score2;

        if (score1 >= 9 && score2 >= 9) {

            if ((gender == 1 && mmax < cap) || (mmax < cap && fmax >= cap)) {
                mmax++;
                pass[num] = i;
                team[num] = 1;
                num++;

            }

            else if (gender == 2 && fmax < cap || (mmax >= cap && fmax < cap)) {
                fmax++;
                pass[num] = i;
                team[num] = 2;
                num++;
            }
        } else if (score1 >= 9 && mmax < cap) {
            mmax++;
            pass[num] = i;
            team[num] = 1;
            num++;

        } else if (score2 >= 9 && fmax < cap) {
            fmax++;
            pass[num] = i;
            team[num] = 2;
            num++;
        }
    }

    for (int i = 0; i <= num - 1; i++) {
        cout << pass[i] << ' ' << team[i] << '\n';
    }
}
