#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i, j, temp;
    int arr[5000];
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << arr[0] << ' ';
    for (i = 1; i < N; i++) {
        if (arr[i] != arr[i - 1]) {
            cout << arr[i] << ' ';
        }
    }

}