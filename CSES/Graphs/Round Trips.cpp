#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define Linguini ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cinarr     for (int i = 0; i < n; ++i) cin>>arr[i]
#define cin(vec) for(auto& i : vec) cin >> i
#define cout(vec) for(auto& i : vec) cout << i << " ";
#define coutarr for (int i = 0;i<n ; i++) cout<<arr[i]<<" ";
#define coutarrn for (int i = 0;i<n ; i++) cout<<arr[i]<<endl;
#define cingrid  for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin>>grid[i][j];
#define coutgrid  for (int i = 0; i < n; ++i){ for (int j = 0; j < m; ++j) cout<<grid[i][j];cout<<endl;}
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define all(v) v.begin(),v.end()
#define           NO    cout << "NO\n"
#define rep for(int i = 0;i<n;i++)
#define clr(v, d)			memset(v, d, sizeof(v))
#define re   			return
#define el endl
const int  INF = 1e8 ;
#define error re void(cout<<-1<<el);
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
const int N = 5e4+5;
vi vis ; vvi adj ; int st , en ; vi p ;
bool dfs(int node , int par){
    p[node] = par ;
    vis[node] = true;
    bool ret = false;
    for(auto &u :adj[node]){
        if(u == par) continue;
        if(vis[u]){
            st = u, en = node ;
            re true;
        }
        if( dfs(u,node)) re true;
    }
    re ret;
}

void solve () {
int n ,m ; cin>>n>>m ; int x , y; vis = p = vi(n+1) ; adj = vvi(n+1);
    for (int i = 0; i < m; ++i) {
        cin>>x>>y;
        adj[x].pb(y) , adj[y].pb(x);
    } bool cycle = false; vi path ;
    auto build = [&](){
        x = en; path.pb(x);
        while(x!=st){
            path.pb(p[x]);
            x = p[x] ;
        }
        path.pb(en);
        cout<<(int) path.size()<<el;
        cout(path) cout<<el;
    };
    for (int i = 0; i < n; ++i) {
        if(!vis[i]) cycle |= dfs(i , -1);
        if(cycle){
            build();
            re;
        }
    }
}

int main()
{
    Linguini
    int t = 1;
    while  (t--){
        solve();
    }
    return  0;
}
