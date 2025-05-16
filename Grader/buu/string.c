#include <stdio.h>
#include <string.h>

int main(){
    char c[100];
    gets(c);
    short int a = strlen(c);
    printf("%d",a);
    return 0;
}