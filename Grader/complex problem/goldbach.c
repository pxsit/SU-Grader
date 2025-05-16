#include <stdio.h>

unsigned long long int squared(unsigned long long int a){
    return a*a; 
}
unsigned long long int cubed(unsigned long long int x){
    return x*x*x;
}
int main(){
    unsigned long long int array[101];
    unsigned long long int inputcount = 0;
    for(int i=0; i<100; i++){
        int tempinput;
        scanf("%d",&tempinput);
        if(tempinput == 0){
            break;
        }
        inputcount++;
        array[i] = tempinput;
    }
    unsigned long long int output[inputcount];
    for(int i=0; i<inputcount; i++){
        output[i] = 0;                  
    }
    for(int j=0; j<inputcount; j++){
        output[j] = squared(array[j]) - array[j] + 1;
    }   
    for(int i=0; i<inputcount; i++){
        if(output[i] != 0){
            printf("Y %lld\n", output[i]);
        }else{
            printf("N 0\n");
        }
    }
}