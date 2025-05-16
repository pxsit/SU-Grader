#include <stdio.h>
#include <math.h>

int fac(int a)
{
    if (a <= 0)
    {
        return 0;
    }
    else
    {
        int b = 1;
        for (int i = 1; i <= a; i ++)
        {
            b *= i;
        }
        return b;
    }
}

int main() {
    int n,result = 0;
    int mcount  = 0;
    int wtf[12];
    int wtaf;
    scanf("%d", &n);
    int f = n;
    int array[12];
    char in[13];
    scanf("%s", in);
    for(int i = 0; i < n; i++){
        array[i] = ((int) in[i])-65;
    }
    for(int i=0 ; i < n; i++){
        wtf[i] = array[i];
        if(i != 0 && array[i] > wtf[i-1]){
            array[i] -= mcount;
        }
        result += array[i]*fac(f-1);
        f--;
        mcount++;
        
    }
    printf("%d", result+1);
}