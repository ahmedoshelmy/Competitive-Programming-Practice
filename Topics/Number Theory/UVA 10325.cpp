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
const int N = 10000001;

ll gcd(ll a, ll b) { re(b == 0 ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { re((a*b) / gcd(a, b)); }

void solve () {
    ll ans = 0 ;
    ll n , m ;
    while(cin>>n>>m) {
        ans =0;
        vi a(m);
        cin(a)
        m = 1<<m;
        for (int i = 1; i < m; ++i) {
            ll res= 1 ;
            for (int j = 0; (1<<j)<=i ; ++j) {
                if(i&(1<<j)){
                    res=a[j]/gcd(res,a[j])*res;
                    if(res>n){
                        res = 1; break;
                    }
                }
            }
            if(res==1) continue;
            if(popcnt(i)&1) ans+=(n/res);
            else    ans-=(n/res);
        }
        cout << max(n - ans,0LL) << el;
    }
}
int main()
{
    //    freopen("adam.in", "r", stdin);
//    Linguini
    int t = 1;
//    cin>>t;
    while  (t--){
        solve();
    }
    return  0;
}
