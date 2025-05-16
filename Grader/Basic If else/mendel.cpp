#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,no-stack-protector,inline-small-functions,inline,unsafe-math-optimizations,omit-frame-pointer,inline-functions-called-once")
#include <bits/stdc++.h>
#pragma GCC target("avx2,fma,popcnt,lzcnt,bmi,bmi2,sse4.2,tune=native")
#ifndef CATOLOGY
#endif
#define f first
#define s second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define coutf(n, m) cout << fixed << setprecision(n) << m
#define forr(i, a, n) for (int i = a; i < n; i++)
#define forv(i, a) for (auto &i : a)
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define sp " "
#define pb push_back
#define testcase int t; cin >> t; while (t--)
#define cinn int n; cin >> n;
#define ci(a) int a; cin >> a;
#define cins string s; cin >> s;
#define sortall(a) sort(all(a))
#define rsortall(a) sort(rall(a))
#define PI acos(-1)
using namespace std;
typedef long double ld;
typedef unsigned long ul;
typedef long long ll;
typedef unsigned long long ull;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<int, string>> vpis;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
ll modadd(ll a, ll b) { return (a + b) % MOD; }
ll modsub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll modmul(ll a, ll b) { return (a * b) % MOD; }
ll modpow(ll a, ll b) { ll res = 1; while (b > 0) { if (b & 1) res = modmul(res, a); a = modmul(a, a); b >>= 1;}return res;}
ll power(int x, int n) { long double result = exp(log(x) * n); result = round(result); return static_cast<long long>(result); }
bool isprime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); } //หรม
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; } // ครน, prime sieve will return vll of prime until n
vll primesieve(int n){vector<bool> prime(n + 1, true);vll v;for (int p = 2; p * p <= n; p++) {if (prime[p] == true) {for (int i = p * p; i <= n; i += p)prime[i] = false;}}for (int p = 2; p <= n; p++) if (prime[p])v.pb(p); return v;}
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC> istream &operator>>(istream &cin,set<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC> istream &operator>>(istream &cin,multiset<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { for (auto &x:a) cout<<x<<' '; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const set<typC> &a) { for (auto &x:a) cout<<x<<' '; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const multiset<typC> &a) { for (auto &x:a) cout<<x<<' '; return cout;}

int32_t main(){fastio;
    int t;
    ll n;
    cin >> t;
    cin >> n;
    if(t == 1)
        cout << n << sp << 0;
    else if(t == 2)
        cout << n << sp << 0;
    else if(t == 3)
        cout << n << sp << 0;
    else if(t == 4)
        cout << 0 << sp << n;
    else if(t == 5)
        cout << n/2 << sp << n/2;
    else    
        cout << (n/4)*3 << sp << n/4;
}