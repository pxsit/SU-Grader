#include <stdio.h>
#include <string.h>

struct Student {
    char id[9];
    char name[31];
    char surname[51];
    int year;
};

int main() {
    int N, Y, i;
    struct Student students[20000];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%s %s %s %d", students[i].id, students[i].name, students[i].surname, &students[i].year);
    }
    scanf("%d", &Y);
 
    int found = 0;
    for (i = 0; i < N; i++) {
        if (students[i].year == Y) {
            printf("%s %s %s\n", students[i].id, students[i].name, students[i].surname);
            found = 1;
        }
    }

    if (!found) {
        printf("None\n");
    }

    return 0;
}