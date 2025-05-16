#include <stdio.h>
#include <string.h>

int n;

int main(){
    n = 55;
    char Alpha[27] = {'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'}; 
    char Cypher[n];
    int Digits[n];
    for (int i = 0; i < n; i++)
    {
        Digits[i] = 0;
    }
    
    scanf("%s" , Cypher);
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < strlen(Cypher); j++)
        {
            if(Cypher[j] == Alpha[i]){
                Digits[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (Digits[i] != 0)
        {
            printf("%d" , Digits[i]);
        }
        
    }
    
    
}