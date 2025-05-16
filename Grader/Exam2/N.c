#include <stdio.h>
int find(int ni){
    if (ni < 0){
        ni = 0 - ni;
        ni = 10 - (ni % 10);
    }
int final = ni % 10;


return final;
}


int main(){
int in;
scanf("%d",&in);
for (int i = 0;i <= in-1;i++){
    for (int j = 0;j <= in-1;j++){
    if (j == 0 ){
    printf("%d ",find((in-i) % 10));
    }
    else if (i == j && (i != 0 && i != in-1)){
        printf("%d ",find(in+i))  ;

    }
    else if (j == in-1){
        printf("%d",find((in+in-1) - i + in-1));
    }
    else {
        printf("  ");
    }

}
printf("\n");
}









return 0;
}
