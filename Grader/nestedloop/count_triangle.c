#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    for(int i = x; i > 0; i--){
        for(int k = x-i;k>0;k--){
                printf(" ");
            }
        for(int j = i; j>0 ; j--){
            if(i >= 100){
                printf("%d",(i%100)%10);
            }else if(i >= 10){
                printf("%d",i%10);
            }else{
                printf("%d",i);
            }
            
        }
        printf("\n");
    }
    return 0;

}
