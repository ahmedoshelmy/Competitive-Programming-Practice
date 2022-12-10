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
const ll  INF = 1e17;
#define error re void(cout<<-1<<el);
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
#define P pair<int ,int>
typedef vector<vll> vvll;
#define F first
#define S second
#define ar array
const ll  eps  = 1e-17;
const ll mod = 1e9+7;
const ll N =2e5+2;
void solve(){
    int n ; cin>>n ;
    vll d(n) , p(n) ;
    cin(d) cin(p)
    vi order(n) ;
    ll ans = 0 ;
    map<int,int> late ; // indicates the late indices 0 for early 1 for late
    for (int i = 0; i < n; ++i) order[i] = i ,late[i] = true;
    auto cmp = [&](int & x1 , int & x2){
        re p[x2] < p[x1] ;
    };
    sort(all(order) , cmp);
    vll cnt(n+1); // cnt of tasks that the deadlines are <= i
    auto valid = [&] (ll l){
        for (ll i = l; i <=n ; ++i) {
            if(cnt[i]+1> i) re false;
        }
        re true;
    };
    auto increment = [&] (int x){
        for(int i = x ; i<=n;i++) cnt[i]++;
    };
    for (int j = 0; j < n; ++j) {
        if(valid( d[order[j]])){
            late[order[j]] =false ;
            increment(d[order[j]]);
        }
    }
    // cout(cnt) cout<<el;
    for (int i = 0; i < n; ++i) ans+=late[i]*p[i];
    cout<<ans<<el;

}
int main(){
    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
