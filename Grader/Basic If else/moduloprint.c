#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a % 3 == 0 && a % 5 == 0)
        printf("3 5");
    else if(a % 3 == 0)
        printf("3");
    else if(a % 5 == 0)
        printf("5");
}