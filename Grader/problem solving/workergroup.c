#include <stdio.h>

int main() {
    int worker;
    scanf("%d",&worker);
    int workersmall;
    int workerbig;
    int big,small;
    int daybig;
    int finalday;
    int minfinalday;
    int daysmall;
    int finalworkerbig;
    int finalworkersmall;
    scanf("%d %d",&big,&small);
    for (int i = 0; i <= worker;i++)
    {
     daybig = 1;
     daysmall = 1;
     workerbig = i;
     workersmall = worker - workerbig;
     if (big == 0){
        daybig = 1;
     }
     else if (workerbig == 0){
        daybig = 9999;
     }
     else {
     daybig = big / (workerbig * 6);
     if (big % (workerbig * 6) != 0){
     daybig++;
     }
     }
     if (small == 0){
        daysmall = 1;
     }
     else if (workersmall == 0){
        daysmall = 9999;
     }
     else {
     daysmall = small / (workersmall * 10);

     if (small % (workersmall * 10) != 0){
     daysmall++;}
     }

     if (daysmall > daybig){
        finalday = daysmall;
     }
     else {
        finalday = daybig;

     }
     if (finalday < minfinalday || i == 0){
         minfinalday = finalday;
         finalworkerbig = workerbig;
         finalworkersmall = workersmall;
     }



     }
    printf("%d %d",finalworkerbig,finalworkersmall);

    return 0;
}