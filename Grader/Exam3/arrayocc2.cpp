#include <cstdio>
#include <algorithm>

int A[100001];
int main() {
int N, K, x;
scanf("%d%d", &N, &K);
fill(A+1, A+(N+1), 0); // Init to zeros
for(int i = 0;i < K; ++i) {
scanf("%d", &x);
if(x >= 1 && x <= N)
++A[x];
}

// Find maximum length of consecutive empty slots
int maxZeroConsec = 0;
int currentConsec = 0;
for(int i = 1; i <= N; ++i) {
if(A[i] == 0)
++currentConsec;
else
currentConsec = 0;
if(currentConsec > maxZeroConsec)
maxZeroConsec = currentConsec;
}
printf("%d\n", maxZeroConsec);

// Find locations of maximum length
currentConsec = 0;
for(int i = 1; i <= N; ++i) {
if(A[i] == 0) {
++currentConsec;
if(currentConsec == maxZeroConsec)
printf("%d ", i);
} else {
currentConsec = 0;
}
}

return 0;
}
