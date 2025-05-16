#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int j = 0; j < n; j ++)
    {
        for (int i = 0; i < (n + 1) / 2; i ++)
        {
            if (n - j > i && i <= j)
            {
                printf("A");
                continue;
            }
            if (n - j >= i && j < i)
            {
                printf("1");
                continue;
            }
            if (j > i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}