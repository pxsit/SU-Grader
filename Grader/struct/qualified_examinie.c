#include <stdio.h>

struct Student {
    char id[6];
    int score;
};

int main() {
    int N, i, total_score = 0;
    struct Student students[10000];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%s %d", students[i].id, &students[i].score);
        total_score += students[i].score;
    }

    int average = total_score / N;

    int count = 0;
    for (i = 0; i < N; i++) {
        if (students[i].score > average) {
            count++;
        }
    }
    printf("%d\n", count);
    for (i = 0; i < N; i++) {
        if (students[i].score > average) {
            printf("%s\n", students[i].id);
        }
    }
    

    return 0;
}