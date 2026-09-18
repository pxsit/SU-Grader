#include <bits/stdc++.h>
using namespace std;
struct Student {
    char id[9];
    char name[31];
    char surname[51];
    int year;
};

int main() {
    int N, Y, i;
    struct Student students[20000];

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> students[i].id >> students[i].name >> students[i].surname >> students[i].year;
    }
    cin >> Y;

    int found = 0;
    for (i = 0; i < N; i++) {
        if (students[i].year == Y) {
            cout << students[i].id << ' ' << students[i].name << ' ' << students[i].surname << '\n';
            found = 1;
        }
    }

    if (!found) {
        cout << "None" << '\n';
    }
}