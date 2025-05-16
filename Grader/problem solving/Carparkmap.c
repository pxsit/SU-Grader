#include <stdio.h>
int main(){
    int row,num;
    int cor;
    int cor1;
    int cor2;
    int area[201][201];
    int check = 0;
    scanf("%d%d",&row,&cor);
    scanf("%d",&num);
    for (int i = 0; i < num;i++){
        scanf("%d%d",&cor1,&cor2);
        area[cor1][cor2] = 1;
    }

    for (int i = 1; i <= row;i++){
        for (int j = 1;j <= cor;j++){
            if (area[i][j] == 1){
                printf("x");}
            else {
                printf("_");
            }
            }
            printf("\n");
        }
    return 0;
}
