#include <stdio.h>

int main(){
    int worker,n,wtf = 0;
    int day = 1;
    scanf("%d",&worker);
    scanf("%d", &n);
    int finish[n];
    int arraay[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arraay[i]);
    }
    while(1){
        int wtaf = n;
        for(int i=0;i<n;i++){
            if(arraay[i] == 0){
                wtaf--;
            }
            if(wtaf == 0){
                break;
            }
        }
        if(wtaf == 0){
            break;
        }
        int work = worker*100;
        for(int i=wtf;i<n;i++){
            if(work >= arraay[i]){
                work -= arraay[i];
                arraay[i] = 0;
                finish[i] = day;
            }else{
                arraay[i] -= work;
                work = 0;
                wtf = i;
                day++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n", finish[i]);
    }
    return 0;
}