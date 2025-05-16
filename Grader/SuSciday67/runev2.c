#include <stdio.h>
#include <string.h>

int n,m;
char str[1000001];
int arr[1000000];
int array[1000000];

int main() {

    scanf("%d %d %s", &n, &m, str);

    for (int i = 0; i < n; i++) {
        arr[i] = str[i] - 'A';
    }		 
    for (int j = 30; j >= 0; j--) {
        if (m & (1 << j)) {
            for (int i = 0; i < n; i++) {
                int a = (i - (1 << j)) % n;
                if (a < 0) {
                    a += n;
                }
                array[a] = arr[i] ^ arr[a];
            }
            memcpy(arr, array, sizeof(arr));
        }
    }

    for (int i = 0; i < n; i++) {
        str[i] = arr[i] + 'A';
    }
    printf("%s\n", str);

    return 0;
}

