#include <stdio.h>

int main(){
    int a = 1;
    int b = 0;
    while(a != 0){
        scanf("%d",&a);
        if(a != 0)
            b++;
    }
    printf("%d",b);
}
