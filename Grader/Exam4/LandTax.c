#include <stdio.h>

double AuctionPrice , SellingPrice , TotalCost , Land;

int main(){
    scanf("%lf %lf %lf" , &SellingPrice , &AuctionPrice , &Land);

    if (SellingPrice  > AuctionPrice)
    {
        //printf("%d \n" , (Land * SellingPrice * 0.02));
        TotalCost += (Land * SellingPrice * 0.02) + 40 + (0.005 * Land * AuctionPrice);
    }
    else
    {
        //printf("%d \n" , (Land * SellingPrice * 0.02));
        TotalCost += (Land * AuctionPrice * 0.02) + 40 + (0.005 * Land * AuctionPrice);
    }

    printf("%.2lf" , TotalCost);
    
}