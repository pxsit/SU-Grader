#include <iostream>
#include <cstring>
#include <string>

using namespace std;

#define MAXN 1000000

int N, K;
string S;
int A[MAXN];
int B[MAXN];

int main() {

	cin.sync_with_stdio(false);

	cin >> N >> K >> S;

	for (int i = 0; i < N; i++) {
		A[i] = S[i] - 'A';
	}
	for (int j = 30; j >= 0; j--) {
		if (K & (1 << j)) {
  			for (int i = 0; i < N; i++) {
				int o = (i - (1 << j)) % N;
				if (o < 0) {
					o += N;
				}
 				B[o] = A[i] ^ A[o];
			}
			memcpy(A, B, sizeof(A));
		}
	}

  	for (int i = 0; i < N; i++) {
		S[i] = A[i] + 'A';
	}
	cout << S << endl;

	return 0;
}
