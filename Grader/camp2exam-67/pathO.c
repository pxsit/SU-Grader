#include <stdio.h>

void printMap(char map[100][100], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, nPoint;
    scanf("%d", &N);
    scanf("%d", &nPoint);
    int points[nPoint][2];
    for (int i = 0; i < nPoint; i++) {
        scanf("%d %d", &points[i][0], &points[i][1]);
    }

    for (int i = 0; i < nPoint; i++) {
        if (points[i][0] < 0 || points[i][0] >= N || points[i][1] < 0 || points[i][1] >= N) {
            printf("Out of range\n");
            return 0;
        }
    }

    char map[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            map[i][j] = '_';
        }
    }

    char currentChar = 'A';
    for (int i = 0; i < nPoint - 1; i++) {
        int r1 = points[i][0];
        int c1 = points[i][1];
        int r2 = points[i + 1][0];
        int c2 = points[i + 1][1];

        map[r1][c1] = currentChar;

        if (r1 != r2 && c1 != c2) {
            if (c1 < c2) {
                for (int j = c1 + 1; j <= c2 - 1; j++) {
                    map[r1][j] = '>';
                }
                map[r1][c2] = (r1 < r2) ? 'v' : '^';
            } else {
                for (int j = c1 - 1; j >= c2 + 1; j--) {
                    map[r1][j] = '<';
                }
                map[r1][c2] = (r1 < r2) ? 'v' : '^';
            }
            if (r1 < r2) {
                for (int j = r1 + 1; j < r2; j++) {
                    map[j][c2] = 'v';
                }
            } else {
                for (int j = r1 - 1; j > r2; j--) {
                    map[j][c2] = '^';
                }
            }
        } else {
            if (r1 == r2) { 
                if (c1 < c2) {
                    for (int j = c1 + 1; j <= c2; j++) {
                        map[r1][j] = '>';
                    }
                } else {
                    for (int j = c1 - 1; j >= c2; j--) {
                        map[r1][j] = '<';
                    }
                }
            } else {
                if (r1 < r2) {
                    for (int j = r1 + 1; j <= r2; j++) {
                        map[j][c1] = 'v';
                    }
                } else {
                    for (int j = r1 - 1; j >= r2; j--) {
                        map[j][c1] = '^';
                    }
                }
            }
        }

        currentChar++;
    }

    map[points[nPoint - 1][0]][points[nPoint - 1][1]] = currentChar;
    printMap(map, N);
    return 0;
}