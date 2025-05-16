#include <stdio.h>
int main(){
    int a,b,e;
    int c = 0;
    int d = 0;
    scanf("%d",&a);
    while(a!=0){
        scanf("%d",&b);
        if(d != 0 && d > e)
            e = d;
        if(b == 0)
            break;
        else if(b == a){
            c++;
            d++;
        }else{
            d = 0;
        }
        
    }
    printf("%d\n%d",e,c);
}