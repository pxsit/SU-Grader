#include <stdio.h>
int main(){
    int a,b,d;
    int c = 2147483647;
    scanf("%d",&a);
    for(int i=0;i<8;i++){
        scanf("%d",&b);
        if(b == a){
            printf("%d",b);
            return 0;
        }
        else if(b > a){
            if(b-a < c){
                c = b-a;
                d = b;
            }
        }
        else{
            if(a-b < c){
                c = a-b;
                d = b;
            }
        }
    }
    printf("%d",d);
}