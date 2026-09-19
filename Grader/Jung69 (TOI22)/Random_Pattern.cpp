#include <bits/stdc++.h>
using namespace std;

const int digits[] = {1, 2, 5, 0, 7, 6, 7, 0, 5, 2};
int main() {
    vector<int> date;
    for (int i = 0; i < 10; i++) {
        char c;
        cin >> c;
        if (isdigit(c)) {
            date.push_back(c - '0');
        }
    }
    for (int i = 0; i < date.size(); i++)
        cout << (digits[date[i]] + i) % 10 << " ";
}
