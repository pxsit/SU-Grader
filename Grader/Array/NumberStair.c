#include <stdio.h>
#include <math.h>

int n , m;

int main(){
    scanf("%d" , &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%d"  , array[n- i - 1]);
        }
        //printf(" - > %d" , array[n-i-1]);
        printf("\n");
        
    }
    
    
}
