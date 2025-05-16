#include <stdio.h>
#include <stdlib.h>

int main(){
    int date,time,tz,day,month,year,hour,min;
    scanf("%d",&date);
    scanf("%d",&time);
    scanf("%d",&tz);
    year = date%10000;
    month = (date/10000)%100;
    day = date/1000000;
    min = time%100;
    hour = time/100;
    if(tz < 0){
        hour-=abs(tz);
    }else{
        hour+=tz;
    }
    if(hour>23){
        day++;
        hour-=24;
    }else if(hour < 0){
        day--;
        hour+=24;
    }
    if(day > 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)){
        day = 1;
        month++;
    }else if(day > 28 && month == 2){
        day = 1;
        month++;
    }else if(day > 30 && (month == 11 || month == 4 || month == 6 || month == 9)){
        day = 1;
        month++;
    }else if(day < 1 && (month == 5 || month == 7  || month == 10 || month == 12)){
        day = 30;
        month--;
    }else if(day < 1 && month == 3){
        day = 28;
        month--;
    }else if(day < 1 && (month == 11 || month == 4 || month == 6 || month == 9 || month == 8 || month == 2 || month == 1 )){
        day = 31;
        month--;
    }

    if(month > 12){
        month = 1;
        year++;
    }else if(month < 1){
        month = 12;
        year--;
    }

    if(month == 1){
        printf("%d January %d",day,year);
    }else if(month == 2){
        printf("%d February %d",day,year);
    }else if(month == 3){
        printf("%d March %d",day,year);
    }else if(month == 4){
        printf("%d April %d",day,year);
    }else if(month == 5){
        printf("%d May %d",day,year);
    }else if(month == 6){
        printf("%d June %d",day,year);
    }else if(month == 7){
        printf("%d July %d",day,year);
    }else if(month == 8){   
        printf("%d August %d",day,year);
    }else if(month == 9){
        printf("%d September %d",day,year);
    }else if(month == 10){
        printf("%d October %d",day,year);
    }else if(month == 11){
        printf("%d November %d",day,year);
    }else if(month == 12){
        printf("%d December %d",day,year);
    }
    printf("\n");
    if(hour < 10){
        printf("0%d :",hour);
    }else{  
        printf("%d :",hour);
    }

    if(min < 10){
        printf(" 0%d",min);
    }else{
        printf(" %d",min);
    }
    
}
