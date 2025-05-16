#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned long long int n;
    int f;
    scanf("%d",&n);
    int array[100];
    int nc = 1;
    int tn = n;
    scanf("%d",&f);
    while(tn >= 10){
        nc++;
        tn/=10;
    }
    for(int i=0;i<nc;i++){
        if(n%10 == 0){
            array[nc-i-1] = 0;
            n/=10;
        }else{
            array[nc-i-1] = 1;
        }
    }
    for(int i=0;i<nc;i++){
        for(int j=0;j<f;j++){
            printf("X");
        }
    }
    printf("\n");
    for(int i=1;i<f;i++){
       for(int i=0;i<f;i++){
            printf("_");
        }
        printf("\n");
    }
}
