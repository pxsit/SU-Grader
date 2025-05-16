#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<(a/2)+2;i++){
        for(int j=1;j<a+1;j++){
            if(i==1)
                printf("A");
            else{
                if(j<i)
                    printf("1");
                else if(j<a-(i-2))
                    printf("A");
                else
                    printf("*");
            }
        }printf("\n");
    }
}
