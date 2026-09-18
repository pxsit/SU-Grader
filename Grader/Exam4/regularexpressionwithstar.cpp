#include <bits/stdc++.h>
using namespace std;
int main() {
    char pattern[1024];
    int n;

    cin >> pattern;
    cin >> n;

    char words[n][1024];

    for (int i = 0; i < n; i++) {
        cin >> words[i];
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
        char *word = words[i];
        int wordLen = strlen(word);
        int prefixLen = strlen(prefix);
        int suffixLen = strlen(suffix);

        if (starPos == 0) {
            if (strncmp(&word[wordLen - suffixLen], suffix, suffixLen) == 0) {
                cout << "T ";
                for (int j = 0; j < wordLen - suffixLen; j++) {
                    cout << word[j];
                }
                if (wordLen == suffixLen) {
                    cout << "-";
                }
                cout << '\n';
            } else {
                cout << "F ";
                for (int j = 0; j < suffixLen; j++) {
                    if (word[wordLen - suffixLen + j] != suffix[j]) {
                        cout << wordLen - suffixLen + j + 1 << '\n';
                        break;
                    }
                }
            }
        } else if (starPos == strlen(pattern) - 1) {
            if (strncmp(word, prefix, prefixLen) == 0) {
                cout << "T ";
                for (int j = prefixLen; j < wordLen; j++) {
                    cout << word[j];
                }
                if (wordLen == prefixLen) {
                    cout << "-";
                }
                cout << '\n';
            } else {
                cout << "F ";
                for (int j = 0; j < prefixLen; j++) {
                    if (word[j] != prefix[j]) {
                        cout << j + 1 << '\n';
                        break;
                    }
                }
            }
        } else {
            if (strncmp(word, prefix, prefixLen) == 0 &&
                strncmp(&word[wordLen - suffixLen], suffix, suffixLen) == 0) {
                cout << "T ";
                for (int j = prefixLen; j < wordLen - suffixLen; j++) {
                    cout << word[j];
                }
                if (wordLen == prefixLen + suffixLen) {
                    cout << "-";
                }
                cout << '\n';
            } else {
                cout << "F ";
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
                cout << mismatchPos << '\n';
            }
        }
    }
}
