#include <stdio.h>

int main() {
    int a,n;
    scanf("%d", &n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }   
    scanf("%d",&a);
    if(a < 0){
        for(int i=n-1;i >= 0; i--){
            printf("%d ",array[i] + a);
        }
        return 0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",array[i] + a);
    }
}