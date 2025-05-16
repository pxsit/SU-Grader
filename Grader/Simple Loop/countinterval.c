#include <stdio.h>

int main(){
    int a,b,c;
    int d = 0;
    scanf("%d%d",&a,&b);
    if(a > b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    for(int i=0;i<8;i++){
        scanf("%d",&c);
        if(c <= b && c >= a){
            d++;
        }
    }
    if(d == 0){
        printf("None");
    }else{
        printf("%d",d);
    }
}