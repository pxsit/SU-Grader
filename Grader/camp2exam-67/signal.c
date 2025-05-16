#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ctob(char c, char *binary) {
    for (int i = 7; i >= 0; i--) {
        binary[7-i] = ((c & (1 << i)) ? '1' : '0');
    }
    binary[8] = '\0';
}

int main(){
    char string[10000];
    char binary_string[80000] = "";
    int n;
    scanf("%s", string);
    scanf("%d", &n);

    int needs_conversion = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] != '0' && string[i] != '1') {
            needs_conversion = 1;
            break;
        }
    }

    if (needs_conversion) {
        for (int i = 0; i < strlen(string); i++) {
            char binary[9];
            ctob(string[i], binary);
            strcat(binary_string, binary);
        }
        strcpy(string, binary_string);
    }

    strcat(string, "9"); 

    int countSame = 1;
    char signal[100000];
    int index = 0;

    for (int i = 0; i < strlen(string) - 1; i++)
    {
        if (string[i] == string[i + 1])
        {
            countSame++;
        }
        else
        {
            if (string[i] == '1')
            {
                for (int j = 0; j < (n * countSame) - (countSame - 1); j++)
                {
                    signal[index + j] = 'X';
                }
                index += (n * countSame) - (countSame - 1);
            }
            else
            {
                for (int j = 0; j < ((n * countSame) - (countSame - 1)) - 2; j++)
                {
                    signal[index + j] = '_';
                }
                index += ((n * countSame) - (countSame - 1)) - 2;
            }
            countSame = 1;
        }
    }

    char tempSig[100000];
    strcpy(tempSig, signal);

    int key = 0;
    if (string[0] == '0')
    {
        key++;
        signal[0] = 'X';
        for (int i = 1; i < strlen(tempSig) + 1; i++)
            signal[i] = tempSig[i - 1];
    }

    for (int i = 0; i < index + key; i++)
        printf("%c", signal[i]);

    int med[100000];
    strcat(signal, "9"); 
    for (int i = 0; i < index + key; i++)
    {
        if (signal[i] == 'X' && signal[i + 1] == '_')
            med[i] = 'X';
        else if (signal[i] == 'X' && signal[i - 1] == '_')
            med[i] = 'X';
        else
            med[i] = '_';
    }

    printf("\n");
    for (int j = 0; j < n - 2; j++)
    {
        for (int i = 0; i < index + key; i++)
        {
            printf("%c", med[i]);
        }
        printf("\n");
    }

    // last row
    for(int i = 0; i < index + key; i++){
        if((signal[i] == 'X' && signal[i+1] == '_') || (signal[i] == 'X' && signal[i-1] == '_'))
            printf("X");
        else{
            if(signal[i] == 'X')
                printf("_");
            else
                printf("X");
        }
    }

    return 0;
}