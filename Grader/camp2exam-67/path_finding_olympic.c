#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int s,n;
    int c = 1;
    scanf("%d", &s);
    char array[s][s];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            array[i][j] = "_";
        }
    }
    int x1[n];
    int x2[n];
    int y1[n];
    int y2[n];
    scanf("%d %d",&x1[0],&y1[0]);
    array[x1[0]][y1[0]] = 'A';
    for(int i=0;i<n-1;i++){
        scanf("%d %d",&x2[i],&y2[i]);
    }
    for(int i=0;i<n-1;i++){
        if(x2[i] < 0 || x2[i] > s || y2[i] < 0 || y2[i] > s){
            printf("Out of range");
            return 0;
        }
    }
    if(x1[0] < 0 || x1[0] > s || y1[0] < 0 || y1[0] > s){
        printf("Out of range");
        return 0;
    }
    for(int i=0;i<n;i++){
        array[x2[i]][y2[i]] = (char) (c + 65);
        c++;
        int j,k;
        for(j=1;j<=x2[i]-x1[i];j++){
            array[x1[i]-j-1][y1[i]-1]='>';
        }
        for(j=1;j<=x1[i]-x2[i];j++){
            array[x1[i]-j-1][y1[i]-1]='<';
        }
        x1[i+1] = x1[i]+j;
        for(k=1;k<=y2[i]-y1[i];k++){
            array[x1[i]][y1[i]+k-1]='^';
        }
        for(k=1;k<=y1[i]-y2[i];k++){
            array[x1[i]][y1[i]-k-1]='v';
        }
        y1[i+1] = y1[i]+k;
    }
    printf("AAAA");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%s",array[i][j]);
        }
        printf("\n");
    }
}
