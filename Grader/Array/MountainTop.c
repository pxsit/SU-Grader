#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int height[N][N];
    int peaks[N * N][3];
    int peak_count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &height[i][j]);
        }
    }
    
    for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < N - 1; j++) {
            int is_peak = 1;
            for (int x = i - 1; x <= i + 1; x++) {
                for (int y = j - 1; y <= j + 1; y++) {
                    if ((x != i || y != j) && height[x][y] >= height[i][j]) {
                        is_peak = 0;
                        break;
                    }
                }
                if (!is_peak) break;
            }
            if (is_peak) {
                peaks[peak_count][0] = height[i][j];  
                peaks[peak_count][1] = i;             
                peaks[peak_count][2] = j;            
                peak_count++;
            }
        }
    }

    printf("%d\n", peak_count);
    for (int i = 0; i < peak_count; i++) {
        printf("%d %d %d\n", peaks[i][0], peaks[i][1], peaks[i][2]);
    }
    return 0;
}
