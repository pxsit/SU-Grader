#include <stdio.h>

int main(){
    int sum,n,k;
    int id1,id2,id3;
    int v1,v2,v3;
    int t1,t2,t3;
    int all = 0,minus = 0,stamp = 0;
    scanf("%d",&id1);
    scanf("%d",&t1);
    scanf("%d",&v1);
    scanf("%d",&id2);
    scanf("%d",&t2);
    scanf("%d",&v2);
    scanf("%d",&id3);
    scanf("%d",&t3);
    scanf("%d",&v3);
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++){
        int a,b;
        scanf("%d%d", &a, &b); 
        all+=b;
        if(a==id1){
            if(t1 == 1){
                stamp+=v1;
            }else{
                minus-=v1;
                all-=v1;
            }
            minus+=b;
        }else if(a==id2){
            if(t2 == 1){
                stamp+=v2;
            }else{
                minus-=v2;
                all-=v2;
            }
            minus+=b;
        }else if(a==id3){
            if(t3 == 1){
                stamp+=v3;
            }else{
                minus-=v3;
                all-=v3;
            }
            minus+=b;
        }
    }
    sum = all - minus;
    stamp+= (sum/k);
    printf("%d\n%d\n%d",all, sum, stamp);
}