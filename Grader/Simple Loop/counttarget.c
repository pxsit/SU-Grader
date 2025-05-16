#include <stdio.h>
int main(){
    int a,b;
    int c = 0;
    scanf("%d",&a);
    while(a!=0){
        scanf("%d",&b);
        if(b == 0)
            break;
        if(b == a && b != 0){
            c++;
        }
    }
    if(c == 0)
        printf("None");
    else
        printf("%d",c);
}