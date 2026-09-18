#include <bits/stdc++.h>
using namespace std;
int converter(const string &name) {
    int n = 0;
    int length = name.size();
    for (int i = 0; i < length; i++) {
        char ch = name[i];
        int value;
        if (isdigit(ch)) {
            value = ch - '0';
        } else {
            value = ch - 'A' + 10;
        }
        if (i > 0) {
            n = n * 36 + value;
        } else {
            n = value;
        }
    }

    return n;
}

int main() {
    string name;
    cin >> name;
    int result = converter(name);
    cout << result << '\n';
}
