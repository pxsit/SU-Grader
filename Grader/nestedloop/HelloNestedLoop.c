#include <stdio.h>

int m , n;


int main(){
    scanf("%d %d" , &m , &n);
    int l[m][n];
    for (int i = 0; i < m+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            printf("(%d, %d) " , i , j );
        }
        printf("\n");
    }
    
}
