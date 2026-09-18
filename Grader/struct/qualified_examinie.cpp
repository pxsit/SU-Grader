#include <bits/stdc++.h>
using namespace std;
struct Student {
    char id[6];
    int score;
};

int main() {
    int N, i, total_score = 0;
    struct Student students[10000];

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> students[i].id >> students[i].score;
        total_score += students[i].score;
    }

    int average = total_score / N;

    int count = 0;
    for (i = 0; i < N; i++) {
        if (students[i].score > average) {
            count++;
        }
    }
    cout << count << '\n';
    for (i = 0; i < N; i++) {
        if (students[i].score > average) {
            cout << students[i].id << '\n';
        }
    }
}