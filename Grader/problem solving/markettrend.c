#include <stdio.h>
int main(){
    int day;
    int index;
    int dex;
    int streak = 0;
    int max_streak = 0;
    scanf("%d",&day);
    for (int i = 1;i <= day;i++){

        scanf("%d",&index);
        if (index > dex && i != 1){
          streak++;
        }
        else {
          streak = 0;
        }
        dex = index;

        if (streak > max_streak){
            max_streak = streak;
        }
    }
if (max_streak == 0){
    printf("No value increase");
}
else{
printf("%d",max_streak);}


return 0;
}

