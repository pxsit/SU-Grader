#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    scanf("%d%d",&c,&d);
    scanf("%d%d",&e,&f);
    a = e*2 + f;
    b = e*6 + f*4;
    if(a <= c && b <= d){
        printf("Yes %d %d",c-a,d-b);
    }else if(a <=c && b > d){
        printf("No 0 %d",b-d);
    }else if(a >c && b <= d){
        printf("No %d 0",a-c);
    }else{
        printf("No %d %d",a-c,b-d);
    }   
}