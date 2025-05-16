#include <stdio.h>
int main(){
    int a;
    int max = -2147483647;
    int min = 2147483647;
    for(int i=0;i<8;i++){
        scanf("%d",&a);
        if(a > 0){
            if(a > max)
                max = a;
            if(a < min)
                min = a;
        }
    }
    printf("%d\n%d",max,min);
}