#include <stdio.h>

int main(){
    int n,m;
    scanf("%d", &n);
    int g[n];
    int b[n];
    int a = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&g[i]);
    }
    scanf("%d", &m);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(g[j] < g[j+1]){
                int temp = g[j];
                g[j] = g[j+1];
                g[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(g[i] <= m){
            b[a] = g[i];
            m-=g[i];
            a++;
        }
    }
    for(int i=0;i<a;i++){
        printf("%d ",b[i]);
    }
    printf("%d",m);
}