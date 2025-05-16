#include <stdio.h>

int main(){
    int num;
    int A;
    int B;
    int x;
    int y;
    int sum = 0;
   scanf("%d %d",&A,&B);
   while(1){
   x = (A+B)/2;
   y = (A-B)/2;
    sum += (A*B);
     if(A == 3 && B ==1){
    break;
   }
      A = x;
      B = y;

   }

   printf("%d",sum);



return 0;
}
