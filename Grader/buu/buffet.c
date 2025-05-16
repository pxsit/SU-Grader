#include <stdio.h>
#include <string.h>

int main(){
    int price[12] = {9,6,7,8,4,6,1,5,10,2,6,3};
    char n[1001];
    scanf("%s",n);
    int a[strlen(n)];
    int sum = 0;
    for(int i=0;i<strlen(n);i++){
        a[i] = n[i] - 'A';
        int temp = a[i];
        sum+=price[temp];
    }
    if(sum == 427){
        printf("Balance");
    }else if(sum > 427){
        printf("Loss %d",sum-427);
    }else{
        printf("Profit %d",427-sum);
    }
}