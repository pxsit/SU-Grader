#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    
    int array[100][100];
    int colOrder[100];
    int sum[100] = {0};
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    
    //sort column
    for (int c = 0; c < col; c++) {
        for (int i = 0; i < row - 1; i++) {
            for (int j = 0; j < row - i - 1; j++) {
                if (array[j][c] > array[j+1][c]) {
                    int temp = array[j][c];
                    array[j][c] = array[j+1][c];
                    array[j+1][c] = temp;
                }
            }
        }
    }
    
    //sum
    for (int i = 0; i < col; i++) {
        colOrder[i] = i;
        for (int j = 0; j < row; j++) {
            sum[i] += array[j][i];
        }
    }
    
    //sort sum
    for (int i = 0; i < col - 1; i++) {
        for (int j = 0; j < col - i - 1; j++) {
            if (sum[j] > sum[j+1]) {
                int tempSum = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = tempSum;
                
                int tempOrder = colOrder[j];
                colOrder[j] = colOrder[j+1];
                colOrder[j+1] = tempOrder;
            }
        }
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", array[i][colOrder[j]]);
        }
        printf("\n");
    }
    
    return 0;
}