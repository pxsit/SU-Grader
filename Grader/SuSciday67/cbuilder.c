#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long int sum = 1;
    long long int arr[n];
    arr[0] = 1;
    arr[1] = 1;
    if(n >= 2){
        sum = 2;
    }
    for(int i=2;i<n;i++){
        arr[i] = arr[i-1] + arr[i-2];
        sum+=arr[i]*arr[i];
    }
    printf("%lld",sum);1
}
