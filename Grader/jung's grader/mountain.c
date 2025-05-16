#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m[n];
    int h=0,b = 0,a;
    for (int i =0; i<n; i++){
        scanf("%d", &a);
        if (a > h) h = a;
        b += (a*2);
        m[i] = a;
    }

    int map[h][b];
    for (int i =0; i<h; i++){
        for (int j=0; j<b; j++){
            map[i][j] = 0;
        }
    }

    int x = 0;
    for (int i = 0; i<n; i++){
        for (int y = 0; y<m[i]; y++){
            map[h-y-1][x] = 1;
            x++;
        }
        for (int y= m[i]-1; y>=0; y--){
            map[h-y-1][x] = -1;
            x++;
        }
    }

    for (int i =0; i<h; i++){
        for (int j=0; j<b; j++){
            if (map[i][j] == 1) 
                printf("/");
            else if (map[i][j] == -1) 
                printf("\\");
            else 
                printf("-");
        }
        printf("\n");
    }
}