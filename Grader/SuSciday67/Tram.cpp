#include <iostream>
#include <cstdio>

typedef struct {
    int type;
    int passengers;
    int isOperational;
} Tram;

int main() {
    int n;
    scanf("%d", &n);
    int MaxCap[3] = {11, 14, 27};

    Tram trams[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &trams[i].type);
        trams[i].passengers = 0;
        trams[i].isOperational = 1;
    }

    while (true) {
        int Number;
        int PassCount;
        scanf("%d", &Number);
        if (Number < 0) {
            break;
        }
        scanf("%d", &PassCount);
        
        if (Number < 1 || Number > n) {
            continue;
        }

        int index = Number - 1;

        if (trams[index].isOperational == 1) {
            if (PassCount > 0) {
                if (trams[index].passengers + PassCount >= MaxCap[trams[index].type - 1] ) {
                    trams[index].passengers = MaxCap[trams[index].type-1];
                }else if(trams[index].passengers + PassCount < MaxCap[trams[index].type - 1]){
                    trams[index].passengers += PassCount;
                }
            } else if (PassCount < 0) {
                if (trams[index].passengers - abs(PassCount) < 0) {
                    trams[index].passengers = 0;
                }else if(trams[index].passengers - abs(PassCount) > 0){
                    trams[index].passengers -= abs(PassCount);
                }
            } else {
                trams[index].isOperational = 0;
                trams[index].passengers = 0;
            }
        } else {
            trams[index].isOperational = 1;
            trams[index].passengers = 0;
        }
    }

    for (int j = 0; j < n; j++) {
        if (trams[j].isOperational == 1) {
            printf("%d ", trams[j].passengers);
        }else{
            printf("-1 ");
        }
    }

    return 0;
}
