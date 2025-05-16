#include <stdio.h>
int main(){
    int n;
    int d = 0,e = 0,f = 0;
    int g = 0,h = 0,j = 0;
    scanf("%d",&n);
    int array[n];
    int a[n],b[n],c[n];
    for(int i=0; i<n;i++){
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
        if(a[i] <= 15 && b[i] <= 10 && c[i] <= 8 ){
            array[i] = 1;
            d++;
            g+=1200-(a[i]*b[i]*c[i]);
        }else if(a[i] <= 25 && b[i] <= 15 && c[i] <= 12){
            array[i] = 2;
            e++;
            h+=4500-(a[i]*b[i]*c[i]);
        }else if(a[i] <= 50 && b[i] <= 40 && c[i] <= 20){
            array[i] = 3;
            f++;
            j+=40000-(a[i]*b[i]*c[i]);
        }else{
            array[i] = 4;
        }   
    }
    for(int i=0;i<n;i++){
        if (array[i] > 3){
            printf("Oversize product\n");
        }else{
            printf("%d\n",array[i]);
        }
    }
    printf("%d %d\n%d %d\n%d %d",d,g,e,h,f,j);
}
