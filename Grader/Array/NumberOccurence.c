#include <stdio.h>

int n , k , t;

int main(){
    scanf("%d" , &n);
    int array[n];
    int used[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &array[i]);
    }
    scanf("%d" , &k);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == k)
        {
            printf("%d " , i+1);
            t =1;
        }

    }
    if (t == 0)
    {
        printf("0");
    }
    
    
}