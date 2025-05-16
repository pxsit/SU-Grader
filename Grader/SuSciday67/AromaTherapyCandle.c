#include <stdio.h>

int x;

int main(){
    scanf("%d" , &x);
    if (x >= 100)
    {
        printf("Aromatherapy candle is Fire");
    }
    else if (x > 38)
    {
        printf("Aromatherapy candle is Succeed");
    }
    else if (x < 0)
    {
        printf("Aromatherapy candle is Broken");
    }
    else if (x < 38)
    {
        printf("Aromatherapy candle is Fail");
    }
    
    
    
    
}