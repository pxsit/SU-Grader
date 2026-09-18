#include <bits/stdc++.h>
using namespace std;
struct Tram {
    int type;
    int passengers;
    int isOperational;
};

int main() {
    int n;
    cin >> n;
    vector<int> maxcap = {11, 14, 27};
    vector<Tram> trams(n);

    for (int i = 0; i < n; i++) {
        cin >> trams[i].type;
        trams[i].passengers = 0;
        trams[i].isOperational = 1;
    }

    while (true) {
        int Number;
        int PassCount;
        cin >> Number;
        if (Number < 0) {
            break;
        }
        cin >> PassCount;

        if (Number < 1 || Number > n) {
            continue;
        }

        int index = Number - 1;

        if (trams[index].isOperational == 1) {
            if (PassCount > 0) {
                if (trams[index].passengers + PassCount >= maxcap[trams[index].type - 1]) {
                    trams[index].passengers = maxcap[trams[index].type - 1];
                } else if (trams[index].passengers + PassCount < maxcap[trams[index].type - 1]) {
                    trams[index].passengers += PassCount;
                }
            } else if (PassCount < 0) {
                if (trams[index].passengers - abs(PassCount) < 0) {
                    trams[index].passengers = 0;
                } else if (trams[index].passengers - abs(PassCount) > 0) {
                    trams[index].passengers -= abs(PassCount);
                }
            } else {
                trams[index].isOperational = 0;
                trams[index].passengers = 0;
            }
        } else {
            trams[index].isOperational = 1;
            trams[index].passengers = 0;
        }
    }

    for (int j = 0; j < n; j++) {
        if (trams[j].isOperational == 1) {
            cout << trams[j].passengers << ' ';
        } else {
            cout << "-1 ";
        }
    }
}
