#include <stdio.h>
//5 minutes 30 seconds
int main(){
    int k;
    int a,b,c,d;
    int la = 0,lb = 0,lc = 0;
    scanf("%d", &k);
    for(int i=0;i<k;i++){
        scanf("%d%d%d",&a,&b,&c);
        a+=la;
        b+=lb;
        c+=lc;
        d = a/3;
        if(b/4 < d)
            d = b/4;
        if(c/2 < d)
            d = c/2;
        a-=d*3;
        b-=d*4;
        c-=d*2;
        la = a;
        lb = b;
        lc = c;
        printf("%d %d %d %d\n",d,a,b,c);
    }
}