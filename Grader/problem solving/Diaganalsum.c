#include <stdio.h>

int main() {
    int size;
    int sum = 1;
    int last = 1;
    int count = 1;
    scanf("%d",&size);
    {
 while (1){
   if (size % 2 != 0){
   if (count == size)
                {
                goto check;
                }
            }
   if (count % 2 !=0){
    last += 2*(size - count);
    sum += last;
    count++;

   }
  if (size % 2 == 0){
   if (count == size)
                {
                goto check;
                }
            }

   if (count % 2 == 0){


    last += 2*(size - (count - 1));
    sum += last;
    count++;

    }

}
    }

    check:;
    printf("%d",sum);
    return 0;
}
