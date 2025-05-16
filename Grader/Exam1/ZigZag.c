#include <stdio.h>

int main() {
    int num[10000];
    int lenge = -1;
    int counto = 0;
    int counte = 0;
    int fcounte = 0;
    int fcounto = 0;
     scanf("%d",&num[0]);
     int i = 0;

    while (num[i] > 0){
    lenge++;
    i++;
   scanf("%d",&num[i]);

    }


    for (int j = 0; j < lenge;j++){
        if (num[j] % 2 == 0){
            if (num[j+1] % 2 == 1){
                counte++;
                j++;
                if (counte > fcounte){
                    fcounte = counte;
                }

            }
            else {
                 counte = 0;

            }
        }
        else {
            counte = 0;
        }

    }
    for (int j = 0; j < lenge;j++){
        if (num[j] % 2 == 1){
            if (num[j+1] % 2 == 0){
                counto++;
                j++;
                if (counto > fcounto){
                    fcounto = counto;
                }
            }
            else {
                 counto = 0;

            }

        }
        else counto = 0;

    }



if (fcounte > fcounto){

    printf("%d\n",fcounte);
}

else {
    printf("%d",fcounto);
}
    return 0;
}
