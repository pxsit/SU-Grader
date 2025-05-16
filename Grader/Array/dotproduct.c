#include <stdio.h>

int main(){
    int n;
    int a = 0;
    scanf("%d",&n);
    int array1[n];
    int array2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&array2[i]);
    }
    for(int i=0;i<n;i++){
        int temp = array1[i] * array2[i];
        a+=temp;
    }
    printf("%d",a); 
}