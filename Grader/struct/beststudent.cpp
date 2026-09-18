#include <bits/stdc++.h>
using namespace std;
const int max_students = 100;

struct Student {
    char id[9];
    char name[31];
    char surname[51];
    float gpa;
};

int main() {
    int N, i;
    struct Student students[max_students];
    struct Student highest_gpa_student;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> students[i].id >> students[i].name >> students[i].surname >> students[i].gpa;
    }

    highest_gpa_student = students[0];
    for (i = 1; i < N; i++) {
        if (students[i].gpa > highest_gpa_student.gpa) {
            highest_gpa_student = students[i];
        }
    }

    cout << highest_gpa_student.id << ' ' << highest_gpa_student.name << ' ' << highest_gpa_student.surname << ' ' << fixed << setprecision(2) << highest_gpa_student.gpa << '\n';
}
