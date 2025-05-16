#include <stdio.h>

struct numVal
{
    char let;
    int val;
};

int fac(int a)
{
    if (a <= 0)
    {
        return 0;
    }
    else
    {
        int b = 1;
        for (int i = 1; i <= a; i ++)
        {
            b *= i;
        }
        return b;
    }
}


int main(){
    int n;
    scanf("%d\n", &n);
    struct numVal norm[12];
    struct numVal perm[n];
    int removedNfrom[n];
    int no = 0;
    if (n > 12)
        n = 12;
    for (int i = 0; i < 12; i ++)
    {
        norm[i].val = i;
        if (i == 0)
        {
            norm[i].let = 'A';
        }
        else if (i == 1)
        {
            norm[i].let = 'B';
        }
        else if (i == 2)
        {
            norm[i].let = 'C';
        }
        else if (i == 3)
        {
            norm[i].let = 'D';
        }
        else if (i == 4)
        {
            norm[i].let = 'E';
        }
        else if (i == 5)
        {
            norm[i].let = 'F';
        }
        else if (i == 6)
        {
            norm[i].let = 'G';
        }
        else if (i == 7)
        {
            norm[i].let = 'H';
        }
        else if (i == 8)
        {
            norm[i].let = 'I';
        }
        else if (i == 9)
        {
            norm[i].let = 'J';
        }
        else if (i == 10)
        {
            norm[i].let = 'K';
        }
        else if (i == 11)
        {
            norm[i].let = 'L';
        }
    }
    for (int i = 0; i < n; i ++)
    {
        removedNfrom[i] = 0;
        perm[i].let = ' ';
        perm[i].val = 0;
        scanf("%c", &perm[i].let);
        for (int j = 0; j < n; j ++)
        {
            if (perm[i].let == norm[j].let)
            {
                perm[i].val = norm[j].val;
                break;
            }
        }
    }

    for (int i = 0; i < n; i ++)
    {
        no += fac(n - i - 1) * (perm[i].val);
        int ind = 0;
        for (int j = 0; j < 12; j ++)
        {
            char usedlet;
            if (perm[i].let == norm[j].let)
            {
                ind = perm[i].val - 1;
                break;
            }
        }
        for (int j = 0; j < n; j ++)
        {
            if (perm[j].val > ind)
            {
                perm[j].val --;
            }
        }
    }
    printf("%d", no + 1);
}

