#include <stdio.h>

int n;

int main(){
    scanf("%d" ,  &n);
    int InputArray[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            InputArray[i][j] = 7;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            scanf("%d" , &InputArray[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("0 ");
            }
            else if(j > i)
            {
                printf("%d " , InputArray[j][i]);
            }
            else
            {
                printf("%d " , InputArray[i][j]);
            }
            
            
        }
        printf("\n");
    }
    
    
}