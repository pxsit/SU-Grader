#include <stdio.h>
int main(){
    int c,d;
    int sum = 0;
    int cost;
    scanf("%d",&c);

    for (int i = 1;i <= 7;i++){
        scanf("%d",&d);
     sum += d;

    }
    if (sum > 250){
        cost = (100 * 80) + (150 * 70) + 60*(sum-250);

    }
    else if (sum > 100){
        cost = (100 * 80) + (sum-100) * 70;

    }
    else if (sum <= 100){
        cost = (sum * 80);
    }
    int income = sum * c;
    if(income - cost <= 0){
        printf("%d\n%d\nNo Profit",cost,income);
    }
    else {
    int profit = income - cost;

    printf("%d\n%d\n%d",cost,income,profit);
    }
    return 0;
}

