#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int max = 0;

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(a[i] > max)
            max = a[i];
    }

    int array[max+1][n+1];
    for(int i=0;i<max+1;i++){
        for(int j=0;j<n;j++){
            array[i][j] = 0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=a[i]; j>=0;j--){
            for(int k=0;k<1;k++){
                array[j][i] = 1;
            }
        }
    }

    int l = a[0];
    int r = a[n-1];
    int kl = 0;
    int kr = n-1;

    for(int i=0;i<n;i++){
        if(l > r){
            for(int j=r ; j>=0 ;j--){
                for(int k=kr; k>= kl;k--){
                    if(array[j][k] == 0){
                        array[j][k] = 2;
                    }
                }
            }
            kr--;
            r = a[kr];
        }else{
            for(int j=l ; j>=0 ;j--){
                for(int k=kl; k<= kr;k++){
                    if(array[j][k] == 0){
                        array[j][k] = 2;
                    }
                }
            }
            kl++;
            l = a[kl];
        }
    }
    int count = 0;
    for(int i=max;i>=0;i--){
        for(int j=0;j<n;j++){
            if(array[i][j] == 2){
                count++;
            }
        }
    }
    printf("%d", count);
}
