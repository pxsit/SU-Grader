#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    while(true){
        int n;
        cin >> n;
        if(n == 0) break;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        int ans = 0;
        for(int i=0;i<n;i++){
            int mn = a[i];
            for(int j=i;j<n;j++){
                mn = min(mn, a[j]);
                ans = max(ans, mn * (j - i + 1));
            }
        }
        cout << ans << '\n';
    }
}