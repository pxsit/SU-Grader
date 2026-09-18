#include <bits/stdc++.h>
using namespace std;
int IncomeNum, ExpenseNum, IncomeValue, ExpenseValue;
int TotalIncome, TotalExpense;
int n = 1;

int main() {
    while (n != 0) {
        cin >> n;
        if (n == 1) {
            IncomeNum++;
            cin >> IncomeValue;
            TotalIncome += IncomeValue;
        } else if (n == 2) {
            ExpenseNum++;
            cin >> ExpenseValue;
            TotalExpense += ExpenseValue;
        }
    }
    cout << IncomeNum << ' ' << ExpenseNum << '\n'
         << TotalIncome << ' ' << TotalExpense << ' ' << TotalIncome - TotalExpense;
}