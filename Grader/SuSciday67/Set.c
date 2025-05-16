#include <stdio.h>

int NumSet , Intersect , CompliSect , a , b;

int main(){
    scanf("%d %d %d %d" , &NumSet , &Intersect ,&CompliSect , &a );
    b = NumSet-Intersect-(a-Intersect+CompliSect)+Intersect;
    printf("%d" , b);
}