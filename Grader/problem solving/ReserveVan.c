#include <stdio.h>


int main(){
    int num;
    int A = 0;
    int B = 0;
    int C = 0;
    int day;
    char van[10000];
    scanf("%d",&num);
    for (int i = 0;i <= num-1;i++){
            scanf("%d",&day);

        if ((B < A && B <C) || (B < A && B == C)){
            B += day;
            van[i] = 'B';

        }
        else if (C < B && C < A) {
            C += day;
            van[i] = 'C';
        }
        else {
            A += day;
            van[i] = 'A';
        }
        }
    for (int i = 0;i <= num-1;i++){
        printf("%c\n",van[i]);
    }

return 0;
}
