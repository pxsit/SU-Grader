#include <stdio.h>
int check(int wanted,int n1,int n2){
int result1 = n1 + n2;
int final = wanted - result1;
if (final < 0){
    final = 0 - final;
}
return final;
}
int dif(int m1,int m2){
    int post = m1 - m2;
    if (post < 0){
        post = 0 - post;
    }
    return post;
}


int main(){
    int all[1000];
    int pair1;
    int pair2;
    int last;
    int first = 1;
    int want,count;
scanf("%d %d",&want,&count);
for (int i = 0; i <= count-1;i++){
        scanf("%d",&all[i]);

}
for (int i = 0; i <= count-1;i++){
    for (int j = 0;j <= count-1;j++){
        if (all[i] != all[j]){
         if (last > check(want,all[i],all[j])) {
        last = check(want,all[i],all[j]);
        pair1 = all[i];
        pair2 = all[j];
         }

         else if (first == 1){
        last = check(want,all[i],all[j]);
        pair1 = all[i];
        pair2 = all[j];
        first = 0;
         }
         else if (last == check(want,all[i],all[j]))
                  {
                  if (dif(pair1,pair2) > (dif(all[i],all[j])))
                  {
                   pair1 = all[i];
                   pair2 = all[j];
                  }
                  }


      }
    }
}
int save;
save = pair2;
last = pair1 + pair2;
if (pair1 > pair2){
    pair2 = pair1;
    pair1 = save;
}
printf("%d\n%d %d",last,pair1,pair2);



    return 0;

}
