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
const ll mod =998244353 ;
const int N = 3000;

int dx[]={1,0,-1,0,1,1,-1,-1}; // down - right - up - left - down_right - down-left - up _right - up_left
int dy[]={0,1,0,-1,1,-1,1,-1};
ll PowMod(ll bs, ll ex, ll M) { if (!ex)re 1; ll p = PowMod((bs*bs) % M, ex >> 1, M); re(ex & 1) ? (p*bs) % M : p; }
vvi adj ; vi vis; vi level; vi capacity;
void dfs(int node,int l){
    vis[node] =1;
    capacity[l] += (int) adj[node].size() - (node!=0) ;
    for(auto u:adj[node]){
        if(!vis[u]){
            level[u] = level[node] + 1;
            dfs(u,l+1);
        }
    }

}
void solve () {
int n,q,x,y ; cin>>n>>q;
adj = vvi(n);
vis = vi(n); level = vi(n); capacity = vi(n);
    for (int i = 0; i <n-1 ; ++i) {
        cin>>x>>y; x--;y--;
        adj[x].pb(y); adj[y].pb(x);
    }
    level[0] = 1; capacity[0] =1;
    dfs(0,1); int idx; int cur_level = 0 ; vi cur_capacity = capacity;
    int ans = 0 ;
    for (int i = 0; i < q; ++i) {
        cin>>idx; idx--;
        cur_capacity[cur_level]--;
        if(!cur_capacity[cur_level]) ans+=capacity[cur_level],cur_level++;
    }
    cout<<ans<<el;

}
int main(){
//    Linguini
    int t = 1; int cnt = 1;
    cin>>t;
    while  (t--){
        cout<<"Case #"<<cnt<<": ";
        solve();
        cnt++;
    }
    return  0;
}
