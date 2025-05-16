#include <stdio.h>
#include <string.h>

int main() {
    char pattern[1024];
    int n;
    
    scanf("%s", pattern);
    scanf("%d", &n);
    
    char words[n][1024];
    
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    char prefix[1024] = {0}, suffix[1024] = {0};
    int starPos = -1;
    
    for (int i = 0; i < strlen(pattern); i++) {
        if (pattern[i] == '*') {
            starPos = i;
            break;
        }
    }
    
    if (starPos != -1) {
        strncpy(prefix, pattern, starPos);
        strcpy(suffix, &pattern[starPos + 1]);
    }

    for (int i = 0; i < n; i++) {
        char* word = words[i];
        int wordLen = strlen(word);
        int prefixLen = strlen(prefix);
        int suffixLen = strlen(suffix);
        
        if (starPos == 0) {
            if (strncmp(&word[wordLen - suffixLen], suffix, suffixLen) == 0) {
                printf("T ");
                for (int j = 0; j < wordLen - suffixLen; j++) {
                    printf("%c", word[j]);
                }
                if (wordLen == suffixLen) {
                    printf("-");
                }
                printf("\n");
            } else {
                printf("F ");
                for (int j = 0; j < suffixLen; j++) {
                    if (word[wordLen - suffixLen + j] != suffix[j]) {
                        printf("%d\n", wordLen - suffixLen + j + 1);
                        break;
                    }
                }
            }
        } 
        else if (starPos == strlen(pattern) - 1) {
            if (strncmp(word, prefix, prefixLen) == 0) {
                printf("T ");
                for (int j = prefixLen; j < wordLen; j++) {
                    printf("%c", word[j]);
                }
                if (wordLen == prefixLen) {
                    printf("-"); 
                }
                printf("\n");
            } else {
                printf("F ");
                for (int j = 0; j < prefixLen; j++) {
                    if (word[j] != prefix[j]) {
                        printf("%d\n", j + 1);
                        break;
                    }
                }
            }
        }
        else {
            if (strncmp(word, prefix, prefixLen) == 0 && 
                strncmp(&word[wordLen - suffixLen], suffix, suffixLen) == 0) {
                printf("T ");
                for (int j = prefixLen; j < wordLen - suffixLen; j++) {
                    printf("%c", word[j]);
                }
                if (wordLen == prefixLen + suffixLen) {
                    printf("-");
                }
                printf("\n");
            } else {
                printf("F ");
                int mismatchPos = 0;
                for (int j = 0; j < prefixLen; j++) {
                    if (word[j] != prefix[j]) {
                        mismatchPos = j + 1;
                        break;
                    }
                }
                if (mismatchPos == 0) {
                    for (int j = 0; j < suffixLen; j++) {
                        if (word[wordLen - suffixLen + j] != suffix[j]) {
                            mismatchPos = wordLen - suffixLen + j + 1;
                            break;
                        }
                    }
                }
                printf("%d\n", mismatchPos);
            }
        }
    }
    
    return 0;
}
