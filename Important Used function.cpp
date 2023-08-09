//DR Mostafa

#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)

typedef long long         ll;
const ll OO = 1e8;
#define pb					push_back
#define MP					make_pair
#define P(x)				cout<<#x<<" = { "<<x<<" }\n"
typedef long double   	  ld;
typedef vector<int>       vi;
typedef vector<double>    vd;
typedef vector< vi >      vvi;
typedef vector< vd >      vvd;
typedef vector<string>    vs;



    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);



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


 
ll add( ll x , ll y , ll M = 1e9 + 7 ){
    return ( x%M + y%M )%M ;
}
 
ll sub( ll x , ll y , ll M = 1e9 + 7 ){
    return ( x%M - y%M + 2*M )%M ;
}
 
ll mul( ll x , ll y , ll M = 1e9 + 7 ){
    return ( x%M * y%M )%M ;
}
 


bool cmp(double a, double b) { re abs(a - b)<EPS; }
bool isint(double a) { re cmp(a, round(a)); }
bool isPrime(ll n) { if (n == 2)re 1; if (n<2 || n % 2 == 0)re 0; for (ll i = 3; i*i <= n; i += 2)if (n%i == 0)re 0; re 1; }
bool isPalindrome(string str) { ll l = 0; ll h = str.size() - 1; while (h > l) { if (str[l++] != str[h--]) { re 0; } } re 1; }
bool isPerfectSquare(ld x) { ld sr = sqrt(x); re((sr - floor(sr)) == 0); }
// For large Numbers 

((PowMod(3, 3 * n, MOD) - PowMod(7, n, MOD)) % MOD + MOD) % MOD

    vector<char> chars ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
vector<char> nums = {'0' , '1' , '2' , '3' , '4' , '5' , '6' , '6' , '7' , '8' , '9'};

int dx[]={1,0,-1,0,1,1,-1,-1}; // down - right - up - left - down_right - down-left - up _right - up_left
int dy[]={0,1,0,-1,1,-1,1,-1};
//Combinatorics 

ll C(ll n, ll r) {
	if (r > n - r) r = n - r;
	ll ans = 1;
	ll i;
 
	for (i = 1; i <= r; i++) {
		ans *= n - r + i;
		ans /= i;
	}
	return ans;
}
ll power(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    while (y){
        if (y & 1)
            res = (res * x) % p;
        y >>= 1;
        x = (x * x) % p;
    }
    return res;
}
 
ll modInverse(ll n, ll p)
{
    return power(n, p - 2, p);
}
 
ll nCr(ll n, ll r, ll p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    ll fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
    return ((fac[n] * modInverse(fac[r], p) % p) * (modInverse(fac[n - r], p) % p))% p;
}
 
ll fact(ll n)
{
    ll res = 1LL;
    for (ll i = 2LL; i <= n; i++)
        res = (res * i)%MOD;
    return res;
}
ll nPr(ll n, ll r){
    return (fact[n]%MOD*pow(fact[n-r], MOD-2, MOD)%MOD)%MOD;
}
//Binary Search 
	//Lower bound example "Getting the index if the first value that satisfies the conditoin" 
	
 while(l<r){
        mid = l + (r-l)/2 ;
        if(sum(mid)-(n-mid)>=k){
            r = mid;
        }else l = mid  +1 ;
    }
    if(l < n && sum(l)<k+1) l++;


// Sorting 

auto myComp = [&](pair<int,string> e1, pair<int,string> e2) {
        if(e1.first!=e2.first)
            return e1.first<e2.first;
        else
            return e1.second<e2.second;
    };
auto myComp = [&](const vector<int> & a, const vector<int> & b){ return a.size() < b.size(); };

// Lambda Expressions 
   function<void(int, int)> flood_fill = [&](int i, int j) {
        if (vis[i][j]) return;
        vis[i][j] = true;
        comp.emplace_back(i, j);
        for (int k = 0; k < (int)dx.size(); k++) {
            int x = i + dx[k], y = j + dy[k];
            if (x < 0 || x >= n || y < 0 || y >= m) continue;
            if (grid[x][y] == '*') flood_fill(x, y);
        }
    };
//Converting 

 string toBinary(int n)
        {
            string r;
            while (n != 0){
                r += ( n % 2 == 0 ? "0" : "1" );
                n /= 2;
            }
            reverse(all(r));
            return r;
        }



//Number Theory 

bool isPrime(ll x){
    if(x<2||x%2==0) re false;
    for (int i = 3; i*i <=x ; i+=2) {
        if(x%i==0) re false;
    }
    re true;
}

//Precision 

    printf("%.15lf\n",ans);
