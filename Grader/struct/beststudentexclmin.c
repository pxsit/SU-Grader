#include <stdio.h>

struct student
{
    char name[11];
    int score[9];
    int total;
};
int main(){
    int n, t;
    scanf("%d %d", &n, &t);
    struct student p[n];
    for (int i = 0; i < n; i ++)
    {
        scanf("%s", &p[i].name);
        for (int j = 0; j < t; j ++)
        {
            int a;
            p[i].score[j] = 0;
            scanf("%d", &a);
            int min = a;
            int minInd = j;
            for (int k = 0; k < j; k ++)
            {
                if (p[i].score[k] < min)
                {
                    min = p[i].score[k];
                    minInd = k;
                }
            }
            if (a > min || j < t - 1)
            {
                p[i].score[minInd] = a;
            }
        }
    }

    int max = 0;
    for (int i = 0; i < n; i ++)
    {
        int total = 0;
        for (int j = 0; j < t; j ++)
        {
            total += p[i].score[j];
        }
        if (total > max)
        {
            max = total;
        }
        p[i].total = total;
    }
    printf("%d\n", max);
    for (int i = 0; i < n; i ++)
    {
        if (p[i].total >= max)
        {
            printf("%s\n", p[i].name);
        }
    }
}
