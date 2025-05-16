#include <stdio.h>

int main(){
    int sum,n,k;
    int all = 0,minus = 0,stamp = 0;
    int special[3][2];
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &special[i][j]);
        }
    }   
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++){
        int a,b;
        scanf("%d%d", &a, &b); 
        all+=b;
        for(int j=0; j<3; j++){
            if(a == special[j][0]){
                stamp+=special[j][1];
                minus+=b;
            }
        }
    }
    sum = all - minus;
    stamp+= (sum/k);
    printf("%d\n%d\n%d",all, sum, stamp);
}