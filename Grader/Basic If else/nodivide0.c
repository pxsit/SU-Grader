#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(c == 0){
        printf("cannot divide by zero");
        return 0;
    }
    printf("%f",(a+b)/c);
}