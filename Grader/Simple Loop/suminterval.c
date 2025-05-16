#include <stdio.h>

int main(){
    int a,b,c;
    int d = 0;
    int e = 0;
    scanf("%d%d",&a,&b);
    for(int i=0;i<8;i++){
        scanf("%d",&c);
        if(c <= b && c >= a){
            d+=c;
            e++;
            
        }
    }
    if(e == 0){
        printf("None");
    }else{
        printf("%d",d);
    }
}