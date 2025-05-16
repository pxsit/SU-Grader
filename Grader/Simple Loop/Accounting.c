#include <stdio.h>

int IncomeNum , ExpenseNum , IncomeValue , ExpenseValue;
int TotalIncome , TotalExpense;
int n = 1;

int main(){
    while (n != 0)
    {
        scanf("%d" , &n);
        if (n == 1)
        {
            IncomeNum++;
            scanf("%d" , &IncomeValue);
            TotalIncome += IncomeValue;
        }
        else if (n == 2)
        {
            ExpenseNum++;
            scanf("%d" , &ExpenseValue);
            TotalExpense += ExpenseValue;
        }
    }
    printf("%d %d\n%d %d %d" , IncomeNum , ExpenseNum , TotalIncome , TotalExpense , TotalIncome - TotalExpense);
    
}