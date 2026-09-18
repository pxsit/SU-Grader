#include <bits/stdc++.h>
using namespace std;
double AuctionPrice, SellingPrice, TotalCost, Land;

int main() {
    cin >> SellingPrice >> AuctionPrice >> Land;

    if (SellingPrice > AuctionPrice) {

        TotalCost += (Land * SellingPrice * 0.02) + 40 + (0.005 * Land * AuctionPrice);
    } else {

        TotalCost += (Land * AuctionPrice * 0.02) + 40 + (0.005 * Land * AuctionPrice);
    }

    cout << TotalCost;
}