#include <stdio.h>

int MaxDup , MaxVal , CurDup , CurVal;
int n;

int main(){
    scanf("%d" , &n);
    int NumSet[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &NumSet[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (NumSet[i] == NumSet[j])
            {
                CurDup++;
                CurVal = NumSet[i];
            }
            if (CurDup > MaxDup)
            {
                MaxDup = CurDup;
                MaxVal = CurVal;
            }
            if (CurVal > MaxVal && MaxDup == CurDup)
            {
                MaxVal = CurVal;
            }
            
            
        }
        CurDup = 0;
        
    }
    
    printf("%d\n%d" , MaxVal , MaxDup);
    
}