#include <iostream>
#include <string.h>

int Converter(const char *name) {
    int n = 0;
    int length = strlen(name);
    for (int i = 0; i < length; i++) {
        char ch = name[i];
        int value;
        if(isdigit(ch)){
            value = ch - '0'; 
        }else{
            value = ch - 'A' + 10;
        }if (i > 0) {
            n = n * 36 + value;
        } else {
            n = value;
        }
    }
    
    return n;
}

int main() {
    char name[10];
    scanf("%s",name);
    int result = Converter(name);
    printf("%d\n", result);

    return 0;
}
