#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d%d",&c,&d);
    int array[c][d];
    int n;
    scanf("%d",&n);
    for(int i=0; i<c; i++){
        for(int j=0; j<d; j++){
            array[i][j]=0;
        }
    }
    for(int i=1; i<=n; i++){
        scanf("%d%d",&a,&b);
        array[a-1][b-1] = i;
    }
    for(int i=0; i<c; i++){
        for(int j=0; j<d; j++){
            printf("%d ",array[i][j]);
        }printf("\n");
    }
}