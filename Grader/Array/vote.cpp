#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, K, i, vote, max_votes = 0, winner;
    cin >> N >> K;
    int votes[N];
    for (i = 0; i < N; i++) {
        votes[i] = 0;
    }
    for (i = 0; i < K; i++) {
        cin >> vote;
        votes[vote - 1]++;
    }

    for (i = 0; i < N; i++) {
        if (votes[i] > max_votes) {
            max_votes = votes[i];
            winner = i + 1;
        }
    }
    cout << winner << '\n';
    cout << max_votes << '\n';
}
