#include <stdio.h>

//1 = male 2 = femele

int main(){  int all;
   int max;
   int mmax = 0;
   int fmax = 0;
   int num = 0;
   int pass[10000];
   int team[10000];

   int gender,score1,score2;
   scanf("%d%d",&all,&max);

   for (int i = 1;i <= all;i++){
    scanf("%d%d%d",&gender,&score1,&score2);

    if (score1 >= 9 && score2 >= 9){

        if ((gender == 1 && mmax < max) || (mmax < max && fmax >= max)){
            mmax++;
            pass[num] = i;
            team[num] = 1;
            num++;

        }

        else if (gender == 2 && fmax < max || (mmax >= max && fmax < max)){
            fmax++;
            pass[num] = i;
            team[num] = 2;
            num++;

        }
        }
        else if (score1 >=9 && mmax < max){
            mmax++;
            pass[num] = i;
            team[num] = 1;
            num++;

       }
       else if (score2 >=9 && fmax < max) {
            fmax++;
            pass[num] = i;
            team[num] = 2;
            num++;

       }


    }

    for (int i = 0;i <= num-1;i++){
        printf("%d %d\n",pass[i],team[i]);
    }


return 0;
   }
