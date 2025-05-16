#include <stdio.h>
//4 minutes 5 seconds

int main(){
    int a,b,c,min;
    scanf("%d%d%d",&a,&b,&c);
    min = a/3;
    if(b/4 < min)
        min = b/4;
    if(c/2 < min)
        min = c/2;
    a-=min*3;
    b-=min*4;
    c-=min*2;
    printf("%d %d %d %d",min,a,b,c);
}