#include <stdio.h>

int main() {
    int a,b;
    int c = 0;
    scanf("%d", &a);
    int buy[a];
    for(int i = 0; i < a; i++){
        scanf("%d", &buy[i]);
    }
    scanf("%d", &b);
    int lot[b];
    for(int i = 0; i < b; i++){
        scanf("%d", &lot[i]);
    }
    for(int i=0; i <a ; i++){
        for(int j=0; j < b; j++){
            if(buy[i]%1000 == lot[j]){
                c++;
                break;
            }
        }
    }
    printf("%d", c);
}