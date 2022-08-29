#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define eb emplace_back

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
#define clr(v, d)            memset(v, d, sizeof(v))
#define re               return
#define el endl
#define INF INT64_MAX
#define error re void(cout<<-1<<el);
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
#define P pair<int ,int>
typedef vector<vll> vvll;
#define F first
#define S second
#define eps 1e-8
const ll mod = 1e9+7;
const int N = 1e5+9;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
vvi vis;
ll PowMod(ll bs, ll ex, ll M) { if (!ex)re 1; ll p = PowMod((bs*bs) % M, ex >> 1, M); re(ex & 1) ? (p*bs) % M : p; }


ll manhattan_sum(vll v){
    sort(all(v));
    ll res = 0, sum = 0 ;
    for (ll i = 0; i < (int)v.size(); ++i) {
        res+=(v[i]*i-sum);
        sum+=(v[i]);
    }
    re res ;
}
void solve () {
   ll n ,m ; cin>>n>>m; 
   vector<pair<vll,vll>>p(N); ll x;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>x;
            p[x].F.eb(i), p[x].S.eb(j);
        }
    }
    ll ans = 0 ;
    for (int i = 1; i <N ; ++i) {
        if(p[i].F.empty()) continue;
        ans+=(manhattan_sum(p[i].F)+ manhattan_sum(p[i].S));
    }
    cout<<ans<<el;
}

int main()
{
//    Linguini
    int t = 1;
     cin>>t;
    while  (t--){
        solve();
    }
    return  0;
}
