#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 101
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME];
    char thai_name[MAX_NAME];
    int score;
    int id;
} Student;

void conthai(char* eng, char* thai) {
    char* conversion = "อบคดอฟกหอจคลมนอพคอสทยวออย";
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

int compstud(const void* a, const void* b) {
    Student* s1 = (Student*)a;
    Student* s2 = (Student*)b;
    
    if (s1->score != s2->score)
        return s2->score - s1->score;
    
    int nameComp = strcmp(s1->thai_name, s2->thai_name);
    if (nameComp != 0)
        return nameComp; 
    return s1->id - s2->id; 
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    Student students[MAX_STUDENTS];
    
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].score, &students[i].id);
        conthai(students[i].name, students[i].thai_name);
    }
    
    qsort(students, n, sizeof(Student), compstud);
    
    for (int i = 0; i < m; i++) {
        printf("%d %s %d\n", students[i].score, students[i].name, students[i].id);
    }
    
    return 0;
}