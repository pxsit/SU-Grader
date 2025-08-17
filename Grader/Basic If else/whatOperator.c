#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
        if(a + b == c)
            printf("+");
            return 0;
        if(a-b == c)
            printf("-");
            return 0;
        if(a*b == c)
            printf("*");
            return 0;
        if(a/b == c)
            printf("/");
            return 0;
        if(a%b == c)
            printf("%%");
            return 0;

}
