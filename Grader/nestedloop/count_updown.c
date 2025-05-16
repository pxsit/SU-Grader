#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    array[0] = 1;
    for(int i=1; i<n+1; i++){
        scanf("%d",&array[i]);
    }
    for(int i=0; i<n; i++){
        if(abs(array[i] - array[i+1] ) > 10){
            printf("%d . . . %d\n",array[i],array[i+1]);
        }else{
            if(array[i] < array[i+1]){
                for(int j=array[i];j<=array[i+1];j++){
                    printf("%d ",j);
                }
                printf("\n");
            }else{
                for(int j=array[i];j>=array[i+1];j--){
                    printf("%d ",j);
                }
                printf("\n");
            }
        }
    }
}