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

//    int dx[]={1,  0,-1,0,1,1,-1,-1}; // down - right - up - left - down_right - down-left - up _right - up_left
//    int dy[]={0, 1,0,-1,1,-1,1,-1};
string chars = "abcdefghijklmnopqrstuvwxyz";
int n , m ;
int find_set(int v,vi & parent) {
    int root = v;
    while(root!=parent[root]) root = parent[root];
    if (v != root){
        int next = parent[v];
        parent[v] = root;
        v = next;
    }
    return root;
}

void make_set(int v,vi & parent ,vi & union_rank) {
    parent[v] = v;
    union_rank[v] = 0;
}

void union_sets(int a, int b,vi & union_rank , vi & parent) {
    a = find_set(a,parent);
    b = find_set(b,parent);
    if (a != b) {
        if (union_rank[a] < union_rank[b])
            swap(a, b);
        parent[b] = a;
        if (union_rank[a] == union_rank[b])
            union_rank[a]++;
    }
}
vi vis ; vvi adj ;
void dfs(int node){
    vis[node] ++;
    for(auto & u:adj[node]){
        if(!vis[u]) dfs(u) ;
    }
}
void solve(){
cin>>n>>m; int x , y;
adj = vvi(n) , vis = vi(n);
    for (int i = 0; i < m; ++i) {
     cin>>x>>y; x-- ,y --;
     adj[x].eb(y) , adj[y].eb(x);
    }
int cnt = 0; int prev = -1;
vi ans;
    for (int i = 0; i < n; ++i) {
        if(!vis[i])dfs(i) ,ans.pb(i+1);
    }
    cout<<(int)ans.size()-1<<el;
    for (int i = 1; i <(int)ans.size() ; ++i) {
        cout<<ans[i-1]<<' '<<ans[i]<<el;
    }
}
int main(){
    Linguini
    int t = 1;
    while(t--){
        solve();
    }
}
