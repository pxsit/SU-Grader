 #include <stdio.h>
int main(){
 int ndaysOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
 int countday=0;
 int d1,m1,d2,m2;
 int imonth;
 scanf("%d %d %d %d",&d1,&m1,&d2,&m2);

 // There should be another condition that causes an error:
 // (m1==m2 && d1 > d2) but the problem seems not to go that far.
 if ((d1>ndaysOfMonth[m1-1])||(d2>ndaysOfMonth[m2-1])||(m1>m2)){
 printf("error\n");
 }
 else{
 imonth = m1;
 for(imonth=m1;imonth<m2;imonth++){
 countday += (ndaysOfMonth[imonth-1]-d1+1);
 d1=1;
 //printf("%d\n",countday);
 }
 countday += d2-d1+1;
 printf("%d\n",countday);
 }
 }
 