#include <stdio.h>

int main() {
    char c1[3];
    char c2[3];
    for(int i = 0; i < 5; ++i) {
        scanf("%s%s", c1, c2);
        if(c1[0] == c1[1] && c2[0] != c2[1])
            printf("W");
        else if(c1[0] != c1[1] && c2[0] == c2[1])
            printf("L");
        else if(c1[0] == c1[1] && c2[0] == c2[1] && c1[1] == c2[1])
            printf("D");
        else if(c1[0] == c1[1] && c2[0] == c2[1]){
            if((int) c1[0] < (int) c2[0]){
                printf("W");
            }else{
                printf("L");
            }
        }else{
            int mc1 = (int) c1[0];
            int mc2 = (int) c2[0];
            if((int) c1[1] < mc1)
                mc1 = (int) c1[1];
            if((int) c2[1] < mc2)
                mc2 = (int) c2[1];

            if(mc1 < mc2){
                printf("W");
            }else if(mc1 > mc2){
                printf("L");
            }else{
                printf("D");
            }
        }
    }
    return 0;
}
