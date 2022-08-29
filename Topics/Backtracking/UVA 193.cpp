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
const int N = 200001;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
vvi vis;
ll PowMod(ll bs, ll ex, ll M) { if (!ex)re 1; ll p = PowMod((bs*bs) % M, ex >> 1, M); re(ex & 1) ? (p*bs) % M : p; }
int n,m; int mx = INT32_MIN; vi ans; vvi adj;
enum Color { white, black }; vector<Color>curColor;
vector<int> bestBlacks, curBlacks;
bool canBeBlack(int cur)
{	// Neighbors must be white
    for(auto nei : adj[cur])
    {
        if (nei == cur || curColor[nei] == black)	// handle self loops
            return false;
    }
    return true;
}
void backtrack(int node){
    if(node == n) {
        if (bestBlacks.size() < curBlacks.size())
            bestBlacks = curBlacks;
        re ;
    }
    backtrack(node+1);
    if (canBeBlack(node))	// switch to black
    {	// do...rec...undo
        curColor[node] = black;
        curBlacks.push_back(node);

        backtrack(node+1);

        curBlacks.pop_back();
        curColor[node] = white;
    }
}


void solve () {
cin>>n>>m; int x,y; mx = INT32_MIN; ans = vi(0);
adj = vvi(n);
    curBlacks.clear();
    bestBlacks.clear();
    curColor = vector<Color>(n, white);
    for (int i = 0; i < m; ++i) {
        cin>>x>>y;x--,y--;
        adj[x].pb(y),adj[y].pb(x);
    }
    vi cant = vi(n,0); vi black ;

    backtrack(0);
    cout<<bestBlacks.size()<<"\n";

    string space = "";
    for(auto x : bestBlacks)
        cout<<space<<x+1, space = " ";
    cout<<"\n";
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
