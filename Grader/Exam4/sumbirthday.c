#include <stdio.h>

int main(){
    int a,b,c;
    int sum = 0;
    scanf("%d%d%d",&a,&b,&c);
    sum += (a/10) + (a%10);
    sum += (b/10) + (b%10);
    sum += (c/1000) + (c%1000)/100 + (c%100)/10 + (c%10);
    printf("%d",sum);
    if(sum >= 10){
        sum = sum/10 + sum%10;
        printf(" %d",sum);
    }
    if(sum >= 10){
        sum = sum/10 + sum%10;
        printf(" %d",sum);
    }
}