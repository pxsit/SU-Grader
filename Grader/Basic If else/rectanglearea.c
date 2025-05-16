#include <stdio.h>
int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(a <=0 && b <= 0){
        printf("invalid width and height");
        return 0;
    }else if(a <=0){
        printf("invalid width");
        return 0;
    }else if(b <= 0){
        printf("invalid height");
        return 0;
    }
    printf("%.2lf",a*b);
}