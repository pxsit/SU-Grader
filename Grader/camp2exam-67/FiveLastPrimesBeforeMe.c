#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int prime[5];
    int count = 0;
    int c = 0;
    scanf("%d" ,&n);
    if(n % 2 == 1 && n > 13){
        n-=2;
    }else if(n % 2 == 1 && n <= 13){
        printf("2 3 5 7 11");
        return 0;
    }else{
        n-=1;
    }
    for(int i=n;i>1 && c < 5;i-=2){
        count = 0;
        for(int j=3;j<sqrt(i) + 1;j+=2){
            if(i % j == 0){
                count = 1;
                break;
            }
        }
        if(i % 2 != 0 && count == 0){
            prime[c] = i;
            c++;
        }
    }
    for(int i=4;i>=0;i--){
        printf("%d ",prime[i]);
    }
}
