#include <stdio.h>
int main(){
    int row,col;
    int ifrow = 0;
    int ifcol = 0;
    scanf("%d%d",&row,&col);
    int num[row+1][col+1];
    for (int i = 0;i < row;i++){
        for (int j = 0;j < col;j++){
            scanf("%d",&num[i][j]);
        }
    }

  int maxrow[1000],minrow[1000],maxcol[1000],mincol[1000];
 for (int i = 0;i < row;i++){
    for (int j = 0;j < col;j++){
        if (j == 0 || num[i][j] > maxrow[i]){
            maxrow[i] = num[i][j];
        }
        if (j == 0 || num[i][j] < minrow[i]){
            minrow[i] = num[i][j];
        }

    }
 }
for (int i = 0;i < col;i++){
    for (int j = 0;j < row;j++){
        if (j == 0 || num[j][i] > maxcol[i]){
            maxcol[i] = num[j][i];
        }
        if (j == 0 || num[j][i] < mincol[i]){
            mincol[i] = num[j][i];
        }
    }
}




  for (int i = 0;i < row;i++){
    for (int j = 0;j < col;j++){
        if (num[i][j] == maxrow[i] && num[i][j] == mincol[j]) {
            printf("(%d, %d) = %d\n",i,j,num[i][j]);
            ifrow = 1;
        }
    }

 }
 for (int i = 0;i < row;i++){
    for (int j = 0;j < col;j++){
        if (num[i][j] == maxcol[j] && num[i][j] == minrow[i]) {
            printf("(%d, %d) = %d\n",i,j,num[i][j]);
            ifcol = 1;
        }
    }

 }
if(ifrow == 0 && ifcol == 0){
    printf("None");
}

}
