#include <stdio.h>
#include <math.h>

int n , max;

int main(){
    scanf("%d" , &n);
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            if (j >= abs((n/2) - i ) && j <= (n/2) + i )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); 
    }
/*
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
*/
    for (int i = n/2; i > 0; i--)
    {
        for (int j = 0; j < n; j++)
        {   
            if (j >= n/2 - i && j <= i + n/2 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); 
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i == n/2)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
}