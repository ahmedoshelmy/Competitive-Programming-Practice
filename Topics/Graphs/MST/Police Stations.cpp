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
const int N = 150100;
ll x,y,c,n , m , a;
vi parent , union_rank ;
int find_set(int v) {
    int root = v;
    while(root!=parent[root]) root = parent[root];
    if (v != root){
        int next = parent[v];
        parent[v] = root;
        v = next;
    }
    return root;
}

void make_set(int v) {
    parent[v] = v;
    union_rank[v] = 0;
}
void init(){
    for (int i = 0; i < n; ++i) {
        parent[i] = i ;
    }
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (union_rank[a] < union_rank[b])
            swap(a, b);
        parent[b] = a;
        if (union_rank[a] == union_rank[b])
            union_rank[a]++;
    }
}
vvi adj  ;  vi vis ;
void dfs(int node){
    vis[node]++;
    for(auto &u:adj[node]) if(!vis[u]) dfs(u);
}

void solve () {
cin>>n>>m>>a;
    union_rank = vis = parent = vi(n); adj = vvi(n);
init() ;
vector<pair<ll,pair<int,int>>> q ;
     for (int i = 0; i < m; ++i) {
        cin>>x>>y>>c;x--,y--;
        q.push_back({c,{x,y}});
    }
     sort(all(q));
     ll cost = 0 ;int police_stations = 0 ;
    for (auto & u:q){
        ll edge = u.first ;
        int from =u.second.first;
        int to =u.second.second;
        from = find_set(from) , to = find_set(to) ;
        if( from != to){
            if(edge < a) {
                cost += edge;
                union_sets(from, to);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if(parent[i] == i) police_stations++,cost+=a;
    }
    cout<<cost<<' '<<police_stations<<el;
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
