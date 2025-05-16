#include <stdio.h>
#include <limits.h>

int main(){
    
    int a,b;
    scanf("%d%d",&a,&b);
    int array[a][2];
    float avgarray[a];
    for(int i=0;i<a;i++){
        int max = INT_MIN;
        int min = INT_MAX;
        int sum = 0;
        for(int j=0;j<b;j++){
            int temp;
            scanf("%d",&temp);
            sum+=temp;
            if(temp > max){
                max = temp;
            }
            if(temp < min){
                min = temp;
            }
        }
        array[i][0] = min;
        array[i][1] = max;
        float avg= (float) sum/b;
        avgarray[i] = avg;
    }
    for(int i=0;i<a;i++){
        printf("%d %d %.2f\n",array[i][0],array[i][1],avgarray[i]);
    }

}