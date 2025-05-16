#include <stdio.h>

int n , a ,b ,c;

int main(){
    scanf("%d" , &n);
    char Result[n][39];
    int OldScore[n] , NewScore[n] ,MessianScore[n] , Win[n] , Lose[n] , Draw[n];
    for (int i = 0; i < n; i++)
    {
        Win[i] = 0;
        Lose[i] = 0;
        Draw[i] = 0;
        MessianScore[i] = 0;
        NewScore[i] = 0;
        OldScore[i] = 0;
        for (int j = 0; j < 39; j++)
        {
            scanf("%c" , &Result[i][j]);
        }
        
    }
    /*

    printf("\n****************************************\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 39; j++)
        {
            printf("%c" , Result[i][j]);
        }
        printf("\n");
    }
    printf("\n****************************************\n");
    
    */

    for (int i = 0; i < n; i++)
    {
        a ,b ,c = 0;
        for (int j = 0; j < 39; j++)
        {
            //Old Ver.
            if (Result[i][j] == 'W')
            {
                OldScore[i] += 2;
                Win[i]++;
            }
            else if (Result[i][j] == 'D')
            {
                OldScore[i] += 1;
                Draw[i]++;
            }
            else if (Result[i][j] == 'L')
            {
                OldScore[i] += 0;
                Lose[i]++;
            }
            
            //New Ver.
            if (Result[i][j] == 'W')
            {
                NewScore[i] += 3;
            }
            else if (Result[i][j] == 'D')
            {
                NewScore[i] += 1;
            }
            else if (Result[i][j] == 'L')
            {
                NewScore[i] += 0;
            }
            
            //Messian Ver.
            if (Result[i][j] == 'W')
            {
                MessianScore[i] += 5;
            }
            else if (Result[i][j] == 'D')
            {
                MessianScore[i] += 1;
            }
            else if (Result[i][j] == 'L')
            {
                MessianScore[i] -= 1;
            }
        }
        /*
        Win[i] = a;
        Draw[i] = b;
        Lose[i] = c;
        a , b , c = 0;
        */
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d %d %d %d\n" , Win[i] , Draw[i] , Lose[i] , OldScore[i] , NewScore[i] , MessianScore[i]);
    }
    
    
    
}