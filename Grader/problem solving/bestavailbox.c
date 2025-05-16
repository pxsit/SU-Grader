#include <stdio.h>
int main(){
    int n;
    int d,e,f;
    scanf("%d",&n);
    scanf("%d%d%d",&d,&e,&f);
    int array[n];
    int a[n],b[n],c[n];
    for(int i=0; i<n;i++){
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
        if(a[i] <= 15 && b[i] <= 10 && c[i] <= 8 ){
            if(d >= 1){
                d--;
                array[i] = 1;
            }else{
                if(e >= 1){
                    e--;
                    array[i] = 2;
                }else if(f >= 1){
                    f--;
                    array[i] = 3;
                }else{
                    array[i] = 4;
                }
                
            }
        }else if(a[i] <= 25 && b[i] <= 15 && c[i] <= 12){
            if(e >= 1){
                e--;
                array[i] = 2;
            }else{
                if(f >= 1){
                    f--;
                    array[i] = 3;
                }else{
                    array[i] = 4;
                }
            }
        }else if(a[i] <= 50 && b[i] <= 40 && c[i] <= 20){
            if(f >= 1){
                f--;
                array[i] = 3;
            }else{
                array[i] = 4;
            }
        }else{
            array[i] = 5;
        }   
    }
    for(int i=0;i<n;i++){
        if (array[i] > 3){
            if(array[i] == 5){
                printf("Oversize product\n");
            }else if(array[i] == 4){
                printf("Box not available\n");
            }
        }else{
            printf("%d\n",array[i]);
        }
    }
}