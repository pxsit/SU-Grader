#include <stdio.h>
int main(){
    int result[100000];
    int max,all;
    int score;
    int check = 0;
    int pass = 0;
    scanf("%d %d",&all,&max);

    for (int i = 0; i < all;i++){
            check = 0;
        for (int j = 1;j <= 3;j++){
    scanf("%d",&score);
    if (score >= 8){
        check++;
    }
        }
        if (check >= 2 && pass < max){
            result[i] = 1;
            pass++;
        }
        else {
            result[i] = 0;
        }
        }
    for (int k = 0;k<all;k++){
       if (result[k]){
        printf("Yes\n");
       }
       else {printf("No\n");
       }
        }
        printf("%d",pass);

return 0;
}

