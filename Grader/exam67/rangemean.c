#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    long long int sum = 0,max,min;
    for(int i=0;i<n;i++){
        long long int x;
        scanf("%lld",&x);
        sum += x;
        if(i==0){
            max = x;
            min = x;
        }
        if(x>max){
            max = x;
        }
        if(x<min){
            min = x;
        }
    }
    printf("%lld %.2lf",max-min,(double)sum/n);
}