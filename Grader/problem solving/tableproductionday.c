#include <stdio.h>

int main(){
    int a,b,c,d,d1,d2;
    scanf("%d%d",&a,&b);
    scanf("%d%d",&c,&d);
    if(a == 0 && c != 0){
        printf("Unable to finish order");
        return 0;
    }
    else if (a != 0){
      d1 = c /(a*6);
      if ((c % (a * 6)) != 0)
    {
    d1++;
    }
    }
    else {
        d1 = 0;
    }
    if(b == 0 && d != 0){
        printf("Unable to finish order");
        return 0;
    }
    else if (b != 0){

        d2 = d / (b *10);
         if ((d % (b * 10)) != 0)
            {
    d2++;
   }

    }
    else {
            d2 = 0;
    }



    int day;
    if(d1 >= d2){
        day = d1;
    }
    else{
        day = d2;
    }
printf("%d",day);
return 0;
}