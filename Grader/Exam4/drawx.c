#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0){
                printf("error %d is not odd number",n);
    }else{for(int i=1;i<=(n+2);i++){
        for(int j=1;j<=n;j++){
            if(n%2!=0&&n>=3){
                    if(i==1&&j<=n){
                printf("-");
            }else if(i==(n+2)&&j<=n){
                printf("-");
            }else if(i==((n+2)/2)+1&&j==(n/2)+1){
                printf("X");
            }else if(j==i-1&&j<=(n+1)){
                printf("\\");
            }else if(i+j==(n+2)){
                printf("/");
            }else{
                printf(" ");
            }
            }
        }printf("\n");
    }
}
}