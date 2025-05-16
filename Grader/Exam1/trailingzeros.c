#include <stdio.h>
int main(){
    int a;
    int b = 0;
    int c;
    scanf("%d",&a);
    while(a > 0){
        b+=a/5;
        a/=5;
    }
    printf("%d",b);
}