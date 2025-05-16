#include <stdio.h>

int Avail1 , Avail2 , ItemCount;

int main(){
    scanf("%d" , &ItemCount);
    int Items[ItemCount];
    for (int i = 0; i < ItemCount; i++)
    {
        scanf("%d" , &Items[i]);
    }

    Avail1 = 20000;
    Avail2 = 20000;
    
    for (int i = 0; i < ItemCount; i++)
    {
        //printf("Load : %d \n" , Items[i]);
        if (Avail1 >= Items[i])
        {
            Avail1 -= Items[i];
            printf("1\n");
        }
        else
        {
            if (Items[i] <= Avail2)
            {
                Avail2 -= Items[i];
                printf("2\n");
            }
            else
            {
                printf("0\n");
            }
            
        }
        
    }
    
    
}