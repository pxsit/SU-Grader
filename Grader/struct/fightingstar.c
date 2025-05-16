#include<stdio.h>
int main(){
   int name[10][100];
   int scorecon;
   int check;
   int score[10000] = {0,0,0,0,0,0,0,0,0,0};
 for (int i = 0; i <= 7;i++){
    scanf("%s",&name[i]);

}
scanf("%d",&scorecon);
for (int j = 0;j <= scorecon-1;j++){
    scanf("%d",&check);

        {
    score[check-1] = (score[check-1]+1);

    }

}
for (int h = 0; h <= 7;h++){

}
int out = score[0];
for (int po = 1;po <=7;po++){
      if (score[po] < out){
        out = score[po];
      }
}

for (int i = 0;i <=7;i++){
 if (score[i] > out){
    printf("%s\n",name[i]);
 }
}


return 0;
}


