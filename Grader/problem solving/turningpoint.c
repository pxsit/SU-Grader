#include <stdio.h>

int main(){
    int up = 0,down = 0,wtf = 0; //trend 1 is up trend 2 is down
    int vali[1000000];
    while(1){
        scanf("%ld",&vali[wtf]);
        if(vali[wtf] == 0){
            break;
        }
        wtf++;
    }
    for(int i=1; i<wtf-1; i++){
        if(vali[i] > vali[i-1] && vali[i+1] < vali[i]){
            up++;
        }else if(vali[i] < vali[i-1] && vali[i+1] > vali[i]){
            down++;
        }
    }
    printf("%d\n%d", up, down);

    return 0;
}