#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a <= 15 && b <= 10 && c <= 8){
        printf("1\n%d",1200 - (a*b*c));
    }else if(a <= 25 && b <= 15 && c <= 12){
        printf("2\n%d",4500 - (a*b*c));
    }else if(a <= 50 && b <= 40 && c <= 20){
        printf("3\n%d",40000 - (a*b*c));
    }else{
        printf("Oversize product\n%d",(a*b*c) - 40000);
    }
}