#include <stdio.h>

int Water[7] , Sugar[7] , LeftOver , Stacks;

int main(){
    for (int i = 0; i < 7; i++)
    {
        scanf("%d %d" ,  &Water[i] , &Sugar[i]);
    }

    for (int i = 0; i < 7; i++)
    {

        if (Water[i] / 250 > 0 && Sugar[i] / 15 > 0)
        {
            if (Water[i] / 250 > Sugar[i] / 15)
            {
                Stacks = Sugar[i] / 15;
                printf("%d" , Sugar[i] / 15);
            }
            else
            {
                Stacks = Water[i] / 250;
                printf("%d" , Water[i] / 250);
            }
            LeftOver = 0;
            if (Water[i] % 250 > 0 || Water[i] - (250*Stacks) > 0)
            {
                printf(" water");
            }
            
        }
        else
        {
            printf("0");
            if (Water[i] > 0)
            {
                printf(" water");
                LeftOver = 1;
            }
        }

        printf("\n");
        
    }
    
    
}