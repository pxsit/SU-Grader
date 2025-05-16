#include <stdio.h>
// got 20/100 timeout

int main(){
    int n,n1;
    scanf("%d %d",&n,&n1);
    int fchar;
    int array[n+1];
    char temp;
    for(int i=0;i<n;i++){
        scanf("\r%c",&temp);
        array[i] = (int) temp;
    }
    
    for(int j=0;j<n1;j++){
        fchar = array[0];
        for(int i=0;i<n-1;i++){
            if(array[i] == array[i+1]){
                array[i] = 65;
            }else if(array[i] == 65){
                array[i] = array[i+1];
            }else if(array[i] == 66){
                if(array[i+1] == 65)
                    array[i] = 66;
                else if(array[i+1] == 67)
                    array[i] = 68;
                else
                    array[i] = 67;
            }else if(array[i] == 67){
                if(array[i+1] == 65)
                    array[i] = 67;
                else if(array[i+1] == 66)
                    array[i] = 68;
                else
                    array[i] = 66;
            }else{
                if(array[i+1] == 65)
                    array[i] = 68;
                else if(array[i+1] == 66)
                    array[i] = 67;
                else
                    array[i] = 66;
            }
        }
        if(array[n-1] == fchar){
            array[n-1] = 65;
        }else if(array[n-1] == 65){
            array[n-1] = fchar;
        }else if(array[n-1] == 66){
            if(fchar == 65)
                array[n-1] = 66;
            else if(fchar == 67)
                array[n-1] = 68;
            else
                array[n-1] = 67;
        }else if(array[n-1] == 67){
            if(fchar == 65)
                array[n-1] = 67;
            else if(fchar == 66)
                array[n-1] = 68;
            else
                array[n-1] = 66;
        }else{
            if(fchar == 65)
                array[n-1] = 68;
            else if(fchar == 66)
                array[n-1] = 67;
            else
                array[n-1] = 66;
        }
        for(int i=0; i<7; i++){
            
            printf("%c",array[i]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        printf("%c",array[i]);
    }
}