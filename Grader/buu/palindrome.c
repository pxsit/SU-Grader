#include <stdio.h>
#include <string.h>

int main() {
    char c[101];
    scanf("%s", c);
    int len = strlen(c);
    int pal = 1; 
    if (len == 1) {
        printf("%s is a palindrome", c);
        return 0;
    }

    for (int i = 0; i < len / 2; i++) {
        if (c[i] != c[len - i - 1]) {
            pal = 0;
            break;
        }
    }

    if(pal) {
        printf("%s is a palindrome", c);
    } else {
        printf("%s is not a palindrome", c);
    }

    return 0;
}