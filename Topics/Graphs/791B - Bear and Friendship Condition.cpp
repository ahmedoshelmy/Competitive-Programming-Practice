#include <bits/stdc++.h>
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
#define all(v) v.begin(),v.end()
#define rep for(int i = 0;i<n;i++)
#define clr(v, d)			memset(v, d, sizeof(v))
#define re   			return
#define el endl
typedef vector<int> vi;
typedef vector<vi> vvi;
const int N = 150100;
int cnt = 0;
vvi adj;
bool vis[N];
ll n , m;
ll v_cnt , e_cnt ;
void dfs(int x){
    assert(!vis[x]);
    vis[x] = true;
    e_cnt += adj[x].size();
    v_cnt++;
    for (int i = 0; i < adj[x].size(); ++i) {
        if (!vis[adj[x][i]]) {
            dfs(adj[x][i]);
        }
    }

}
void solve () {
    clr(vis,0);
    cin>>n>>m; int x,y ;
    adj = vvi(n+1);
    for (int i = 0; i < m; ++i) {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    for (int i = 1; i <= n; ++i) {
        if(!vis[i]){
            v_cnt = 0 , e_cnt = 0 ;
            dfs(i);
            if(e_cnt != v_cnt * (v_cnt-1)){
                puts("NO");
                re;
            }
        }
    }
    cout<<"YES\n";
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
