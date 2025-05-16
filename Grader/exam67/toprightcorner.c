#include <stdio.h>

int main(){
    int n, a = 1, b= 2;
    scanf("%d", &n);
    while (a*a + 3*a + 1 < n){
        a += 2;
    }
    while (b*b + 3*b + 2 < n){
        b += 2;
    }
    int c = a*a - a + 1;
    if (n == b*b + b - 1){
        printf("Cannot find top-right corner.");
    }else{
        if (c-1 == n){
            printf("%d", n);
        }else{
            printf("%d", c);
        }
    }
}