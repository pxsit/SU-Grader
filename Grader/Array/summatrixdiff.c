#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    int sum = 0;
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < i; j ++)
        {
            sum += abs(matrix[i][j] - matrix[j][i]);
        }
    }
    printf("%d", sum);
}