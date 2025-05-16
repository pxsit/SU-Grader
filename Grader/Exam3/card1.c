#include <stdio.h>

int main() {
    char c1[3];
    char c2[3];
    for(int i = 0; i < 5; ++i) {
        scanf("%s%s", c1, c2);
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
    return 0;
}
 