#include <bits/stdc++.h>
using namespace std;
const int max_name = 101;
const int max_students = 100;

typedef struct {
    char name[max_name];
    char thai_name[max_name];
    int score;
    int id;
} Student;

void conthai(char *eng, char *thai) {
    char *conversion = "Ã Â¸Â­Ã Â¸Å¡Ã Â¸â€žÃ Â¸â€Ã Â¸Â­Ã Â¸Å¸Ã Â¸ÂÃ Â¸Â«Ã Â¸Â­Ã Â¸Ë†Ã Â¸â€žÃ Â¸Â¥Ã Â¸Â¡Ã Â¸â„¢Ã Â¸Â­Ã Â¸Å¾Ã Â¸â€žÃ Â¸Â­Ã Â¸ÂªÃ Â¸â€”Ã Â¸Â¢Ã Â¸Â§Ã Â¸Â­Ã Â¸Â­Ã Â¸Â¢";
    while (*eng) {
        if (*eng >= 'A' && *eng <= 'Z') {
            *thai++ = conversion[*eng - 'A'];
        } else if (*eng >= 'a' && *eng <= 'z') {
            *thai++ = conversion[*eng - 'a'];
        } else {
            *thai++ = *eng;
        }
        eng++;
    }
    *thai = '\0';
}

int compstud(const void *a, const void *b) {
    Student *s1 = (Student *)a;
    Student *s2 = (Student *)b;

    if (s1->score != s2->score)
        return s2->score - s1->score;

    int nameComp = strcmp(s1->thai_name, s2->thai_name);
    if (nameComp != 0)
        return nameComp;
    return s1->id - s2->id;
}

int main() {
    int n, m;
    cin >> n >> m;

    Student students[max_students];

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].score >> students[i].id;
        conthai(students[i].name, students[i].thai_name);
    }

    qsort(students, n, sizeof(Student), compstud);

    for (int i = 0; i < m; i++) {
        cout << students[i].score << ' ' << students[i].name << ' ' << students[i].id << '\n';
    }
}
