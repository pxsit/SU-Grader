#include<stdio.h>

int max = 1001;
int tos = -1;
int a[1001];
void push(int x){
    if (tos < max)
    {
        tos++;
        a[tos] = x;
    }
}
void pop(){
    if (tos >= 0)
    {
        tos--;
    }
}
int get(int x){
    return (a[tos - x]);
}
int main(){
    int n;
    scanf("%d", &n);
    char P[51];
    for (int i = 0; i < n; i++){
        scanf("%s", P);
        if (P[0] == 'C')
        {
            pop();
        }
        else if (P[0] == 'D')
        {
            push(get(0) * 2);
        }
        else if (P[0] == '+')
        {
            int gg = get(0) + get(1);
            push(gg);
        }
        else
        {
            int val=0;
            for (int i =0; P[i]; i++)
            {
                if (P[i] >= '0' && P[i] <= '9')
                {
                    val*=10;
                    val+=P[i]-'0';
                }
            }

            if (P[0] == '-') val*=-1;
            push(val);
        }
    }

    int sum = 0;
    for (int i = 0; i < tos+1; i++)
    {
        printf("%d*", a[i]);
        sum += a[i];
    }
    printf("\n%d", sum);
}