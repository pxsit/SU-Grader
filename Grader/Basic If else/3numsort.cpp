#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> a(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    for (int i = 0; i < 3; i++) {
        std::cout << a[i] << ' ';
    }
}