#include <stdio.h>
int main(){
    int a;
    int odd = 0,even = 0;
    for(int i=0;i<8;i++){
        scanf("%d",&a);
        if(a % 2 == 1 || a % 2 == -1){
            odd = odd + a;
        }else{
            even = even + a;
        }
    }
    if(odd == even){
        printf("equal\n%d\n%d",even,odd);
    }else if(odd > even){
        printf("odd\n%d\n%d",even,odd);
    }else{
        printf("even\n%d\n%d",even,odd);
    }
}