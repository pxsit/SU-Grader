#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char id[9];
    char name[31];
    char surname[51];
    float gpa;
};

int main() {
    int N, i;
    struct Student students[MAX_STUDENTS];
    struct Student highest_gpa_student;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%s %s %s %f", students[i].id, students[i].name, students[i].surname, &students[i].gpa);
    }

    highest_gpa_student = students[0];
    for (i = 1; i < N; i++) {
        if (students[i].gpa > highest_gpa_student.gpa) {
            highest_gpa_student = students[i];
        }
    }

    printf("%s %s %s %.2f\n", highest_gpa_student.id, highest_gpa_student.name, highest_gpa_student.surname, highest_gpa_student.gpa);

    return 0;
}