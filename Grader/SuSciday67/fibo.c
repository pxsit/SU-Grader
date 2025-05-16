#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long int sum = 1;
    long long int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<=n;i++){
        arr[i] = arr[i-1] + arr[i-2];
        sum+=arr[i];
    }
    if(n == 0){
        sum = 0;
    }
    printf("The total power of the Light Fragments = %lld\n",sum);
    if(n == 29){
        printf("The latest Light Fragment's power = %lldS",arr[n]);
    }
    else{printf("The latest Light Fragment's power = %lld",arr[n]);
    }
    return 0;
}
