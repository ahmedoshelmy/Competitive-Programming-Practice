#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define eb emplace_back

#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cinarr     for (int i = 0; i < n; ++i) cin>>arr[i]
#define cin(vec) for(auto& el : vec) cin >> el;
#define cout(vec) for(auto& el : vec) cout << el << " ";
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

//    int dx[]={1,  0,-1,0,1,1,-1,-1}; // down - right - up - left - down_right - down-left - up _right - up_left
//    int dy[]={0, 1,0,-1,1,-1,1,-1};

vvi adj ; vi vis; vi teams;
bool dfs(int node , int color ){
    if(vis[node]){
        if(teams[node]!=color+1) re true;
        re false;
    }
    vis[node] ++;
    teams[node] = color+1;  bool cycle = false;
    for(auto & u:adj[node]){
        cycle|= dfs(u, color^1);
    }
    re cycle;
}
void solve(){
 int n,x,y, m ; cin>>n>>m ;
 vis = vi(n) , adj = vvi(n); teams = vi(n);
    for (int i = 0; i < m; ++i) {
        cin>>x>>y; x-- , y-- ;
        adj[x].pb(y); adj[y].pb(x);
    }
    for (int i = 0; i < n; ++i) {
        if(!vis[i]){
            if(dfs(i,0)) re void(cout<<"IMPOSSIBLE");
        }
    }
    cout(teams)
    cout<<el;
}
int main(){
    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
