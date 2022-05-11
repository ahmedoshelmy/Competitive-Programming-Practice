    #include <bits/stdc++.h>
    #include <algorithm>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
    using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
    using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
    using namespace std;
    using ll = long long;
    #define pb push_back
    #define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define cinarr     for (int i = 0; i < n; ++i) cin>>a[i]
    #define coutarr for (int i = 0;i<n ; i++) cout<<a[i]<<" ";
    #define coutarrn for (int i = 0;i<n ; i++) cout<<a[i]<<endl;
    #define cingrid  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin>>grid[i][j];
    #define coutgrid  for (int i = 0; i < n; ++i){ for (int j = 0; j < m; ++j) cout<<grid[i][j];cout<<endl;}
    #define lp(i, n)    for(int i=0;i<(int)(n);++i)
    #define rep for(int i = 0;i<n;i++)
    #define el endl
    typedef vector<int> vi;
    typedef vector<vi> vvi;
    const long long MOD = 1e9+7;
    const int N = 32768;

#define ld				long double
#define FOR(i, b, e)    for (ll i =(b)-((b)>(e));i!=(e)-((b)>(e));i += 1-2*((b)>(e)))
#define EPS  			1e-9
#define all(v) 			v.begin(),v.end()
#define X 				first 
#define Y 				second
#define IO 				std::ios_base::sync_with_stdio(0);cin.tie(NULL);
#define MAXI 			100005
#define endl 			'\n'
#define re   			return
#define mp				make_pair
#define NumofDigits(n)  ((int)log10(n)+1)
#define fixedpre(n)     fixed<<setprecision(n);

 
ll pw(ll b, ll p) { if (!p) re 1; ll sq = pw(b, p / 2); sq *= sq; if (p % 2) sq *= b; re sq; }
ll gcd(ll a, ll b) { re(b == 0 ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { re((a*b) / gcd(a, b)); }
ll PowMod(ll bs, ll ex, ll M) { if (!ex)re 1; ll p = PowMod((bs*bs) % M, ex >> 1, M); re(ex & 1) ? (p*bs) % M : p; }
ll ModInverse(ll a) { re PowMod(a, MOD - 2, MOD); }
ll ExtGCD(ll a, ll b, ll& x, ll& y) { if (!b) { x = 1; y = 0; re a; } ll r = ExtGCD(b, a%b, y, x); y -= a / b*x; re r; }
ll mult(ll a, ll b) { re(1LL * a * b) % MOD; }


bool cmp(double a, double b) { re abs(a - b)<EPS; }
bool isint(double a) { re cmp(a, round(a)); }
bool isPrime(ll n) { if (n == 2)re 1; if (n<2 || n % 2 == 0)re 0; for (ll i = 3; i*i <= n; i += 2)if (n%i == 0)re 0; re 1; }
bool isPalindrome(string str) { ll l = 0; ll h = str.size() - 1; while (h > l) { if (str[l++] != str[h--]) { re 0; } } re 1; }
bool isPerfectSquare(ld x) { ld sr = sqrt(x); re((sr - floor(sr)) == 0); }
// For large Numbers 

((PowMod(3, 3 * n, MOD) - PowMod(7, n, MOD)) % MOD + MOD) % MOD

