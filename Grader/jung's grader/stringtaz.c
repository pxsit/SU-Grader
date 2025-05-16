#include <stdio.h>

int main(){
    int n;
    unsigned long long b,num1 = 0,num2 = 1,num3 = 2;
    scanf("%d %lld",&n,&b);
    unsigned long long a[n],an[n];
    a[0] = 1;
    for (int i = 1;i < n;i++){
        num3 = num2 * 2 + num1;
        a[i] = num3;
        num1 = num2;
        num2 = num3;
    }
    for (int i = 0;i < n;i++){
        an[i] = a[n-1-i];
    }
    b--;
    for (int i = 0;i < n;i++){
        if (an[i] * 2 <= b){
            printf("YO");
            b -= an[i] * 2;
            i++;
        }
        else if (an[i] <= b){
            printf("O");
            b -= an[i];
        }
        else {
            printf("A");
        }
    }
}