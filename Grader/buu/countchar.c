#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c[81];
    scanf("%s",c);
    int a = 0;
    int b = 0;
    for(int i=0;i<strlen(c);i++){
        if(islower(c[i])){
            a++;
        } else if(isupper(c[i])){
            b++;
        }
    }
    printf("%d\n%d",a,b);
}