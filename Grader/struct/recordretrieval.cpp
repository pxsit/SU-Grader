#include <bits/stdc++.h>
using namespace std;
struct Student {
    string id, name, surname;
    int year;
};

int main() {
    int n, y;

    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i].id >> students[i].name >> students[i].surname >> students[i].year;
    }
    cin >> y;

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].year == y) {
            cout << students[i].id << ' ' << students[i].name << ' ' << students[i].surname << '\n';
            found = 1;
        }
    }

    if (!found) {
        cout << "None" << '\n';
    }
}
