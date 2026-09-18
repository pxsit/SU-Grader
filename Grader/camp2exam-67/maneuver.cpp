#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll minDiff = 1000000;
ll bestSet1[100], bestSet2[100];
ll bestSize1, bestSize2;

void findBestSplit(ll arr[], ll n, ll currentIndex, ll set1[], ll set2[], ll size1, ll size2, ll sum1, ll sum2) {
    if (currentIndex == n) {
        if ((size1 == n / 2 && size2 == n / 2) || (size1 == n / 2 + 1 && size2 == n / 2)) {
            ll diff = abs(sum1 - sum2);
            if (diff < minDiff) {
                minDiff = diff;
                bestSize1 = size1;
                bestSize2 = size2;
                for (ll i = 0; i < size1; i++)
                    bestSet1[i] = set1[i];
                for (ll i = 0; i < size2; i++)
                    bestSet2[i] = set2[i];
            }
        }
        return;
    }

    if (size1 < n / 2 + 1) {
        set1[size1] = arr[currentIndex];
        findBestSplit(arr, n, currentIndex + 1, set1, set2, size1 + 1, size2, sum1 + arr[currentIndex], sum2);
    }

    if (size2 < n / 2) {
        set2[size2] = arr[currentIndex];
        findBestSplit(arr, n, currentIndex + 1, set1, set2, size1, size2 + 1, sum1, sum2 + arr[currentIndex]);
    }
}

int main() {
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll set1[n], set2[n];
    findBestSplit(arr, n, 0, set1, set2, 0, 0, 0, 0);

    for (ll i = 0; i < bestSize2; i++) {
        cout << bestSet2[i];
        if (i < bestSize2 - 1)
            cout << ' ';
    }
    cout << '\n';
    for (ll i = 0; i < bestSize1; i++) {
        cout << bestSet1[i];
        if (i < bestSize1 - 1)
            cout << ' ';
    }
}
