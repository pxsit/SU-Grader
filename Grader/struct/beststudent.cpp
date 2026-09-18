#include <bits/stdc++.h>
using namespace std;
struct Student {
    string id, name, surname;
    float gpa;
};

int main() {
    int n;

    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i].id >> students[i].name >> students[i].surname >> students[i].gpa;
    }

    Student best = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].gpa > best.gpa) {
            best = students[i];
        }
    }

    cout << best.id << ' ' << best.name << ' ' << best.surname << ' ' << fixed << setprecision(2) << best.gpa << '\n';
}
