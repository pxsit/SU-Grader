#include <stdio.h>

int main() {
    int n;
    int sa = 0;
    int sb = 0;
    scanf("%d",&n);
    int a = n;
    int b = n;
    for(int i=0; i<n*2; i++){
        int in;
        scanf("%d",&in);
        if(in % 2 == 0){
            sa++;
            if(sa >= 3){
                b-=3;
            }else{
                b--;
            }
            sb = 0;
        }else{
            sb++;
            if(sb >= 3){
                a-=3;
            }else{
                a--;
            }
            sa = 0;
        }
        if(a <= 0){
            printf("1\n%d", in);
            return 0;
        }
        if(b <= 0){
            printf("0\n%d", in);
            return 0;
        }
    }
}
