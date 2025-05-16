#include <stdio.h>

int main(){
    int a,b,c,d;
    float sum = 0;;
    int array[8];
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    for(int i=0;i<8;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<8;i++){
        if(array[i] >= a){
            printf("4\n");
            sum+=4;
        }else if(array[i] >= b){
            printf("3\n");
            sum+=3;
        }else if(array[i] >= c){
            printf("2\n");
            sum+=2;
        }else if(array[i] >= d){
            printf("1\n");
            sum+=1;
        }else{
            printf("0\n");
        }
    }
    printf("%f",sum/8);
}