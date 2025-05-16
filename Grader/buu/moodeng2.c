#include <stdio.h>

int main(){
    int array[100];
    int ad = 0;
    int c = 0;
    int left = 0;
    int next = 0;
    int adult[100],child[100];
    char ord[101];
    for(int i=0;;i++){
        int in;
        scanf("%d",&in);
        if(in == 0){
            break;
        }else{
            adult[i] = in;
            ad++;
        } 
    }
    for(int i=0;;i++){
        int in;
        scanf("%d",&in);
        if(in == 0){
            break;
        }else{
            child[i] = in;
            c++;
        } 
    }
    int a = ad+c;
    int round[a];
    int adc = 0,cc = 0;
    for(int i=0; i<a; i++){
        if(i%3 == 0 || cc == c){
            array[i] = adult[adc];
            adc++;
            ord[i] = 'A';
        }else{
            array[i] = child[cc];
            cc++;
            ord[i] = 'B';
        }
    }
    int m = 55,h = 7;
    for(int i=0;i<a;i++){
        if(array[i] < 50)
            round[i] = 1;
        else
            round[i] = (array[i]-left)/50; 
    }
    left  = 0;
    for(int j=0;j<a;j++){
        printf("%c%d ",ord[j],array[j]);
        if(next == 0){
            for(int i=0;i<=round[j];i++){
                if(left != 0){
                    if(array[j] > left){
                        if(h < 10){
                            if(m < 10){
                                printf("0%d:0%d(%d) ",h,m,left);
                            }else{
                                printf("0%d:%d(%d) ",h,m,left);
                            }
                        }else{
                            if(m < 10){
                                printf("%d:0%d(%d) ",h,m,left);
                            }else{
                                printf("%d:%d(%d) ",h,m,left);
                            }
                        }
                        array[j]-=left;
                        left = 0;
                    }else{
                        if(h < 10){
                            if(m < 10){
                                printf("0%d:0%d(%d) ",h,m,array[j]);
                            }else{
                                printf("0%d:%d(%d) ",h,m,array[j]);
                            }
                        }else{
                            if(m < 10){
                                printf("%d:0%d(%d) ",h,m,array[j]);
                            }else{
                                printf("%d:%d(%d) ",h,m,array[j]);
                            }
                        }
                        left-=array[j];
                        array[j] = 0;
                        break;
                    }
                }
                m+=5;
                if(m == 60){
                    m = 0;
                    h++;
                }
                if(h == 17){
                    next = 1;
                    printf("next day"); 
                    break;
                }
                if(array[j] > 50){
                    if(h < 10){
                        if(m < 10){
                            printf("0%d:0%d(50) ",h,m);
                        }else{
                            printf("0%d:%d(50) ",h,m);
                        }
                    }else{
                        if(m < 10){
                            printf("%d:0%d(50) ",h,m);
                        }else{
                            printf("%d:%d(50) ",h,m);
                        }
                    }
                    array[j]-=50;
                }else if(array[j] == 50){
                    if(h < 10){
                        if(m < 10){
                            printf("0%d:0%d(50) ",h,m);
                        }else{
                            printf("0%d:%d(50) ",h,m);
                        }
                    }else{
                        if(m < 10){
                            printf("%d:0%d(50) ",h,m);
                        }else{
                            printf("%d:%d(50) ",h,m);
                        }
                    }
                    array[j]-=50;
                    break;
                }else{
                    if(h < 10){
                        if(m < 10){
                            printf("0%d:0%d(%d) ",h,m,array[j]);
                        }else{
                            printf("0%d:%d(%d) ",h,m,array[j]);
                        }
                    }else{
                        if(m < 10){
                            printf("%d:0%d(%d) ",h,m,array[j]);
                        }else{
                            printf("%d:%d(%d) ",h,m,array[j]);
                        }
                    }
                    left = 50 - array[j];
                    break;
                }
            }
            printf("\n");
        }else{
            if(j == a-1)
                printf("next day");
            else
                printf("next day\n");
        }
    }
}