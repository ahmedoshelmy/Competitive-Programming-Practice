#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cinarr     for (int i = 0; i < n; ++i) cin>>arr[i]
#define cin(vec) for(auto& i : vec) cin >> i;
#define cout(vec) for(auto& i : vec) cout << i << " ";
#define coutarr for (int i = 0;i<n ; i++) cout<<arr[i]<<" ";
#define coutarrn for (int i = 0;i<n ; i++) cout<<arr[i]<<endl;
#define cingrid  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin>>grid[i][j];
#define coutgrid  for (int i = 0; i < n; ++i){ for (int j = 0; j < m; ++j) cout<<grid[i][j];cout<<endl;}
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define all(v) v.begin(),v.end()
#define  NO re void(cout<<"NO\n");
#define YES re void(cout<<"YES\n");
#define rep for(int i = 0;i<n;i++)
#define popcnt(a) __builtin_popcount(a)
#define clr(v, d)			memset(v, d, sizeof(v))
#define re   			return
#define el endl
#define INF INT64_MAX
#define error re void(cout<<-1<<el);
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
#define F first
#define S second
#define eps 1e-8
const int N = 1e4+7;

ll gcd(ll a, ll b) { re(b == 0 ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { re((a*b) / gcd(a, b)); }
ll C(ll n, ll r) {
    if (r > n - r) r = n - r;
    ll ans = 1;
    ll i;

    for (i = 1; i <= r; i++) {
        ans = min((ll)100000000, ans *(n - r + i));
        ans /= i;
    }

    return ans;
}

ll nCr(int n, int r)
{

    long long p = 1, k = 1;

    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;

            n--;
            r--;
        }
    }

    else
        p = 1;
  re p ;
}
ll nCrs [31][31];
int dx [] = {1,-1,0,0};
int dy [] = {0,0,1,-1};
void solve () {
  ll n , m , t ;cin>>n>>m>>t;
  ll ans = 0 ;
    for (int i = 4; i <t ; ++i) {
        if(t-i>m) continue;
        if(i>n) continue;
        ans +=(nCrs[n][i])*nCrs[m][t-i];
    }
    cout<<ans<<el;
}
int main()
{
    //    freopen("adam.in", "r", stdin);
//    Linguini
    int t = 1;
    cin>>t;
    for (int i = 1; i <= 30; ++i) {
        for (int j =i; j >0; --j) {
            nCrs[i][j] = nCr(i,j);
        }
    }
    while  (t--){
        solve();
    }
    return  0;
}
