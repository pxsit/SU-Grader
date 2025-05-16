#include <stdio.h>

// ฟังชันสำหรับกำหนดว่าอยู่ฝั่งไหน
void flipPieces(char arr[8][8], int x, int y, char player, char opponent)
{
    // เช็คแนวนอน
    for (int j = y - 1; j >= 0 && arr[x][j] == opponent; j--)
    {
        if (j > 0 && arr[x][j - 1] == player)
        {
            for (int k = y - 1; k >= j; k--)
                arr[x][k] = player;
            break;
        }
    }
    for (int j = y + 1; j < 8 && arr[x][j] == opponent; j++)
    {
        if (j < 7 && arr[x][j + 1] == player)
        {
            for (int k = y + 1; k <= j; k++)
                arr[x][k] = player;
            break;
        }
    }

    // เช็ตแนวตั้ง
    for (int i = x - 1; i >= 0 && arr[i][y] == opponent; i--)
    {
        if (i > 0 && arr[i - 1][y] == player)
        {
            for (int k = x - 1; k >= i; k--)
                arr[k][y] = player;
            break;
        }
    }
    for (int i = x + 1; i < 8 && arr[i][y] == opponent; i++)
    {
        if (i < 7 && arr[i + 1][y] == player)
        {
            for (int k = x + 1; k <= i; k++)
                arr[k][y] = player;
            break;
        }
    }

    // เช็คทแยงซ้าย
    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0 && arr[i][j] == opponent; i--, j--)
    {
        if (i > 0 && j > 0 && arr[i - 1][j - 1] == player)
        {
            for (int k = x - 1, l = y - 1; k >= i && l >= j; k--, l--)
                arr[k][l] = player;
            break;
        }
    }
    for (int i = x + 1, j = y + 1; i < 8 && j < 8 && arr[i][j] == opponent; i++, j++)
    {
        if (i < 7 && j < 7 && arr[i + 1][j + 1] == player)
        {
            for (int k = x + 1, l = y + 1; k <= i && l <= j; k++, l++)
                arr[k][l] = player;
            break;
        }
    }

    // เช็คทแยงขวา
    for (int i = x - 1, j = y + 1; i >= 0 && j < 8 && arr[i][j] == opponent; i--, j++)
    {
        if (i > 0 && j < 7 && arr[i - 1][j + 1] == player)
        {
            for (int k = x - 1, l = y + 1; k >= i && l <= j; k--, l++)
                arr[k][l] = player;
            break;
        }
    }
    for (int i = x + 1, j = y - 1; i < 8 && j >= 0 && arr[i][j] == opponent; i++, j--)
    {
        if (i < 7 && j > 0 && arr[i + 1][j - 1] == player)
        {
            for (int k = x + 1, l = y - 1; k <= i && l >= j; k++, l--)
                arr[k][l] = player;
            break;
        }
    }
}

int main(){
    char arr[8][8];
    char string[8 + 1];
    for (int i = 0; i < 8; i++)
    {
        scanf("%s", string);
        for (int j = 0; j < 8; j++)
        {
            arr[i][j] = string[j];
        }
    }

    char key = 'B';
    for (;;)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x == -1 && y == -1)
            break;

        if (arr[x][y] == '_')
        {
            char player = key;
            char opponent;
            if (key == 'B')
                opponent = 'W';
            else
                opponent = 'B';

            arr[x][y] = player;                      
            flipPieces(arr, x, y, player, opponent); 
            key = opponent;                          // Switch turns
        }
    }

    // Count the number of pieces
    int blackCount = 0;
    int whiteCount = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == 'B')
                blackCount++;
            else if (arr[i][j] == 'W')
                whiteCount++;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    if (blackCount > whiteCount)
        printf("black wins");
    else if (whiteCount > blackCount)
        printf("white wins");
    else
        printf("draw");

    return 0;
}
