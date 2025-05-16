#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    for(int i = 0; i<x ; i++){
        for(int j = 0; j<x ; j++){
            if(i == 0 || j == 0 || i == x-1 || j == x-1 || i+j == x-1 || i == j){
                printf("*");
            }else{
                printf(" ");
            }

        }printf("\n");
    }

}
