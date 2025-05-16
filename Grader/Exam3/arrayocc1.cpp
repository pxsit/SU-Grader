#include <stdio.h>
#include <algorithm>

int A[100001];
int main() {
int N, K, x;
scanf("%d%d", &N, &K);
fill(A+1, A+(N+1), 0); // Init to zeros
int success = 0;
int outBound = 0;
int dup = 0;
for(int i = 0;i < K; ++i) {
scanf("%d", &x);
if(x < 1 || x > N)
++outBound;
else {
if(A[x] > 0)
++dup;
else
++success;
++A[x];
}
}
printf("%d\n%d\n%d\n", success, outBound, dup);
int maxDup = 0;
for(int i = 1; i <= N; ++i) {
if(A[i] > maxDup)
maxDup = A[i];
}
for(int i = 1; i <= N; ++i) {
if(A[i] == maxDup)
printf("%d ", i);
}

return 0;
}
