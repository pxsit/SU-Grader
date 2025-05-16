#include <stdio.h>




int main(){
    int m;
    scanf("%d" ,&m);
    for (int i = 1; i <= m;i++ )
    {
        for (int j = 1; j <= m; j++)
        {
         if (((i == 2 || i == m-1) && j > 1 && j < m) || ((j == 2 || j == m-1) && i > 1 && i < m)){
          printf(" ");
         }
         else {
                printf("*");

        }
        }
        printf("\n");


    }


return 0;
}

