#include <stdio.h>

int main() {
    int num;

    while (1) {
        scanf("%d", &num);

        if (num <= 0) {
            break;
        }
        for (int i = 1; i < num+1; i++) {
            if(i == num)
                while (1){
                    if(num < 10){
                        printf("%d", num);
                        break;
                        i++;
                    }
                    else
                        num%=10;
                }
            else if(i%5 == 0) 
                printf("X");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}