#include <bits/stdc++.h>
using namespace std;
struct Student {
    string id;
    int score;
};

int main() {
    int n, total_score = 0;

    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i].id >> students[i].score;
        total_score += students[i].score;
    }

    int average = total_score / n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].score > average) {
            count++;
        }
    }
    cout << count << '\n';
    for (int i = 0; i < n; i++) {
        if (students[i].score > average) {
            cout << students[i].id << '\n';
        }
    }
}
